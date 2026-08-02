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
