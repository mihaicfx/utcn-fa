#include "hash_table.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include "commandline.h"
#include "Profiler.h"

#include <cstdio>
#include <string>

using namespace lab05;

Profiler profiler("hash table");

HashTable* hashTable = nullptr;

void create(const CommandArgs& args)
{
    if (hashTable != nullptr) {
        printf("Destroying existing hash table before creating a new one.\n");
        destroyHashTable(hashTable);
        hashTable = nullptr;
    }
    const int size = args.empty() ? 10 : atoi(args[0]);
    hashTable = createHashTable(size);
    if (hashTable) {
        printf("Created a hash table of size %d.\n", size);
    } else {
        printf("Failed to create a hash table of size %d.\n", size);
    }
}

void insert_cmd(const CommandArgs& args)
{
    if (!hashTable) {
        printf("Please create a hash table first using the 'create' command.\n");
        return;
    }
    if (args.size() < 2) {
        printf("Usage: insert <id> <name>\n");
        return;
    }
    const int id = atoi(args[0]);
    const char* name = args[1];
    if (insert(hashTable, id, name)) {
        printf("Inserted entry with ID %d and name '%s'.\n", id, name);
    } else {
        printf("Failed to insert entry with ID %d. The table might be full.\n", id);
    }
}

void search_cmd(const CommandArgs& args)
{
    if (!hashTable) {
        printf("Please create a hash table first using the 'create' command.\n");
        return;
    }
    if (args.empty()) {
        printf("Usage: search <id>\n");
        return;
    }
    const int id = atoi(args[0]);
    Entry* foundEntry = search(hashTable, id);
    if (foundEntry) {
        printf("Entry found: ID = %d, Name = '%s'\n", foundEntry->id, foundEntry->name);
    } else {
        printf("Entry with ID %d not found.\n", id);
    }
}

void remove_cmd(const CommandArgs& args)
{
    if (!hashTable) {
        printf("Please create a hash table first using the 'create' command.\n");
        return;
    }
    if (args.empty()) {
        printf("Usage: remove <id>\n");
        return;
    }
    const int id = atoi(args[0]);
    if (remove(hashTable, id)) {
        printf("Entry with ID %d successfully removed.\n", id);
    } else {
        printf("Entry with ID %d not found or could not be removed.\n", id);
    }
}

void test(const CommandArgs& args)
{
    static Catch::Session session;
    session.run();
}

void perf(const CommandArgs& args)
{
    evaluateSearch();
    profiler.reset();
}

void perf_del(const CommandArgs& args)
{
    evaluateSearchAfterDeletion();
    profiler.reset();
}

int main()
{
    const std::vector<CommandSpec> commands =
    {
        {"create", create, "[size] - create a new hash table"},
        {"insert", insert_cmd, "<id> <name> - insert a new entry"},
        {"search", search_cmd, "<id> - search for an entry by ID"},
        {"remove", remove_cmd, "<id> - remove an entry by ID"},
        {"test", test, "run unit-tests"},
        {"perf", perf, "run performance analysis for search"},
        {"perf_del", perf_del, "run performance analysis for search after delete"}
    };
    return runCommandLoop(commands);
}