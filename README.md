Question 1.
Aim:- If a ball is dropped from height h then after how many tips the ball will stops and speed will become half after every tips.
Working:-
We had created function name noOfTips which take speed as input and there is the count which count the no. of tips done by ball before stoping .
then we call the noOFTips in main function speed as an argument.


Question 2.
Aim:- Finding the roots of Quadratic Equation .
Working:-
We had created function name findRoots which 3 coefficient as input --> then we had created a variable 'd' which calculate the discriminant of quadratic equation--> then we had 2 variable named root1 and root2 for calculating the roots of the quadratic equation --->we had used conditional statement for 3 cases of the quadratic equation:-
1. when d=0 --> both roots are real and same ,
2. when d>0 --> both roots are real and distinct ,
3. when d<0 --> roots are imaginary.
then we call the function findRoots with argument in main function. 


Question 3. 
Aim:-There is unsorted array in which have to apply methods like 
1. Insertion in the beginning .
2. Insertion in middle.
3. Insertion in last.
4. Delete an element from an array.
Working:-we have created a function named unsortedADT in which we take input n --> Then we use a for loop for input element in array by the user --> Use for loop again for printing the array. --> Created three variables: new element, choice , and position. -->In the menu we give four options:
1. Insertion at the beginning
2. Insertion in the middle
3. Insertion at the end
4. Deleting an element from the array
we input the option through the user. We use the switch case for inserting elements in the beginning, in the middle, and at the end.
In first case We use a for loop for inserting an element in the beginning and we use the logic of insertion in this logic we push the each elements push back and increase the size of the array for inserting a new element at the beginning of the array.
In the second case we use a for loop again for inserting an element in the middle and use the logic of inserting an element in the middle of an array. And in this logic we use a variable name position, which was given by the user. The user gives the position where the element has to be inserted. After that we use the logic of inserting elements.
Third case: we use the for loop again for inserting an element at the last. Then we insert the element at the last and increase the size of an array.
In case four we again use a for loop for deleting an element. In this case we use a logic in which we first search the position of that element and then we apply a loop for removing that element from an array. For searching we use linear search.
 At the final we call the function with an arguments in main function.

Question 4.
Aim:- we have to find the time of flight. 
Working:-
here we use a cmath library in C++ For calculation of mathematical operation.
 Now we have created a function name: time of flight, having two arguments:
1. speed
2. angle
 in the function we first take a variable name radian in which we convert the angle from degree to  radian.
 Now we calculate the time of flight by using the formula used in projectile motion. 
 At last we call the function in main function with arguments.

Question 5.
 Aim:- we have to find the maximum height attain by a projectile.
 Working :-
 we create a function Hmax having two arguments:
1. speed
2. angle
similarly as in the previous question, we:
1. Create a variable named radian in which we convert the angle from degrees to radians.
2. We calculate the maximum height obtained by a projectile using the formula used in the projectile motion.
3. We call the function to main function with arguments.

Question 7.
Aim:-we have to find the horizontal range. 
Working :-
so we have to create a function named `range` having two arguments: `speed` and `angle`. Similarly in the previous question we had created a variable named `radian` in which we convert the angle from degree to radian. Then we calculate the maximum range by a projectile using the range formula used in the projectile motion then we call the function with an argument in the main function. 

Question 8 
Aim:-in this program, we have to shift all the zeros to the last of an array. 
Working :-
we first create a function shiftZero in which we give a parameter int arr and int n. 
In this function, we use `non-zero count` as a variable, which is initiated from zero, then we use a for loop in which we use an if statement arr[i]!=0. Now in this block we use arr[nonZeroCount++]=arr[i];
then we use another for loop which is starting from a non-zero count and goes to i < n.
 At last, we call the function shiftZero in the main function. Then we use a for loop for printing an array. 

Question 9.
AIM :-finding first duplicate element in array .
 Working :-
 we at first created a function named `createArray`, in which we use a `for` loop for entering an array. 
 Then we create another function whose name is findDuplicate, and we give two parameters: array and int n. 
 In this function, we created two loops:
1. First Loop is starting from i to n.
2. Inside that loop, we created another loop which is j =  i+1, j < n.
3. Inside the second loop, we created an if statement in which we compared the element arr[i] == arr[j]. From this operation, we can find the duplicate number, and then we use the break statement for outer loop .
4. Then we call the function findDuplicate in the main function by passing the array and int n.

Question 10 — Singly Linked List Operations (`10.cpp`)

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

