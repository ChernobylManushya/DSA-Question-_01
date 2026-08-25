Question 1 — Number of Ball Tips

**Aim:** If a ball is dropped from height `h`, find after how many tips the ball stops when its speed becomes half after every tip.

**Working:** We create a function named `noOfTips` which takes speed as input. Inside the function, we use a count variable to count how many tips are done before the ball stops. In every step, the speed becomes half. At the end, we call the `noOfTips` function in the main function by passing speed as an argument.

**Time Complexity:** **O(log s)**, where `s` is the initial speed, because the speed becomes half in every step.

**Space Complexity:** **O(1)** because only a few variables are used.

## Question 2 — Roots of a Quadratic Equation

**Aim:** To find the roots of a quadratic equation.

**Working:** We create a function named `findRoots` which takes three coefficients as input. Then we create a variable `d` to calculate the discriminant of the quadratic equation. We use two variables named `root1` and `root2` for calculating the roots. We use conditional statements for three cases:

1. When `d = 0`, both roots are real and same.
2. When `d > 0`, both roots are real and distinct.
3. When `d < 0`, the roots are imaginary.

At the end, we call the `findRoots` function with arguments in the main function.

**Time Complexity:** **O(1)** because a fixed number of calculations and conditions are used.

**Space Complexity:** **O(1)** because only a fixed number of variables are used.

## Question 3 — Unsorted Array ADT Operations

**Aim:** To perform operations on an unsorted array:

1. Insertion at the beginning.
2. Insertion in the middle.
3. Insertion at the last.
4. Deleting an element from the array.

**Working:** We create a function named `unsortedADT` in which we take input `n`. Then we use a `for` loop to take array elements from the user and another loop to print the array. We create variables for the new element, choice, and position. In the menu, we give four options for insertion at the beginning, middle, and end, and for deletion. We take the choice from the user and use a switch case. For insertion at the beginning and middle, we shift elements to make space for the new element. For insertion at the end, we add the element at the last position and increase the size. For deletion, we first search the required element by linear search and then shift elements to remove it. At the end, we call the function from the main function.

**Time Complexity:** Insertion at the beginning, middle, and deletion are **O(n)** because elements may be shifted. Insertion at the end is **O(1)** when there is free space.

**Space Complexity:** **O(n)** for the array.

## Question 4 — Time of Flight of a Projectile

**Aim:** To find the time of flight of a projectile.

**Working:** We use the `cmath` library in C++ for mathematical calculations. We create a function named `timeOfFlight` with two arguments: speed and angle. Inside the function, we create a variable named `radian` to convert the angle from degree to radian. Then we calculate the time of flight by using the projectile-motion formula. At last, we call the function in the main function with arguments.

**Time Complexity:** **O(1)** because the function uses only fixed calculations.

**Space Complexity:** **O(1)** because it uses only a fixed number of variables.

## Question 5 — Maximum Height of a Projectile

**Aim:** To find the maximum height attained by a projectile.

**Working:** We create a function named `Hmax` with two arguments: speed and angle. We create a variable named `radian` to convert the angle from degrees to radians. Then we calculate the maximum height obtained by the projectile by using the projectile-motion formula. At last, we call the function in the main function with arguments.

**Time Complexity:** **O(1)** because only fixed calculations are performed.

**Space Complexity:** **O(1)** because only a fixed number of variables are used.

## Question 6

**Aim:** The program details were not provided.

**Working:** No code or explanation for Question 6 was included, so this section is kept empty instead of adding incorrect information.

**Time Complexity:** Not available.

**Space Complexity:** Not available.

## Question 7 — Horizontal Range of a Projectile

**Aim:** To find the horizontal range of a projectile.

**Working:** We create a function named `range` with two arguments: speed and angle. We create a variable named `radian` to convert the angle from degree to radian. Then we calculate the horizontal range by using the range formula of projectile motion. At the end, we call the function with arguments in the main function.

**Time Complexity:** **O(1)** because only fixed calculations are used.

**Space Complexity:** **O(1)** because only a fixed number of variables are used.

## Question 8 — Shift Zeros to the End of an Array

**Aim:** To shift all zeros to the end of an array.

**Working:** We create a function named `shiftZero` which takes an integer array and `n` as parameters. In this function, we create a variable named `nonZeroCount` and initialize it with zero. We use a `for` loop and check `arr[i] != 0`. When an element is not zero, we put it at `arr[nonZeroCount++]`. Then we use another loop starting from `nonZeroCount` and fill the remaining positions with zeros. At last, we call the `shiftZero` function in the main function and use a loop to print the array.

