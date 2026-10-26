
## Question 1 — Number of Ball Tips ([`FindingTips.cpp`](FindingTips.cpp))

**Aim:** If a ball is dropped from height `h`, find after how many tips the ball stops when its speed becomes half after every tip.

**Working:**

1. We create a function named `noOfTips` which takes speed as input.
2. Inside the function, we use a count variable to count how many tips are done before the ball stops.
3. In every step, the speed becomes half.
4. At the end, we call the `noOfTips` function in the main function by passing speed as an argument.

**Time Complexity:** **O(log s)**, where `s` is the initial speed, because the speed becomes half in every step.

**Space Complexity:** **O(1)** because only a few variables are used.

---

## Question 2 — Roots of a Quadratic Equation ([`FindingRoots.cpp`](FindingRoots.cpp))

**Aim:** To find the roots of a quadratic equation.

**Working:**

1. We create a function named `findRoots` which takes three coefficients as input.
2. Then we create a variable `d` to calculate the discriminant of the quadratic equation.
3. We use two variables named `root1` and `root2` for calculating the roots.
4. We use conditional statements for three cases:
5. When `d = 0`, both roots are real and same.
6. When `d > 0`, both roots are real and distinct.
7. When `d < 0`, the roots are imaginary.
8. At the end, we call the `findRoots` function with arguments in the main function.

**Time Complexity:** **O(1)** because a fixed number of calculations and conditions are used.

**Space Complexity:** **O(1)** because only a fixed number of variables are used.

---

## Question 3 — Unsorted Array ADT Operations ([`AbstactDatatype.cpp`](AbstactDatatype.cpp))

**Aim:** To perform operations on an unsorted array:

1. Insertion at the beginning.
2. Insertion in the middle.
3. Insertion at the last.
4. Deleting an element from the array.

**Working:**

1. We create a function named `unsortedADT` in which we take input `n`.
2. Then we use a `for` loop to take array elements from the user and another loop to print the array.
3. We create variables for the new element, choice, and position.
4. In the menu, we give four options for insertion at the beginning, middle, and end, and for deletion.
5. We take the choice from the user and use a switch case.
6. For insertion at the beginning and middle, we shift elements to make space for the new element.
7. For insertion at the end, we add the element at the last position and increase the size.
8. For deletion, we first search the required element by linear search and then shift elements to remove it.
9. At the end, we call the function from the main function.

**Time Complexity:** Insertion at the beginning, middle, and deletion are **O(n)** because elements may be shifted. Insertion at the end is **O(1)** when there is free space.

**Space Complexity:** **O(n)** for the array.

---

## Question 4 — Time of Flight of a Projectile ([`FindingTOF.cpp`](FindingTOF.cpp))

**Aim:** To find the time of flight of a projectile.

**Working:**

1. We use the `cmath` library in C++ for mathematical calculations.
2. We create a function named `timeOfFlight` with two arguments: speed and angle.
3. Inside the function, we create a variable named `radian` to convert the angle from degree to radian.
4. Then we calculate the time of flight by using the projectile-motion formula.
5. At last, we call the function in the main function with arguments.

**Time Complexity:** **O(1)** because the function uses only fixed calculations.

**Space Complexity:** **O(1)** because it uses only a fixed number of variables.

---

## Question 5 — Maximum Height of a Projectile ([`FindingMaxH.cpp`](FindingMaxH.cpp))

**Aim:** To find the maximum height attained by a projectile.

**Working:**

1. We create a function named `Hmax` with two arguments: speed and angle.
2. We create a variable named `radian` to convert the angle from degrees to radians.
3. Then we calculate the maximum height obtained by the projectile by using the projectile-motion formula.
4. At last, we call the function in the main function with arguments.

**Time Complexity:** **O(1)** because only fixed calculations are performed.

**Space Complexity:** **O(1)** because only a fixed number of variables are used.

---
## Question 6 — Horizontal Range of a Projectile ([`FindingHoriRange.cpp`](FindingHoriRange.cpp))

**Aim:** To find the horizontal range of a projectile.

**Working:**

1. We create a function named `range` with two arguments: speed and angle.
2. We create a variable named `radian` to convert the angle from degree to radian.
3. Then we calculate the horizontal range by using the range formula of projectile motion.
4. At the end, we call the function with arguments in the main function.

**Time Complexity:** **O(1)** because only fixed calculations are used.

**Space Complexity:** **O(1)** because only a fixed number of variables are used.


---

## Question 7 — Move Zeros to End ([`ZeroAtLast.cpp`](ZeroAtLast.cpp))

**Aim:** To shift all zero elements to the end of an array.

**Working:**

1. We traverse the array to identify each zero element.
2. When a zero is detected, subsequent elements are shifted one position to the left, decreasing the active count, and a zero is placed at the end.
3. The final rearranged array is printed.

**Time Complexity:** **O(n²)** in the shifting approach.

**Space Complexity:** **O(1)** in-place array modification.

---

## Question 8 — Shift Zeros to the End of an Array ([`ShiftingOfZereos.cpp`](ShiftingOfZereos.cpp))

**Aim:** To shift all zeros to the end of an array in linear time.

**Working:**

1. We create a function named `shiftZero` which takes an integer array and `n` as parameters.
2. In this function, we create a variable named `nonZeroCount` and initialize it with zero.
3. We use a `for` loop and check `arr[i] != 0`.
4. When an element is not zero, we put it at `arr[nonZeroCount++]`.
5. Then we use another loop starting from `nonZeroCount` and fill the remaining positions with zeros.
6. At last, we call the `shiftZero` function in the main function and use a loop to print the array.

