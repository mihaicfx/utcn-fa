#include "multiway.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.hpp"

#include "commandline.h"

#include <cstdio>
#include <string>
#include <iostream>
#include <vector>

using namespace lab06;

void runTests(const CommandArgs& args)
{
    static Catch::Session session;
    session.run();
}

// A simple binary tree for traversal demos
//      4
//     / \
//    2   5
//   / \
//  1   3
TreeNode n1 = {1, nullptr, nullptr, nullptr};
TreeNode n3 = {3, nullptr, nullptr, nullptr};
TreeNode n2 = {2, &n1, &n3, nullptr};
TreeNode n5 = {5, nullptr, nullptr, nullptr};
TreeNode root = {4, &n2, &n5, nullptr}; // root

void setupExampleTreeParents() {
    n1.parent = &n2;
    n3.parent = &n2;
    n2.parent = &root;
    n5.parent = &root;
}

void demoRecursiveTraversal(const CommandArgs& args)
{
    std::cout << "Recursive traversal: ";
    recursiveTraversal(&root);
    std::cout << "\n";
}

void demoIterativeTraversal(const CommandArgs& args)
{
    std::cout << "Iterative traversal: ";
    iterativeTraversal(&root);
    std::cout << "\n\n";
}

void demoTransformations(const CommandArgs& args)
{
    if (args.size() == 0) {
        std::cout << "At least one node is required.\n";
        return;
    }

    std::vector<int> parentArray;
    for (const auto& arg : args) {
        parentArray.push_back(atoi(arg));
    }

    std::cout << "--- Running Transformation Demos ---\n\n";

    std::cout << "1. Pretty Print from Parent Array (R1):\n";
    prettyPrintR1(parentArray.data(), static_cast<int>(parentArray.size()));
    std::cout << "\n";

    MultiWayTreeNode* r2_root = transformR1toR2(parentArray.data(), static_cast<int>(parentArray.size()));
    std::cout << "2. Transformed to Multi-way Tree (R2) and Pretty Printed:\n";
    prettyPrintR2(r2_root);
    std::cout << "\n";

    BinaryTreeNode* r3_root = transformR2toR3(r2_root);
    std::cout << "3. Transformed to Binary Tree (R3) and Pretty Printed:\n";
    prettyPrintR3(r3_root);
    std::cout << "\n";
}

int main()
{
    setupExampleTreeParents();

    const std::vector<CommandSpec> commands =
    {
        {"recursive_traversal", demoRecursiveTraversal, "Demo recursive binary tree traversal"},
        {"iterative_traversal", demoIterativeTraversal, "Demo iterative binary tree traversal"},
        {"demo", demoTransformations, "[R1] Demo tree transformations and pretty prints"},
        {"test", runTests, "Run unit-tests"},
    };
    return runCommandLoop(commands);
}