**Time Complexity:** **O(n)** because the array is traversed using loops.

**Space Complexity:** **O(1)** because the array is changed in place.

## Question 9 — First Duplicate Element in an Array

**Aim:** To find the first duplicate element in an array.

**Working:** First, we create a function named `createArray` and use a `for` loop to enter the array elements. Then we create another function named `findDuplicate` with array and integer `n` as parameters. In this function, we use two loops. The first loop starts from `i` and goes up to `n`. The second loop starts from `j = i + 1` and goes up to `n`. Inside the second loop, we compare `arr[i] == arr[j]`. When both elements are equal, we find the duplicate number and use a break statement for the outer loop. At last, we call `findDuplicate` in the main function by passing the array and `n`.

**Time Complexity:** **O(n²)** in the worst case because two nested loops are used.

**Space Complexity:** **O(1)** extra space.


##Question 10 — Singly Linked List Operations (`10.cpp`)

**Aim:** To implement different operations on a singly linked list, such as inserting, deleting, searching, and printing elements.

**Working:** We create a `Node` class that stores one value and the pointer to the next node. Then we create a `list` class with `head` and `tail` pointers. The program has functions named `push_front` and `push_back` for adding values at the front and back. The `insert` function adds a new node at the given position, while `pop_front` and `pop_back` remove a node from the front and back. The `search` function moves through the linked list and returns the index of the required value. The `getSize` function counts the nodes, and `deleteElement` removes a node by using the given number and list size. In the main function, the user selects one of these operations from a menu.

**Time Complexity:** `push_front` and `pop_front` are **O(1)**. `push_back` is **O(1)** because a tail pointer is used. `insert`, `pop_back`, `search`, `getSize`, and `deleteElement` are **O(n)** in the worst case.

**Space Complexity:** **O(n)** for the linked-list nodes.

**Note:** Most menu choices start with an empty list, so operations such as insert, delete, or search need existing nodes first. Also, the search result is not printed and case 6 has no `break`, so it falls into case 7. `pop_back` does not safely handle a one-node list, and `deleteElement` treats its input as part of a position calculation rather than searching for that value.

## Question 11 — Stack Using a Linked List (`11.cpp`)

**Aim:** To implement a stack by using a singly linked list.

**Working:** We create nodes with data and a next pointer. The `push_back` function adds each new value at the tail of the linked list, which works as the top of the stack. The `pop_back` function travels through the list to find the node before the tail, removes the old tail, and updates the tail pointer. The main function pushes five values, prints the stack, removes the top value, and prints the stack again.

**Time Complexity:** `push_back` is **O(1)** because the tail pointer is available. `pop_back` is **O(n)** because it must move from the head to the node before the tail. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the nodes in the stack.

**Note:** `pop_back` does not handle a stack with exactly one node, because it tries to find a node before the head.

## Question 12 — Queue Using a Linked List (`12.cpp`)

**Aim:** To implement a queue by using a singly linked list.

**Working:** We create a queue class with head and tail pointers. The `push_back` function adds a new node at the tail, which is the rear of the queue. The `pop_front` function removes the node from the head, which is the front of the queue. Therefore, the first value inserted is the first value removed. The main function inserts five values, prints the queue, removes one value from the front, and prints the queue again.

**Time Complexity:** Both `push_back` and `pop_front` are **O(1)**. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the queue nodes.

**Note:** `pop_front` does not check whether the queue is empty and does not update `tail` when the last node is removed. The displayed example has enough nodes, so it works for that one removal.

## Question 13 — Stack Using an Array (`13.cpp`)

**Aim:** To implement basic stack operations using an array.

**Working:** We first create an array of five values by taking input from the user. The array is printed and then the user selects one operation. In the first choice, `push_back` puts a new value after the current last value and increases the size. In the second choice, `pop_back` decreases the size to remove the last stack value. Both operations happen from the same end of the array, so they follow the stack's last-in, first-out rule.

**Time Complexity:** Both push and pop are **O(1)**. Printing the array is **O(n)**.

**Space Complexity:** **O(1)** extra space. The stack uses a fixed-size array in this program.

**Note:** The array has length 5, but pushing a sixth element writes outside the array. Also, `pop_back` writes to `arr[n]` before reducing `n`, which is also outside the valid last index when the size is 5.

## Question 14 — Queue Using an Array (`14.cpp`)