**Time Complexity:** **O(n)** because the array is traversed using linear scans.

**Space Complexity:** **O(1)** because the array is changed in place.

---

## Question 9 — First Duplicate Element in an Array ([`FindingDulpicates.cpp`](FindingDulpicates.cpp))

**Aim:** To find the first duplicate element in an array.

**Working:**

1. First, we create a function named `createArray` and use a `for` loop to enter the array elements.
2. Then we create another function named `findDuplicate` with array and integer `n` as parameters.
3. In this function, we use two loops.
4. The first loop starts from `i` and goes up to `n`.
5. The second loop starts from `j = i + 1` and goes up to `n`.
6. Inside the second loop, we compare `arr[i] == arr[j]`.
7. When both elements are equal, we find the duplicate number and use a break statement for the outer loop.
8. At last, we call `findDuplicate` in the main function by passing the array and `n`.

**Time Complexity:** **O(n²)** in the worst case because two nested loops are used.

**Space Complexity:** **O(1)** extra space.

---

## Question 10 — Singly Linked List Operations ([`LinkedList.cpp`](LinkedList.cpp))

**Aim:** To implement different operations on a singly linked list, such as inserting, deleting, searching, and printing elements.

**Working:**

1. We create a `Node` class that stores one value and the pointer to the next node.
2. Then we create a `list` class with `head` and `tail` pointers.
3. The program has functions named `push_front` and `push_back` for adding values at the front and back.
4. The `insert` function adds a new node at the given position, while `pop_front` and `pop_back` remove a node from the front and back.
5. The `search` function moves through the linked list and returns the index of the required value.
6. The `getSize` function counts the nodes, and `deleteElement` removes a node by using the given number and list size.
7. In the main function, the user selects one of these operations from a menu.

**Time Complexity:** `push_front` and `pop_front` are **O(1)**. `push_back` is **O(1)** because a tail pointer is used. `insert`, `pop_back`, `search`, `getSize`, and `deleteElement` are **O(n)** in the worst case.

**Space Complexity:** **O(n)** for the linked-list nodes.

**Note:** Most menu choices start with an empty list, so operations such as insert, delete, or search need existing nodes first. Also, the search result is not printed and case 6 has no `break`, so it falls into case 7. `pop_back` does not safely handle a one-node list, and `deleteElement` treats its input as part of a position calculation rather than searching for that value.

---

## Question 11 — Stack Using an Array ([`StackArray.cpp`](StackArray.cpp))

**Aim:** To implement basic stack operations using an array.

**Working:**

1. We first create an array of five values by taking input from the user.
2. The array is printed and then the user selects one operation.
3. In the first choice, `push_back` puts a new value after the current last value and increases the size.
4. In the second choice, `pop_back` decreases the size to remove the last stack value.
5. Both operations happen from the same end of the array, so they follow the stack's last-in, first-out rule.

**Time Complexity:** Both push and pop are **O(1)**. Printing the array is **O(n)**.

**Space Complexity:** **O(1)** extra space. The stack uses a fixed-size array in this program.

**Note:** The array has length 5, but pushing a sixth element writes outside the array. Also, `pop_back` writes to `arr[n]` before reducing `n`, which is also outside the valid last index when the size is 5.

---

## Question 12 — Stack Using a Linked List ([`StackLL.cpp`](StackLL.cpp))

**Aim:** To implement a stack by using a singly linked list.

**Working:**

1. We create nodes with data and a next pointer.
2. The `push_back` function adds each new value at the tail of the linked list, which works as the top of the stack.
3. The `pop_back` function travels through the list to find the node before the tail, removes the old tail, and updates the tail pointer.
4. The main function pushes five values, prints the stack, removes the top value, and prints the stack again.

**Time Complexity:** `push_back` is **O(1)** because the tail pointer is available. `pop_back` is **O(n)** because it must move from the head to the node before the tail. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the nodes in the stack.

**Note:** `pop_back` does not handle a stack with exactly one node, because it tries to find a node before the head.

---

## Question 13 — Queue Using an Array ([`QueueArray.cpp`](QueueArray.cpp))

**Aim:** To implement basic queue operations using an array. The program can insert an element at the back and remove an element from the front.

**Working:**

1. First, we create an array of five elements by taking input from the user.
2. Then the program prints the array and shows a menu with two choices.
3. In the first choice, the `push_back` function puts a new value at index `n` and increases the size.
4. In the second choice, the `pop_front` function shifts every element one position to the left and decreases the size.
5. This follows the queue idea: insertion from the back and deletion from the front.

**Time Complexity:** `push_back` is **O(1)**. `pop_front` is **O(n)** because all remaining elements are shifted.

**Space Complexity:** **O(1)** extra space. The array size is fixed in this program.

**Note:** The array is declared with size 5, but inserting one more value writes outside that array. A larger array or capacity check is needed for safe insertion.

---

## Question 14 — Queue Using a Linked List ([`QueueLL.cpp`](QueueLL.cpp))

**Aim:** To implement a queue by using a singly linked list.

**Working:**

1. We create a queue class with head and tail pointers.
2. The `push_back` function adds a new node at the tail, which is the rear of the queue.
3. The `pop_front` function removes the node from the head, which is the front of the queue.
4. Therefore, the first value inserted is the first value removed.
5. The main function inserts five values, prints the queue, removes one value from the front, and prints the queue again.

