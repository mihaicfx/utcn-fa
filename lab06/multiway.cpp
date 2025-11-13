#include "multiway.h"

#include "catch2.hpp"
#include <iostream>

namespace lab06
{
    struct MultiWayTreeNode
    {
        // TODO: define structure elements
    };

    struct BinaryTreeNode
    {
        // TODO: define structure elements
    };

    void recursiveTraversal(TreeNode* root)
    {
        // TODO: Implement recursive traversal
    }

    void iterativeTraversal(TreeNode* root)
    {
        // TODO: Implement iterative traversal
    }

    void prettyPrintR1(const int* parentArray, int n)
    {
        // TODO: Implement pretty print for R1
    }

    void prettyPrintR2(MultiWayTreeNode* root)
    {
        // TODO: Implement pretty print for R2
    }

    void prettyPrintR3(BinaryTreeNode* root)
    {
        // TODO: Implement pretty print for R3
    }

    MultiWayTreeNode* transformR1toR2(const int* parentArray, int n)
    {
        // TODO: Implement transformation from R1 to R2
        return nullptr;
    }

    BinaryTreeNode* transformR2toR3(MultiWayTreeNode* root)
    {
        // TODO: Implement transformation from R2 to R3
        return nullptr;
    }

    TEST_CASE("Tree Representations and Transformations")
    {
        // The example from the readme: Π = {2, 7, 5, 2, 7, 7, −1, 5, 2}
        const int parentArray[] = { 2, 7, 5, 2, 7, 7, -1, 5, 2 };
        const int n = sizeof(parentArray) / sizeof(parentArray[0]);

        SECTION("Transformation R1 to R2 and Pretty Print R2") {
            // TODO: Test transformR1toR2
        }

        SECTION("Transformation R2 to R3 and Pretty Print R3") {
            // TODO: Test transformR2toR3
        }
    }

} // namespace lab06