**Aim:** To implement basic queue operations using an array. The program can insert an element at the back and remove an element from the front.

**Working:** First, we create an array of five elements by taking input from the user. Then the program prints the array and shows a menu with two choices. In the first choice, the `push_back` function puts a new value at index `n` and increases the size. In the second choice, the `pop_front` function shifts every element one position to the left and decreases the size. This follows the queue idea: insertion from the back and deletion from the front.

**Time Complexity:** `push_back` is **O(1)**. `pop_front` is **O(n)** because all remaining elements are shifted.

**Space Complexity:** **O(1)** extra space. The array size is fixed in this program.

**Note:** The array is declared with size 5, but inserting one more value writes outside that array. A larger array or capacity check is needed for safe insertion.

## Question 15 — Merge Two Sorted Arrays (`15.cpp`)

**Aim:** To merge two sorted arrays into one sorted array.

**Working:** We first take five elements for each array and print both arrays. The `merge` function compares the current element of both arrays. The smaller element is copied into a third array, and the pointer of that array moves forward. After one array is finished, the remaining elements of the other array are copied. At the end, the third merged array is printed.

**Time Complexity:** **O(n + m)**, where `n` and `m` are the sizes of the two arrays. In this code both sizes are 5.

**Space Complexity:** **O(n + m)** for the third array.

**Note:** Both input arrays must already be sorted. Also, the remaining-element loops use `n * 2` as their end limit even though each input array has only `n` elements, so the code can read outside an input array. Those loop limits should end at `n`.

## Question 16 — Merge Sort Using an Array (`16.cpp`)

**Aim:** To sort ten array elements by using the merge sort algorithm.

**Working:** We create an array by taking ten values from the user. The `mergeSort` function divides the array into two halves again and again until every part has one element. Then the `merge` function compares elements from the two sorted halves, stores them in a temporary array, and copies the sorted result back to the original array. Finally, the sorted array is printed.

**Time Complexity:** **O(n log n)** in best, average, and worst cases.

**Space Complexity:** **O(n)** for the temporary merged array. The program uses an array of size 10 for this purpose.

## Question 17 — Merge Sort Using a Linked List (`17.cpp`)

**Aim:** To sort a singly linked list using merge sort.

**Working:** We create a linked list by inserting the given values at the front. The `mergeSort` function first finds the middle of the list using slow and fast pointers. It breaks the list into two parts, recursively sorts both parts, and then joins them in sorted order using the `merge` function. The final sorted linked list is printed.

**Time Complexity:** **O(n log n)** because the list is divided into halves and merged at every level.

**Space Complexity:** The recursion uses **O(log n)** call-stack space. In this particular code, `merge` creates new nodes instead of reconnecting the old nodes, and the old nodes are not freed; across the whole run this can allocate **O(n log n)** node storage.

## Question 18 — Circular Queue (`18.cpp`)

**Aim:** To implement a circular queue using an array.

**Working:** We create a queue with capacity 5 and keep four values: capacity, current size, front index, and rear index. When `push` is called, the rear index moves by `(rear + 1) % capacity`, so after reaching the last index it comes back to the start. When `pop` is called, the front index moves in the same circular way. The program first inserts five values, prints the queue, removes two values from the front, and prints the remaining queue.

**Time Complexity:** `push`, `pop`, and `empty` are all **O(1)**. Printing is **O(n)**.

**Space Complexity:** **O(capacity)** for the queue array.

## Question 19 — Doubly Linked List Operations (`19.cpp`)

**Aim:** To perform insertion and deletion operations in a doubly linked list.

**Working:** We create a `Node` with data, next, and previous pointers. The `DoublyLL` class provides `push_front`, `push_back`, `insert`, `pop_front`, and `pop_back` functions. In the main function, values are added at the front and back, a value is inserted after a given position, and values are removed from both ends. The `printLL` function prints the list from head to tail.

**Time Complexity:** `push_front`, `push_back`, `pop_front`, and `pop_back` are **O(1)**. `insert` is **O(pos)** because it moves through the list to reach the position. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the nodes in the list.

**Note:** In `push_front`, the old head's `prev` pointer is set to `NULL` instead of being linked to the new node. The list prints correctly in the forward direction, but its backward links are not maintained correctly for values added this way.

## Question 20 — Queue Using a Doubly Linked List (`20.cpp`)

**Aim:** To implement a queue using a doubly linked list.