**Time Complexity:** Both `push_back` and `pop_front` are **O(1)**. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the queue nodes.

**Note:** `pop_front` does not check whether the queue is empty and does not update `tail` when the last node is removed. The displayed example has enough nodes, so it works for that one removal.

---

## Question 15 — Circular Queue ([`CircularQueue.cpp`](CircularQueue.cpp))

**Aim:** To implement a circular queue using an array.

**Working:**

1. We create a queue with capacity 5 and keep four values: capacity, current size, front index, and rear index.
2. When `push` is called, the rear index moves by `(rear + 1) % capacity`, so after reaching the last index it comes back to the start.
3. When `pop` is called, the front index moves in the same circular way.
4. The program first inserts five values, prints the queue, removes two values from the front, and prints the remaining queue.

**Time Complexity:** `push`, `pop`, and `empty` are all **O(1)**. Printing is **O(n)**.

**Space Complexity:** **O(capacity)** for the queue array.

---

## Question 16 — Doubly Linked List Operations ([`DoublyLL.cpp`](DoublyLL.cpp))

**Aim:** To perform insertion and deletion operations in a doubly linked list.

**Working:**

1. We create a `Node` with data, next, and previous pointers.
2. The `DoublyLL` class provides `push_front`, `push_back`, `insert`, `pop_front`, and `pop_back` functions.
3. In the main function, values are added at the front and back, a value is inserted after a given position, and values are removed from both ends.
4. The `printLL` function prints the list from head to tail.

**Time Complexity:** `push_front`, `push_back`, `pop_front`, and `pop_back` are **O(1)**. `insert` is **O(pos)** because it moves through the list to reach the position. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the nodes in the list.

**Note:** In `push_front`, the old head's `prev` pointer is set to `NULL` instead of being linked to the new node. The list prints correctly in the forward direction, but its backward links are not maintained correctly for values added this way.

---

## Question 17 — Queue Using a Doubly Linked List ([`QueueDLL.cpp`](QueueDLL.cpp))

**Aim:** To implement a queue using a doubly linked list.

**Working:**

1. The `enqueue` function inserts every new node at the head of the doubly linked list.
2. The `dequeue` function removes a node from the tail.
3. Because the oldest inserted value reaches the tail, deletion happens in first-in, first-out order.
4. The program adds five values, prints the list, removes two values, and prints it again.

**Time Complexity:** Both `enqueue` and `dequeue` are **O(1)**. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the linked-list nodes.

---

## Question 18 — Stack Using a Doubly Linked List ([`StackDLL.cpp`](StackDLL.cpp))

**Aim:** To implement a stack using a doubly linked list.

**Working:**

1. The program uses the head of the list as the top of the stack.
2. The `push_front` function adds a new value at the head, and `pop_front` removes the head value.
3. Therefore, the last value inserted is the first value removed, which follows the stack's LIFO rule.
4. The program pushes five values, prints the stack, pops one value, and prints it again.

**Time Complexity:** Both push and pop are **O(1)**. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the linked-list nodes.

---

## Question 19 — Tower of Hanoi ([`TOH.cpp`](TOH.cpp))

**Aim:** To display the steps for moving disks in the Tower of Hanoi problem.

**Working:**

1. The `TOH` function uses recursion.
2. If there is only one disk, it prints a move from the source rod to the destination rod.
3. Otherwise, it first moves `n - 1` disks from the source to the helper rod, moves the largest disk to the destination, and then moves the `n - 1` disks from the helper rod to the destination.
4. The program asks the user for the number of disks, but currently calls `TOH(4, 'S', 'H', 'D')`, so it always displays the moves for four disks.

**Time Complexity:** For a general input of `n` disks, it is **O(2^n)**. As written, the program always uses 4 disks, so it performs a fixed number of moves.

**Space Complexity:** **O(n)** recursion-stack space; as written, the depth is fixed at 4.


---

## Question 20 — Merge Two Sorted Arrays ([`MergeSortedArray.cpp`](MergeSortedArray.cpp))

**Aim:** To merge two sorted arrays into one sorted array.

**Working:**

1. We first take five elements for each array and print both arrays.
2. The `merge` function compares the current element of both arrays.
3. The smaller element is copied into a third array, and the pointer of that array moves forward.
4. After one array is finished, the remaining elements of the other array are copied.
5. At the end, the third merged array is printed.

**Time Complexity:** **O(n + m)**, where `n` and `m` are the sizes of the two arrays. In this code both sizes are 5.

**Space Complexity:** **O(n + m)** for the third array.

**Note:** Both input arrays must already be sorted. Also, the remaining-element loops use `n * 2` as their end limit even though each input array has only `n` elements, so the code can read outside an input array. Those loop limits should end at `n`.

---

## Question 21 — Merge Sort Using an Array ([`MergeSorting.cpp`](MergeSorting.cpp))

**Aim:** To sort ten array elements by using the merge sort algorithm.

**Working:**

1. We create an array by taking ten values from the user.
2. The `mergeSort` function divides the array into two halves again and again until every part has one element.
3. Then the `merge` function compares elements from the two sorted halves, stores them in a temporary array, and copies the sorted result back to the original array.
4. Finally, the sorted array is printed.

**Time Complexity:** **O(n log n)** in best, average, and worst cases.

**Space Complexity:** **O(n)** for the temporary merged array. The program uses an array of size 10 for this purpose.

---

