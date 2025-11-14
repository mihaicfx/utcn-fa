# Assignment 7: Dynamic Order Statistics

**Allocated time:** 2 hours

## 1. Implementation

You are required to implement correctly and efficiently the management operations of an order statistics tree (chapter 14.1 from [1]).

You have to use a balanced, augmented Binary Search Tree. Each node in the tree holds, besides the necessary information, also the `size` field (i.e., the size of the sub-tree rooted at the node).

The management operations of an order statistics tree are:

*   **BUILD TREE(n)**
    *   Builds a balanced BST containing the keys 1,2,...n (hint: use a divide and conquer approach).
    *   Make sure you initialize the `size` field in each tree node.
*   **OS-SELECT(tree, i)**
    *   Selects the element with the i-th smallest key.
    *   The pseudo-code is available in chapter 14.1 from the book [1].
*   **OS-DELETE(tree, i)**
    *   You may use the deletion from a BST, without increasing the height of the tree (why don’t you need to rebalance the tree?).
    *   Keep the `size` information consistent after subsequent deletes.
    *   There are several alternatives to update the `size` field without increasing the complexity of the algorithm (it is up to you to figure this out).

Does OS-SELECT resemble anything you studied this semester?

## 2. Minimal Requirements for Grading

The lack of any of the minimum requirements (even partially) may result in a lower grade through penalties or refusal to accept the assignment, resulting in a grade of 0.

*   **Demo**: Prepare a demonstration of correctness for each algorithm implemented. The correctness of each algorithm is demonstrated through a simple example (maximum 10 values).
*   The charts created must be easy to evaluate, grouped, and added through the Profiler functions as specified by the assignment requirements. The assignment will not be evaluated if it contains a plethora of ungrouped charts. For example, the comparative analysis implies the grouping of the compared algorithms.
*   Interpret the chart and write your observations in the header (block comments) section at the beginning of your `main.cpp` file.
*   We do not accept assignments without code indentation and with code not organized in functions (for example, where the entire code is in the `main` function).
*   The points from the requirements correspond to a correct and complete solution, quality of interpretation from the block comment, and the correct answer to the questions from the teacher.

## 3. Requirements

### 3.1. BUILD TREE (5p)

*   Correct and efficient implementation.
*   **Demo**: You will have to prove your algorithm(s) work on a small-sized input (11).
*   Pretty-print the initially built tree.

### 3.2. OS-SELECT (1p)

*   Correct and efficient implementation.
*   **Demo**: You will have to prove your algorithm(s) work on a small-sized input (11).
*   Execute OS-SELECT for a few elements (at least 3) by a randomly selected index.

### 3.3. OS-DELETE (2p)

*   Correct and efficient implementation.
*   **Demo**: You will have to prove your algorithm(s) work on a small-sized input (11).
*   Execute OS-SELECT followed by OS-DELETE for a few elements (at least 3) by a randomly selected index, and pretty-print the tree after each execution.

### 3.4. Management Operations Evaluation (2p)

Once you are sure your program works correctly:

*   Vary `n` from 100 to 10000 with a step of 100.
*   For each `n` (don’t forget to repeat 5 times):
    *   BUILD a tree with elements from 1 to n.
    *   Perform `n` sequences of OS-SELECT and OS-DELETE operations using a randomly selected index based on the remaining number of elements in the BST.
    *   Evaluate the number of operations needed for each management operation (BUILD, SELECT, DELETE – resulting in a plot with 3 series). Evaluate the computational effort as the sum of the comparisons and assignments performed by each individual management operation for each value of `n`.

### 3.5. Bonus: Implementation using AVL / Red-Black Tree (1p)

*   **Demo**: You will have to prove your algorithm(s) work on a small-sized input (11).

## 4. References

\[1] Thomas H. Cormen et al. Introduction to Algorithms. 2nd. The MIT Press, 2001. isbn: 0262032937.