**Working:** The `enqueue` function inserts every new node at the head of the doubly linked list. The `dequeue` function removes a node from the tail. Because the oldest inserted value reaches the tail, deletion happens in first-in, first-out order. The program adds five values, prints the list, removes two values, and prints it again.

**Time Complexity:** Both `enqueue` and `dequeue` are **O(1)**. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the linked-list nodes.

## Question 21 — Stack Using a Doubly Linked List (`21.cpp`)

**Aim:** To implement a stack using a doubly linked list.

**Working:** The program uses the head of the list as the top of the stack. The `push_front` function adds a new value at the head, and `pop_front` removes the head value. Therefore, the last value inserted is the first value removed, which follows the stack's LIFO rule. The program pushes five values, prints the stack, pops one value, and prints it again.

**Time Complexity:** Both push and pop are **O(1)**. Printing is **O(n)**.

**Space Complexity:** **O(n)** for the linked-list nodes.

## Question 22 — Tower of Hanoi (`22.cpp`)

**Aim:** To display the steps for moving disks in the Tower of Hanoi problem.

**Working:** The `TOH` function uses recursion. If there is only one disk, it prints a move from the source rod to the destination rod. Otherwise, it first moves `n - 1` disks from the source to the helper rod, moves the largest disk to the destination, and then moves the `n - 1` disks from the helper rod to the destination. The program asks the user for the number of disks, but currently calls `TOH(4, 'S', 'H', 'D')`, so it always displays the moves for four disks.

**Time Complexity:** For a general input of `n` disks, it is **O(2^n)**. As written, the program always uses 4 disks, so it performs a fixed number of moves.

**Space Complexity:** **O(n)** recursion-stack space; as written, the depth is fixed at 4.

## Question 23 — Radix Sort Using Linked-List Buckets (`23.cpp`)

**Aim:** To sort non-negative integer values using radix sort and ten linked-list buckets.

**Working:** We first create a linked list by pushing values at the front. In `redixSort`, the program checks one digit at a time: ones, tens, hundreds, and so on. For each digit, it puts nodes into buckets 0 to 9. Then it joins the buckets from 0 to 9, making the list sorted for that digit. Repeating this for all digit places gives radix-sort behaviour.

**Time Complexity:** In a correct radix-sort implementation, it is **O(d(n + 10))**, where `d` is the number of digits in the largest value and `n` is the number of nodes.

**Space Complexity:** **O(n + 10)** for the bucket links and the nodes being arranged.

**Note:** The `getMax` function returns during its first loop iteration, so it usually returns the first node's value rather than the real maximum. This may cause the program to stop after too few digit passes and leave the list not fully sorted. The method name is also written as `redixSort` in the code.

Question 24 — Bucket Sort (`24.cpp`)

**Aim:** To sort an array by using bucket sort and linked lists.

**Working:** We first create a `Node` class and a `LinkedList` class. The `push` function inserts values into a linked-list bucket. In the `bucketSort` function, we first find the maximum value in the array. Then we create ten buckets. For every array element, we calculate its bucket index by using `(arr[i] * 10) / (max + 1)` and put the value into that bucket. After that, we call the `sort` function for every bucket. This function compares the values inside a linked list and swaps their data when needed. Finally, we visit all ten buckets from first to last and copy their values back to the original array.

**Time Complexity:** Finding the maximum and placing values into buckets takes **O(n)**. Sorting the buckets is **O(Σ bᵢ²)**, where `bᵢ` is the number of elements in one bucket. In the worst case, all values go into one bucket, so the overall time complexity is **O(n²)**.

**Space Complexity:** **O(n + 10)**, which is **O(n)**, because linked-list nodes are created for the values and ten buckets are used.

**Note:** This program is designed for non-negative integer values. It uses exactly ten buckets.

## Question 25 — Bin Sort (`25.cpp`)

**Aim:** To sort an array by using bin sort and linked lists.

**Working:** We first create a `Node` class and a `LinkedList` class. In the `binSort` function, we find the maximum value from the array. Then we create `max + 1` bins, where every bin is a linked list. We use the array value itself as the bin index. For example, all values equal to `2` are stored in `bin[2]`. At the end, we visit all bins from `0` to `max` and copy their values back into the array. In this way, the final array becomes sorted.

**Time Complexity:** **O(n + max)**, where `n` is the number of elements and `max` is the largest array value.

**Space Complexity:** **O(n + max)** because the program creates linked-list nodes and `max + 1` bins.

**Note:** This program works for non-negative integer values. It can use a large amount of memory when the maximum value is much larger than the number of elements.