## Question 22 — Merge Sort Using a Linked List ([`MergeSortLL.cpp`](MergeSortLL.cpp))

**Aim:** To sort a singly linked list using merge sort.

**Working:**

1. We create a linked list by inserting the given values at the front.
2. The `mergeSort` function first finds the middle of the list using slow and fast pointers.
3. It breaks the list into two parts, recursively sorts both parts, and then joins them in sorted order using the `merge` function.
4. The final sorted linked list is printed.

**Time Complexity:** **O(n log n)** because the list is divided into halves and merged at every level.

**Space Complexity:** The recursion uses **O(log n)** call-stack space. In this particular code, `merge` creates new nodes instead of reconnecting the old nodes, and the old nodes are not freed; across the whole run this can allocate **O(n log n)** node storage.


---

## Question 23 — Radix Sort Using Linked-List Buckets ([`RedixSort.cpp`](RedixSort.cpp))

**Aim:** To sort non-negative integer values using radix sort and ten linked-list buckets.

**Working:**

1. We first create a linked list by pushing values at the front.
2. In `redixSort`, the program checks one digit at a time: ones, tens, hundreds, and so on.
3. For each digit, it puts nodes into buckets 0 to 9.
4. Then it joins the buckets from 0 to 9, making the list sorted for that digit.
5. Repeating this for all digit places gives radix-sort behaviour.

**Time Complexity:** In a correct radix-sort implementation, it is **O(d(n + 10))**, where `d` is the number of digits in the largest value and `n` is the number of nodes.

**Space Complexity:** **O(n + 10)** for the bucket links and the nodes being arranged.

**Note:** The `getMax` function returns during its first loop iteration, so it usually returns the first node's value rather than the real maximum. This may cause the program to stop after too few digit passes and leave the list not fully sorted. The method name is also written as `redixSort` in the code.

---

## Question 24 — Bucket Sort ([`BucketSort.cpp`](BucketSort.cpp))

**Aim:** To sort an array by using bucket sort and linked lists.

**Working:**

1. We first create a `Node` class and a `LinkedList` class.
2. The `push` function inserts values into a linked-list bucket.
3. In the `bucketSort` function, we first find the maximum value in the array.
4. Then we create ten buckets.
5. For every array element, we calculate its bucket index by using `(arr[i] * 10) / (max + 1)` and put the value into that bucket.
6. After that, we call the `sort` function for every bucket.
7. This function compares the values inside a linked list and swaps their data when needed.
8. Finally, we visit all ten buckets from first to last and copy their values back to the original array.

**Time Complexity:** Finding the maximum and placing values into buckets takes **O(n)**. Sorting the buckets is **O(Σ bᵢ²)**, where `bᵢ` is the number of elements in one bucket. In the worst case, all values go into one bucket, so the overall time complexity is **O(n²)**.

**Space Complexity:** **O(n + 10)**, which is **O(n)**, because linked-list nodes are created for the values and ten buckets are used.

**Note:** This program is designed for non-negative integer values. It uses exactly ten buckets.

---

## Question 25 — Bin Sort ([`BinSort.cpp`](BinSort.cpp))

**Aim:** To sort an array by using bin sort and linked lists.

**Working:**

1. We first create a `Node` class and a `LinkedList` class.
2. In the `binSort` function, we find the maximum value from the array.
3. Then we create `max + 1` bins, where every bin is a linked list.
4. We use the array value itself as the bin index.
5. For example, all values equal to `2` are stored in `bin[2]`.
6. At the end, we visit all bins from `0` to `max` and copy their values back into the array.
7. In this way, the final array becomes sorted.

**Time Complexity:** **O(n + max)**, where `n` is the number of elements and `max` is the largest array value.

**Space Complexity:** **O(n + max)** because the program creates linked-list nodes and `max + 1` bins.

**Note:** This program works for non-negative integer values. It can use a large amount of memory when the maximum value is much larger than the number of elements.

---

## 26. Insertion Sort Using a Linked List([`InsertionSort.cpp`](InsertionSort.cpp))

**Aim:** To sort the values of a singly linked list in ascending order by using insertion sort.

**Working:**

1. An empty `sorted` list is created to hold nodes in their correct order.
2. Nodes are removed one at a time from the original list.
3. If the `sorted` list is empty, or the current value is smaller than its first value, the node is inserted at the beginning.
4. Otherwise, the `sorted` list is traversed until the correct insertion position is found.
5. The node is linked at that position, so the `sorted` list remains ordered after every insertion.
6. After every original node has been inserted, `sorted` becomes the new head of the linked list.

**Time Complexity:** **O(n²)** in the worst and average cases, because locating the insertion position can require traversing the sorted part of the list for each node. The best case is **O(n)** when the list is already sorted and the implementation detects this efficiently.

**Space Complexity:** **O(1)** extra space, because the existing nodes are rearranged by changing links rather than creating another list.

**Note:** Insertion sort is stable for linked lists when equal values are inserted after existing equal values. It is especially useful when the list is small or nearly sorted.

---

## 27. Selection Sort Using a Linked List([`SelectionSort.cpp`](SelectionSort.cpp))

**Aim:** To sort the values of a singly linked list in ascending order by using selection sort.

**Working:**

1. The list is divided conceptually into a sorted part and an unsorted part.
2. Starting from the current node, the remaining unsorted nodes are scanned to find the smallest value.
3. The smallest value is swapped with the value at the current node.
4. The current position moves one node forward, extending the sorted part of the list.
5. These steps are repeated until every node has been placed in its correct position.

