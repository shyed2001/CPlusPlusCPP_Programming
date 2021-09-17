Add One Function
Labs due Oct 1, 2021 03:24 +06
In the C programming language there is no pass-by-reference syntax to pass a variable by reference to a function. Instead a variable is passed by pointer (just to be confusing, sometimes passing by pointer is referred to as pass-by-reference). This Practice Program asks you to do the same thing as C, which in practice would be simpler to implement using C++’s reference parameter syntax. Here is the header for a function that takes as

input a pointer to an integer:

Function Signature

void addOne(int *ptrNum)

Complete the function so it adds one to the integer referenced by ptrNum.

Write a main function where an integer variable is defined, give it an initial

value, call addOne, and output the variable. It should be incremented by 1




File Name 

addone.cpp

Score

There are three tests each worth 2 points

Note: You do not need to submit any other code including  the main method or any print statements. ONLY the addOne function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.
GetDoubles Function

Labs due Oct 1, 2021 03:24 +06
Write a function that takes a parameter that is an integer named numDoubles. Create a dynamic array that can store numDoubles doubles and make a loop that fills in each array entry with the value of the element number (starting with 1) divided by 3. Return the array from the function.

A sample execution with numDoubles equal to 4 would produce the array [0.3333, 0.6666, 1, 1.3333]

Function Signature

double* getDoubles(int numDoubles)

File Name 

getdoubles.cpp

Score

There are three tests each worth 2 points

Note: You do not need to submit any other code including  the main method or any print statements. ONLY the getDoubles function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.


Reference : W3School



