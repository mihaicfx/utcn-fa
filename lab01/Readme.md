# Analysis & Comparison of Direct Sorting Methods

## Implementation

You are required to implement correctly and efficiently 3 direct sorting methods (Bubble Sort,
Insertion Sort – using either linear or binary insertion and Selection Sort).

## Requirements

### 1. Implementation of direct sorting method
• Bubble sort
• Insertion sort
• Selection sort

To prove your algorithm(s) work, you have to prepare a demo on a smallsized input (which may be hard-coded).

### 2. Test algorithms for correctness

You have to implement unit tests for each algorithm on random input data.

### 3. Evaluate algorithms for the average case

You are required to compare the three sorting algorithms, in the best, average and worst cases.
Remember that for the average case you have to repeat the measurements m times (m=5 should
suffice) and report their average; also, for the average case, make sure you always use the same
input sequence for all three sorting methods. To make the comparison fair, make sure you know
how to generate the best/worst case input sequences for all three methods.
This is how the analysis should be performed for a sorting method, in any of the three cases (best,
average and worst):
- vary the dimension of the input array (n) between [100…10000], with an increment of maximum
500 (we suggest 100).
- for each dimension, generate the appropriate input sequence for the sorting method; run the
sorting method counting the operations (i.e., number of assignments, number of comparisons and
their sum).
! Only the assignments (=) and comparisons (<, ==, >, !=) which are performed on the input
structure and its corresponding auxiliary variables matter.

### 4. Evaluate algorithm for best and worst case

For each analysis case (best, average, and worst), generate charts which compare the three
methods; use different charts for the number of comparisons, number of assignments and total
number of operations. If one of the curves cannot be visualized correctly because the others have
a larger growth rate (e.g., a linear function might seem constant when placed on the same chart
with a quadratic function), place that curve on a separate chart as well. Name your charts and the
curves on each chart appropriately.

### 4. Bonus: Binary insertion sort

You have to implement insertion sort using binary search.