**Time Complexity:** **O(n²)** in the best, average, and worst cases, because selection sort scans the remaining list to find a minimum for every position.

**Space Complexity:** **O(1)** extra space, because sorting is performed by swapping node data without allocating another list.

**Note:** This linked-list version swaps node data instead of relinking nodes, which keeps the implementation simple. Selection sort is generally not stable when equal values are present.

---

## 28. Bubble Sort Using a Linked List([`BubbleSort.cpp`](BubbleSort.cpp))

**Aim:** To sort the values of a singly linked list in ascending order by using bubble sort.

**Working:**

1. The list is traversed from the head, comparing every adjacent pair of node values.
2. If the left value is greater than the right value, their data is swapped.
3. At the end of one pass, the largest unsorted value has moved to the end of the list.
4. The process is repeated for the remaining unsorted nodes.
5. If a complete pass makes no swap, the list is already sorted and the algorithm stops early.

**Time Complexity:** **O(n²)** in the average and worst cases. With the no-swap check, the best case is **O(n)** for an already sorted list.

**Space Complexity:** **O(1)** extra space, because only temporary variables are used while node data is swapped.

**Note:** Bubble sort is stable when equal values are not swapped. It is easy to understand but is mainly suitable for small linked lists because repeated traversal is expensive.

---

## 29. Linear Queue Implementation ([`Queue.cpp`](Queue.cpp))

**Aim:** To implement a bounded Linear Queue class with `enQueue`, `deQueue`, `peek`, and `isEmpty` methods.

**Working:**

1. The class initializes a fixed-capacity buffer with `front = -1` and `rear = -1`.
2. Elements are enqueued at `rear` and dequeued from `front`.
3. When the queue becomes empty after removals, pointers reset to `-1`.

**Time Complexity:** **O(1)** for `enQueue`, `deQueue`, `peek`, and `isEmpty`.

**Space Complexity:** **O(capacity)** for the queue array.

---

# Trees and Heap Sort Implementations

## 1. Binary Tree

Source: [`BinaryTree.cpp`](BinaryTree.cpp)

A binary tree is a tree in which every node has at most two children: a left
child and a right child. Unlike a binary search tree, a normal binary tree does
not require the left values to be smaller or the right values to be larger.

### Operations in this implementation

- Build a tree from a preorder-style vector, where `-1` represents a missing node.
- Inorder traversal: left, root, right.
- Preorder traversal: root, left, right.
- Postorder traversal: left, right, root.
- Level-order traversal using a queue.
- Find the height, number of nodes, sum of node values, and diameter.

For a tree with `n` nodes, traversals and node counting take `O(n)` time. The
recursive traversals use `O(h)` stack space, where `h` is the tree height.

## 2. Binary Search Tree (BST)

Source: [`BST.cpp`](BST.cpp)

A binary search tree maintains this ordering rule:

- Values smaller than a node are stored in its left subtree.
- Values larger than a node are stored in its right subtree.

### Operations in this implementation

- Insert values into a BST.
- Build a BST from an array.
- Search for a value.
- Traverse the tree using inorder, preorder, and postorder traversal.
- Delete a node using the inorder successor when the node has two children.

Inorder traversal of a valid BST produces values in sorted order. Average-case
search, insertion, and deletion take `O(log n)`, but they can become `O(n)` when
the tree becomes skewed. The recursive implementation uses `O(h)` stack space.

## 3. AVL Tree

Source: [`AVLTrees.cpp`](AVLTrees.cpp)

An AVL tree is a self-balancing binary search tree. For every node, its balance
factor is:

```text
balance factor = height(left subtree) - height(right subtree)
```

The balance factor must remain between `-1` and `1`. Rotations restore balance
after insertion or deletion.

### Rotations

- LL case: right rotation.
- RR case: left rotation.
- LR case: left rotation on the child, then right rotation.
- RL case: right rotation on the child, then left rotation.

Search, insertion, and deletion take `O(log n)` time because the tree remains
balanced. The recursive implementation uses `O(log n)` stack space.

## 4. Heap Sort Using an Array

Source: [`HeapSortArray.cpp`](HeapSortArray.cpp)

Heap sort first builds a max heap. In an array representation of a binary heap,
the children of the node at index `i` are:

```text
left child  = 2 * i + 1
right child = 2 * i + 2
```

The largest value is kept at index `0`. It is repeatedly swapped with the last
element in the unsorted portion, and the remaining heap is restored with
`maxHeapify`.

- Build heap: `O(n)`.
- Sorting: `O(n log n)`.
- Extra space: `O(1)` apart from recursion stack space used by heapify.

The result is sorted in ascending order when a max heap is used.

## 5. Heap Sort Using Linked-Tree Nodes

## Detailed step-by-step explanation of `HeapSortLL.cpp`

Source file: [`HeapSortLL.cpp`](HeapSortLL.cpp)

### Working

1. The program creates linked `Node` objects containing a value, a left pointer, and a right pointer.
2. The `insert` function adds every new node level by level using a queue.
3. Level-order insertion keeps the binary tree complete.
4. The values `5, 9, 8, 7, 6, 2, 1` are inserted by `main`.
5. The `buildHeap` function visits the tree recursively and converts it into a max heap.
6. The `maxHeapify` function compares a node with its children and moves the largest value toward the root.
7. The `countNodes` function counts the total number of nodes.
8. The `heapSort` function finds the last node and its parent using level-order traversal.
9. The root value is swapped with the last node's value, placing the largest value at the last active position.
10. The last node is disconnected from the tree and deleted.
11. `maxHeapify` is called again to restore the max-heap property.
12. These steps repeat until only one node remains.
13. The `inorder` function displays the values left in the tree.

