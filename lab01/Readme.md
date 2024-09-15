# Assignment No. 1: Analysis & Comparison of Direct Sorting Methods

For building and running, please refer to the demo.

## Implementation

You are required to implement correctly and efficiently 3 direct sorting methods (Bubble Sort,
Insertion Sort – using either linear or binary insertion and Selection Sort).

## Minimal requirements for grading
- Prepare a demo for each algorithm implemented.
- Interpret the charts and write your observations in the header (block comments) section at the beginning of your main .cpp file.
- We do not accept assignments without code indentation and with code not organized in functions (for example where the entire code is in the main function).
- The points from the requirements correspond to a correct and complete solution, quality of interpretation from the block comment and the correct answer to the questions from the teacher. 

## Requirements

### 1. Implementation of direct sorting method
• Bubble sort
• Insertion sort
• Selection sort

To prove your algorithm(s) work, you have to prepare a demo on a smallsized input (which may be hard-coded).

### 2. Test algorithms for correctness

You have to implement unit tests for each algorithm on random input data.

### 3. Evaluate algorithms for the average case

! Before you start to work on the algorithms evaluation code, make sure you have a correct algorithm!

You are required to compare the two sorting procedures in the average case. Remember that for the average case you have to repeat the measurements m times (m=5) and report their average; also for the average case, make sure you always use the same input sequence for the two methods – to make the comparison fair.

This is how the analysis should be performed:
- vary the dimension of the input array (n) between [100…10000], with an increment of maximum 500 (we suggest 100).
- for each dimension, generate the appropriate input sequence for the method; run the method, counting the operations (assignments and comparisons, may be counted together).
! Only the assignments and comparisons performed on the input structure and its corresponding auxiliary variables matter.

Generate a chart which compares the two methods under the total number of operations, in the average case.

If one of the curves cannot be visualized correctly because the other has a larger growth rate, place that curve on a separate chart as well. Name the chart and curves appropriately.


### 4. Evaluate algorithm for best and worst case

For each analysis case (best, average, and worst), generate charts which compare the three
methods; use different charts for the number of comparisons, number of assignments and total
number of operations. If one of the curves cannot be visualized correctly because the others have
a larger growth rate (e.g., a linear function might seem constant when placed on the same chart
with a quadratic function), place that curve on a separate chart as well. Name your charts and the
curves on each chart appropriately.

### 4. Bonus: Binary insertion sort

You have to implement insertion sort using binary search.