#ifndef __COMMAND_LINE_H__
#define __COMMAND_LINE_H__

#include "console.h"

#include <cstring>
#include <string>
#include <functional>
#include <vector>
#include <algorithm>
#include <stdexcept>

#ifndef _MSC_VER
#define strtok_s(s, delim, context) strtok_r(s, delim, context)
#endif

enum AnalysisCase { AVERAGE, BEST, WORST };

inline AnalysisCase strToCase(const std::string& caseStr)
{
    if (caseStr == "avg" || caseStr == "average") {
        return AVERAGE;
    } else if (caseStr == "best") {
        return BEST;
    } else if (caseStr == "worst") {
        return WORST;
    }
    throw std::runtime_error("Invalid case '" + caseStr + "'");
}

inline void printError(const std::string& message)
{
        set_text_color(12, 0);
        printf("%s", message.c_str());
        reset_text_color();
        printf("\n");
}


typedef std::vector<const char*> CommandArgs;

struct CommandSpec
{
    std::string name;
    std::function<void(const CommandArgs&)> action;
    std::string description;
};

inline void help(const std::vector<CommandSpec>& commands)
{
    set_text_color(1, 0);
    printf("The following commands are supported:\n");
    reset_text_color();
    int maxLength = 0;
    for (const auto& cmd : commands) {
        maxLength = std::max<int>(maxLength, static_cast<int>(cmd.name.length()));
    }
    for (const auto& cmd : commands) {
        printf("  > %-*s %s\n", maxLength + 1, cmd.name.c_str(), cmd.description.c_str());
    }
}

inline std::vector<CommandSpec>::const_iterator findCommand(const std::vector<CommandSpec>& commands, const std::string& command)
{
    auto partMatch = commands.end();
    for (auto it = commands.begin(); it != commands.end(); ++it) {
        if (it->name == command) {
            return it;
        } else if (it->name.substr(0, command.size()) == command) {
            if (partMatch == commands.end()) {
                partMatch = it;
            } else {
                // ambiguous partial match
                return commands.end();
            }
        }
    }
    return partMatch;
}

inline int runCommandLoop(std::vector<CommandSpec> commands)
{
    commands.push_back({"help", [&](const CommandArgs&) { help(commands); }, "display this message"});
    commands.push_back({"quit", [](const CommandArgs&) { exit(0); }});

    char line[100];
    CommandArgs args;
    while (printf("> "), fgets(line, sizeof(line), stdin))
    {
        char *next_token = nullptr;
        const char* token = strtok_s(line, " \n", &next_token);
        if (!token) {
            continue;
        }
        auto it = findCommand(commands, token);
        if (it != commands.end()) {
            args.clear();
            while (token) {
                token = strtok_s(NULL, " \n", &next_token);
                if (token) {
                    args.push_back(token);
                }
            }
            try {
                it->action(args);
            } catch (std::exception& e) {
                printError("\nException caught executing '" + it->name + "': " + e.what());
            }
        } else {
            printError("Invalid command: " + std::string(token));
        }
    }

    return 0;
}

#endif // __COMMAND_LINE_H__