### 1. Node structure

Each node stores an integer named `data` and pointers named `left` and `right`. The constructor stores the value and initializes both child pointers to `NULL`. Because linked nodes do not have direct array indexes, the program uses queues whenever it needs level-order access.

### 2. Level-order insertion

`insert(root, value)` creates a root when the tree is empty. Otherwise, it puts the root into a queue and checks nodes from left to right. The new node is attached to the first missing left or right child. Existing children are added to the queue so the next level is checked afterward. This keeps the tree complete.

The calls in `main` initially create:

```text
          5
       /     \\
      9       8
     / \\     / \\
    7   6   2   1
```

### 3. Max-heapification

`maxHeapify(root)` compares the current node with its children and identifies the largest of the three. If a child is larger, it swaps only the `data` values and recursively continues at that child. The links and tree shape do not change. The max-heap rule is that every parent must be greater than or equal to both children, so the largest value reaches the root.

### 4. Building the heap

`buildHeap(root)` recursively processes the left subtree, the right subtree, and then the current node. Calling `maxHeapify` after processing the children allows each parent to be compared with already-heapified subtrees. When it finishes, the complete tree satisfies the max-heap property.

### 5. Counting and locating nodes

`countNodes(root)` returns `0` for an empty subtree and otherwise returns `1` plus the counts of the left and right subtrees. For the seven values inserted by `main`, it returns `7`.

`getNode(root, pos)` uses a queue to find a node by one-based level-order position. Position `1` is the root, position `2` is its left child, and position `3` is its right child. This function replaces the direct index access that an array-based heap would provide.

### 6. Sorting loop

`heapSort(root, n)` first calls `buildHeap`. For every `i` from `n` down to `2`, it:

1. Finds the last active node at position `i`.
2. Finds its parent at position `i / 2`.
3. Swaps the root value with the last node's value, placing the maximum at the end.
4. Disconnects the last node. Even positions are left children; odd positions are right children.
5. Deletes the removed node.
6. Calls `maxHeapify(root)` to repair the smaller heap.

Thus, one largest value is fixed during every loop iteration.

### 7. Printing and `main`

`inorder` visits the left subtree, current node, and right subtree. `main` creates an empty tree, inserts `5, 9, 8, 7, 6, 2, 1`, counts the nodes, calls `heapSort`, prints the label, and traverses the result.

There is an important limitation in the current implementation: `heapSort` deletes the node containing each value that has been moved to the final position. It does not save those completed values in another structure. Therefore, after the loop finishes, only one node remains and `inorder` prints only that remaining value. With the values currently hard-coded in `main`, the observed output is expected to be:

```text
Sorted elements: 1
```

The intended complete sorted result would be `1 2 5 6 7 8 9`, but the code would need to preserve the removed nodes or print each removed maximum before deleting it to display the full sorted list.

### 8. Complexity and implementation notes

| Operation | Complexity | Explanation |
| --- | ---: | --- |
| Insert one node | `O(n)` | The queue may scan existing levels. |
| Count nodes | `O(n)` | Every node is visited once. |
| One `getNode` call | `O(n)` | It may scan the tree in level order. |
| One `maxHeapify` call | `O(log n)` | It follows at most one tree path. |
| This linked-tree `heapSort` | `O(n²)` worst case | Each pass searches for nodes with `getNode`. |
| Extra space | `O(n)` | Queues and linked nodes need additional storage. |

An array-based heap normally runs in `O(n log n)` because the last node and parent are found directly by index. This linked version is valuable for understanding the heap structure, but repeated level-order searches make it slower. Removed nodes are deleted, although the final remaining root is not explicitly deleted before `main` returns. Modern C++ would normally use `nullptr` instead of `NULL`.

This section summarizes the tree and heap-sort programs in this repository.
---

# Working of All Programs — Point-wise Summary

The following points describe the execution flow of every program documented in this README.

## 1. Number of Ball Tips — `FindingTips.cpp`

1. The program receives the initial speed.
2. The `noOfTips` function starts a counter.
3. The speed is divided by two after every tip.
4. The counter increases until the speed becomes zero or stops changing.
5. The final number of tips is displayed.

## 2. Roots of a Quadratic Equation — `FindingRoots.cpp`

1. The coefficients `a`, `b`, and `c` are provided.
2. The discriminant `b² - 4ac` is calculated.
3. If the discriminant is zero, equal real roots are calculated.
4. If it is positive, two different real roots are calculated.
5. If it is negative, the program reports imaginary roots.

## 3. Unsorted Array ADT — `AbstactDatatype.cpp`

1. The initial array elements are entered.
2. The array is displayed.
3. The user selects an insertion or deletion operation.
4. Elements are shifted when insertion or deletion requires space.
5. The updated array is printed.

## 4. Projectile Time of Flight — `FindingTOF.cpp`

1. Speed and angle are received.
2. The angle is converted from degrees to radians.
3. The time-of-flight formula is applied.
4. The calculated time is displayed.

## 5. Projectile Maximum Height — `FindingMaxH.cpp`

1. Speed and angle are received.
2. The angle is converted to radians.
3. The maximum-height formula is evaluated.
4. The result is printed.

## 6. Projectile Horizontal Range — `FindingHoriRange.cpp`

