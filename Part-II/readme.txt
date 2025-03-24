Sorting refers to  the process of arranging elements of a list or an array in a particular order.

Common Sorting Algorithms:

1. Insertion Sort -
                   Start form the second element and compare it with previous one(First one) and swap if needed, then consider the third element and compare with all previous elements(first and second) and take necessary actions, likewise continue until sorted.

2. Selection Sort - 
                  (consider for Ascending) Select the minimum element and swap it with the first element, likewise continue until sorted.

3. Bubble Sort - 
                  (consider for Ascending) Start from first two elements, compare and swap only id needed, then second and third elements, compare and swap only if needed. This will move the highest value to the end of the list, but others are not sorted. So follow the same process until sorted.

4. Merge Sort -
                  It follows divide-and-conquer paradigm.
                  Diving the unsorted list into 'n' sub lists which are containing one element, then repeatedly merging sub lists to produce new sorted list.

Why Merge Sort?

1. Stability
2. Predictable Performance
3. External Sorting
4. Parallelization
5. Consistent Memory Usage
6. Ease of implementation

Decomposition

The Merge sort repeatedly divides the array into two halves until we reach a stage where we try to perform Merge sort on a subarray of size 1. This can be achieved by applying recursion(A function calls itself in its own definition) until it stops.

Merging

The algorithm maintains three pointers, one for each of two arrays and one for maintaining the current index of the final sorted array.

Code

Task is to merge two subarrays A[p..q] and A[q+1..r] to create a sorted array A[p..r].

Time Complexity:

Splitting the array : O(log n)   Here base of log n = 2, and log n is the number of levels/steps that follow to split the array.

Merging subarrays : O(n) at each level with log n levels.

Total time complexity : O(n log n)

Time complexity in Best/ Average and Worst cases = O(n log n)

Space Complexity : O(n)
      Refers to the total amount of memory an algorithm needs to run.
Merge sort needs extra space, so it is less memory efficient than quick sort.

Merge Sort is stable.