1. Speed and angle are received.
2. The angle is converted to radians.
3. The horizontal-range formula is applied.
4. The calculated range is displayed.

## 7. Move Zeros to the End — `ZeroAtLast.cpp`

1. The array is traversed from left to right.
2. When a zero is found, later elements are shifted left.
3. The zero is moved to the end of the active portion.
4. The process continues until all elements are checked.
5. The modified array is printed.

## 8. Linear Zero Shifting — `ShiftingOfZereos.cpp`

1. A position for the next non-zero value is initialized.
2. The array is scanned once.
3. Every non-zero value is copied to the next available position.
4. Remaining positions are filled with zeros.
5. The final array is displayed.

## 9. First Duplicate Element — `FindingDulpicates.cpp`

1. The array values are entered.
2. The first loop selects an element.
3. The second loop compares it with all later elements.
4. When equal values are found, the duplicate is recorded.
5. The search stops after finding the first duplicate.

## 10. Singly Linked List — `LinkedList.cpp`

1. Nodes are created with data and a next pointer.
2. The user selects an operation from the menu.
3. Nodes can be inserted at the front, back, or a position.
4. Nodes can be removed from the front or back.
5. The list can be searched, counted, deleted, and printed.

## 11. Stack Using an Array — `StackArray.cpp`

1. The initial stack values are stored in an array.
2. The array represents the stack.
3. A push operation adds a value at the end.
4. A pop operation removes the last value.
5. The result follows the LIFO rule.

## 12. Stack Using a Linked List — `StackLL.cpp`

1. Nodes are created for stack values.
2. New values are added at the tail.
3. The tail acts as the top of the stack.
4. The last node is located and removed during pop.
5. The stack is printed before and after removal.

## 13. Queue Using an Array — `QueueArray.cpp`

1. Initial values are stored in an array.
2. A new value is inserted at the rear.
3. The front value is removed during dequeue.
4. Remaining elements are shifted toward the front.
5. The queue contents are printed.

## 14. Queue Using a Linked List — `QueueLL.cpp`

1. The queue maintains head and tail pointers.
2. New nodes are added at the tail.
3. The node at the head is removed first.
4. This maintains FIFO order.
5. The queue is printed after operations.

## 15. Circular Queue — `CircularQueue.cpp`

1. The queue stores capacity, size, front, and rear indexes.
2. The rear moves using `(rear + 1) % capacity` during insertion.
3. The front moves using the same circular formula during deletion.
4. The indexes wrap from the last position to the first.
5. The queue reuses previously freed positions.

## 16. Doubly Linked List — `DoublyLL.cpp`

1. Each node stores data, next, and previous pointers.
2. Nodes can be inserted at the front or back.
3. A node can be inserted at a selected position.
4. Nodes can be removed from either end.
5. The list is traversed and printed from head to tail.

## 17. Queue Using a Doubly Linked List — `QueueDLL.cpp`

1. New nodes are inserted at the head.
2. The oldest node moves toward the tail.
3. Dequeue removes the tail node.
4. Removing from the opposite end preserves FIFO order.
5. The list is printed after enqueue and dequeue operations.

## 18. Stack Using a Doubly Linked List — `StackDLL.cpp`

1. The head is used as the stack top.
2. Push inserts a node at the head.
3. Pop removes the node at the head.
4. The most recently inserted value is removed first.
5. The result follows the LIFO rule.

## 19. Tower of Hanoi — `TOH.cpp`

1. The number of disks and three rods are defined.
2. The recursive function handles the one-disk base case.
3. It moves `n - 1` disks to the helper rod.
4. It moves the largest disk to the destination rod.
5. It moves the remaining disks from the helper rod to the destination.
6. Every move is printed.

## 20. Merge Two Sorted Arrays — `MergeSortedArray.cpp`

1. Two sorted arrays are entered.
2. Two indexes point to their current elements.
3. The smaller current element is copied to a third array.
4. The corresponding index is advanced.
5. Remaining elements are copied after one array ends.
6. The merged sorted array is printed.

## 21. Merge Sort Using an Array — `MergeSorting.cpp`

1. Array values are entered.
2. The array is divided into smaller halves recursively.
3. Division continues until subarrays contain one element.
4. Two sorted halves are merged into a temporary array.
5. The merged values are copied back.
6. The complete sorted array is displayed.

## 22. Merge Sort Using a Linked List — `MergeSortLL.cpp`

1. Values are inserted into a linked list.
2. Slow and fast pointers locate the middle node.
3. The list is divided into two parts.
4. Both parts are recursively sorted.
5. The sorted parts are merged.
6. The final linked list is printed.

## 23. Radix Sort Using Linked Buckets — `RedixSort.cpp`

1. Values are stored in a linked list.
2. The current digit position is selected.
3. Each value is placed into bucket `0` through `9` based on that digit.
4. Buckets are joined from `0` to `9`.
5. The next digit position is processed.
6. The process continues until all digits are handled.

## 24. Bucket Sort — `BucketSort.cpp`

1. The maximum array value is found.
2. Ten linked-list buckets are created.
3. Each value is assigned to a bucket using its scaled value.
4. Every bucket is sorted individually.
5. Bucket values are copied back into the array in order.
6. The sorted array is displayed.

## 25. Bin Sort — `BinSort.cpp`

1. The maximum value is found.
2. One linked-list bin is created for every value from zero to the maximum.
3. Each array value is inserted into the bin with the same index.
4. The bins are visited from smallest to largest index.
5. Their values are copied back into the array.
6. The final array is sorted.

## 26. Linear Queue — `Queue.cpp`

1. A fixed-capacity queue is initialized.
2. `front` and `rear` are set to `-1`.
3. `enQueue` adds values at the rear.
4. `deQueue` removes values from the front.
5. `peek` reads the front value without removing it.
6. `isEmpty` checks whether the queue contains no elements.

## 27. Binary Tree — `BinaryTree.cpp`

1. The tree is constructed from preorder-style data.
2. A value of `-1` represents a missing node.
3. Inorder, preorder, and postorder traversals visit the tree recursively.
4. Level-order traversal uses a queue.
5. Height, node count, sum, and diameter are calculated.

## 28. Binary Search Tree — `BST.cpp`

1. A value is compared with the current node.
2. Smaller values move to the left subtree.
3. Larger values move to the right subtree.
4. Search follows the same comparison rule.
5. Inorder traversal prints values in sorted order.
6. Deletion uses the inorder successor when a node has two children.

## 29. AVL Tree — `AVLTrees.cpp`

1. Values are inserted using the BST rule.
2. The balance factor of each node is calculated.
3. An imbalance is detected when the factor is less than `-1` or greater than `1`.
4. LL, RR, LR, or RL rotations are selected.
5. Rotations restore the height balance.
6. Search, insertion, and deletion continue on the balanced tree.

## 30. Heap Sort Using an Array — `HeapSortArray.cpp`

1. Array values are arranged into a max heap.
2. The largest value is stored at index `0`.
3. The root is swapped with the last unsorted element.
4. The heap size is reduced by one.
5. `maxHeapify` restores the heap.
6. The process repeats until the array is sorted in ascending order.

## 31. Heap Sort Using Linked Nodes — `HeapSortLL.cpp`

1. Values are inserted level by level into linked nodes.
2. `buildHeap` creates a max heap.
3. The root contains the largest value.
4. The root is swapped with the last node's value.
5. The last node is detached and deleted.
6. `maxHeapify` repairs the remaining tree.
7. The process repeats until one node remains.
8. The current code deletes completed values instead of saving them, so the final traversal prints only the remaining node.

---

# Detailed Explanation: Unsorted Array ADT

Source file: [`AbstactDatatype.cpp`](AbstactDatatype.cpp)

> The filename uses `Abstact` instead of `Abstract`; the code demonstrates an abstract-data-type style interface for an unsorted array.

## Purpose

This program demonstrates how common array operations can be organized behind a menu-driven interface. The array is considered **unsorted**, so insertion does not preserve any ordering. The program supports:

1. Inserting an element at the beginning.
2. Inserting an element at a specified position in the middle.
3. Inserting an element at the end.
4. Deleting the first occurrence of a value.

The function `unsortedADT(int n)` owns the array, reads its initial values, displays the available operations, performs the selected operation, and prints the resulting array.

## Program flow

1. `main()` calls `unsortedADT(5)`, so the initial array contains five values.
2. The user enters the five array elements.
3. The original array is printed.
4. A menu is displayed and the user enters one choice from `1` to `4`.
5. The selected `switch` case modifies the array and prints the updated contents.

The position used by the insertion logic is **zero-based**. For example, position `0` means the first element, while position `2` means the third element.

## Insertion at the beginning

For choice `1`, the loop moves every existing element one position to the right, starting from the last active element. The new value is then stored at `arr[0]` and `n` is increased by one.

Example:

```text
Before:  10 20 30
Insert:  5
After:   5 10 20 30
```

Because as many as `n` elements may be moved, the time complexity is **O(n)**.

## Insertion at a position

For choice `2`, the user provides a position `pos`. Elements from that position onward are shifted right by one place. The new value is stored at `arr[pos]`, and the active size is increased.

Example when `pos = 2`:

```text
Before:  10 20 40 50
Insert:  30
After:   10 20 30 40 50
```

The worst-case time complexity is **O(n)**, because inserting near the beginning requires shifting most of the array. The operation needs **O(1)** auxiliary space.

## Insertion at the end

For choice `3`, the new value is written at `arr[n]`, after the current last element, and `n` is incremented. Conceptually this is **O(1)** because no existing values need to move.

However, the current program creates `int arr[n]`, which has exactly `n` positions. Therefore `arr[n]` is outside the valid range `arr[0]` through `arr[n - 1]`. The same capacity problem also affects choices `1` and `2`, because they write one additional element before increasing `n`.

## Deleting an element

For choice `4`, the input is treated as a value rather than an index. The program performs a linear search and stores the index of the first matching value in `pos`.

- If no match is found, it prints `Element not found`.
- If a match is found, every later element is shifted one position left.
- The active size `n` is decreased by one.

Example:

```text
Before:  10 20 30 20 40
Delete:  20
After:   10 30 20 40
```

Only the first occurrence is deleted. Searching takes **O(n)**, and shifting can also take **O(n)**, so the overall worst-case time complexity is **O(n)**. The deletion uses **O(1)** auxiliary space.

## Complexity summary

| Operation | Time complexity | Extra space | Main action |
| --- | ---: | ---: | --- |
| Insert at beginning | O(n) | O(1) | Shift all active elements right |
| Insert at position | O(n) | O(1) | Shift elements from `pos` right |
| Insert at end | O(1) conceptually | O(1) | Write at the next free position |
| Delete first matching value | O(n) | O(1) | Search, then shift elements left |

The array itself requires **O(n)** storage for its active elements.




