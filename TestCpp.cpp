/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main(void)

{






cout<<"\n--------   Grade Classification Lab  ---------------  "<<endl;
cout<<"\n Write a program that inputs two grades separated by a space. If both grades are below a score of sixty then the program should output the message:Student Failed:( If both grades are greater than or equal to ninety five then the program should output the message:  Student Graduated with Honors:)  Otherwise the program should output the message:  Student Graduated! For example, an execution could look like this: Please enter 2 grades,separated by a space: 59 95  Student Graduated!"<<endl;

cout<<"\nPlease enter 2 grades, separated by a space:";

double gr1, gr2;

cin>>gr1>>gr2;
cout<<"\n"<< gr1 << "\n"<< gr2 <<endl;
if ( gr1 < 60 && gr2 < 60)  // ( ( gr1 && gr2 ) < 60 ) does not work
    cout<<"\n  Student Failed:(   "<<endl;

else if ( gr1 >= 95 && gr2 >= 95 )  // ( ( gr1 && gr2 ) >= 95 ) causes error 
    cout<<"\n  Student Graduated with Honors:)   "<<endl;

else 
    cout<<"\n  Student Graduated!   "<<endl;

cout<<"\n _+_+_+_+_+_+_+_+_+=====================_+_+_+_+_+_+_+_+_+_+  "<<endl;

cout<<"\n  Counting Even and Odd Numbers Lab   "<<endl;
cout<<"\n  Write a program that inputs four numbers separated by spaces.  The program should count how many odd and even numbers there are. The program should then output one of three possibilities depending on how many even and odd numbers are entered: more evens, more odds, same number of evens and odds For example, an execution could look like this: Please enter 4 positive integers, separated by a space: 2 3 5 7 more odds "<<endl;

cout<<"\n Please enter 4 positive integers, separated by a space:"<<endl;

int a1a, a1b, a1c, a1d, numofodds, numofeven;
numofodds = numofeven= 0 ;
cin>>a1a>>a1b>>a1c>>a1d;


/* if ( a1a % 2 == 0)
    numofeven++;

if ( a1a % 2 == 1)
    numofodds++;
 */
int reslt1a = ( a1a % 2 == 0) ? numofeven++ : numofodds++ ;
cout << reslt1a<<endl;  
cout<< numofeven<< numofodds<<endl;
switch(a1b % 2)
{
    case 0:
        numofeven++;
        break;

    case 1:
        numofodds++;
        break;

}
cout<< numofeven<< numofodds<<endl;;
/*
if ( a1b % 2 == 0)
    numofeven++;
if ( a1b % 2 == 1)
    numofodds++;
*/
if ( a1c % 2 == 0)
    numofeven++;
if ( a1c % 2 == 1)
    numofodds++;
cout<< numofeven<< numofodds<<endl;;
if ( a1d % 2 == 0)
    numofeven++;
else
    numofodds++;
cout<< numofeven<< numofodds<<endl;;
if (numofeven == numofodds)
    cout<<"\n  same number of evens and odds   "<<endl;
else if (numofeven < numofodds)
    cout<<"\n  more odds  "<<endl;
else
    cout<<"\n  more evens "<<endl;
cout<< numofeven<< numofodds<<endl;;



cout<<"\n     "<<endl;
cout<<"\n     "<<endl;


cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;

/* 
shorthand if else-----
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;

 */

return 0 ; 
// For exiting within main function return is better for memory. 
   /// or exit(0) for Exit with success , may cause memory leak. 

}

/*
Shortcuts in Vs code
Ctrl+p for search file
Ctrl+Tab for switch to different tab
Ctrl+w for closing current tab
Ctrl+shift+p for command palette

*/

/* Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n

*/

/*
C++ Conditions and If Statements
C++ supports the usual logical conditions from mathematics:

Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b
You can use these conditions to perform different actions for different decisions.

C++ has the following conditional statements:

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed
The if Statement
Use the if statement to specify a block of C++ code to be executed if a condition is true.

Syntax
if (condition) {
  // block of code to be executed if the condition is true
}
Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.

In the example below, we test two values to find out if 20 is greater than 18. If the condition is true, print some text:

Example
if (20 > 18) {
  cout << "20 is greater than 18";
}
We can also test variables:

Example
int x = 20;
int y = 18;
if (x > y) {
  cout << "x is greater than y";
}
Example explained
In the example above we use two variables, x and y, to test whether x is greater than y (using the > operator). As x is 20, and y is 18, and we know that 20 is greater than 18, we print to the screen that "x is greater than y".

The else Statement
Use the else statement to specify a block of code to be executed if the condition is false.

Syntax
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
Example
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
// Outputs "Good evening."
Example explained
In the example above, time (20) is greater than 18, so the condition is false. Because of this, we move on to the else condition and print to the screen "Good evening". If the time was less than 18, the program would print "Good day".

The else if Statement
Use the else if statement to specify a new condition if the first condition is false.

Syntax
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
Example
int time = 22;
if (time < 10) {
  cout << "Good morning.";
} else if (time < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
// Outputs "Good evening."
Example explained
In the example above, time (22) is greater than 10, so the first condition is false. The next condition, in the else if statement, is also false, so we move on to the else condition since condition1 and condition2 is both false - and print to the screen "Good evening".

However, if the time was 14, our program would print "Good day."

C++ Short Hand If Else
Short Hand If...Else (Ternary Operator)
There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

Syntax
variable = (condition) ? expressionTrue : expressionFalse;
Instead of writing:

Example
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
You can simply write:

Example
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;

C++ Switch
C++ Switch Statements
Use the switch statement to select one of many code blocks to be executed.

Syntax
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
This is how it works:

The switch expression is evaluated once
The value of the expression is compared with the values of each case
If there is a match, the associated block of code is executed
The break and default keywords are optional, and will be described later in this chapter
The example below uses the weekday number to calculate the weekday name:

Example
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4)
The break Keyword
When C++ reaches a break keyword, it breaks out of the switch block.

This will stop the execution of more code and case testing inside the block.

When a match is found, and the job is done, it's time for a break. There is no need for more testing.

A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.

*/


/* 

exit(0)	 VS exit(1)
Reports the successful termination/completion of the program.  VS	Reports the abnormal termination of the program.
Reports the termination when the program gets executed without any error. VS	Reports the termination when some error or interruption occurs during the execution of the program.
The syntax is exit(0);	VS The syntax is exit(1);
The usage of exit(0) is fully portable.  VS 	The usage of exit(1) is not portable.
The macro used for return code 0 is EXIT_SUCCESS VS	The macro used for return code 1 is EXIT_FAILURE
EXIT_SUCCESS is defined by the standard to be zero. VS	EXIT_FAILURE is not restricted by the standard to be one, but many systems do implement it as one.

return in function return execution back to caller and exit from function terminates the program.

in main function return 0 or exit(0) are same but if you write exit(0) in different function then you program will exit from that position.

returning different values like return 1 or return -1 means that program is returning error .

When exit(0) is used to exit from program, destructors for locally scoped non-static objects are not called. But destructors are called if return 0 is used.

For one, exit(0) returning from a memory allocation failure gives someone a false sense of comfort, because it should almost certainly be exit(EXIT_FAILURE) (the program did, after all, just bomb a mem-alloc)

return returns from the current function; it's a language keyword like for or break.
exit() terminates the whole program, wherever you call it from. (After flushing stdio buffers and so on).

The only case when both do (nearly) the same thing is in the main() function, as a return from main performs an exit().



It does matter. exit() immediately terminates the program, no matter where it is called. return only exits the current function. the only location they do the same thing is in main() 

the return statement exits from the current function and exit() exits from the program

they are the same when used in main() function
also return is a statement while exit() is a function which requires stdlb.h header file

return returns from the current function; it's a language keyword like for or break.
exit() terminates the whole program, wherever you call it from. (After flushing stdio buffers and so on).
The only case when both do (nearly) the same thing is in the main() function, as a return from main performs an exit().

In most C implementations, main is a real function called by some startup code that does something like int ret = main(argc, argv); exit(ret);. The C standard guarantees that something equivalent to this happens if main returns, however the implementation handles it.

Example with return:

#include <stdio.h>

void f(){
    printf("Executing f\n");
    return;
}

int main(){
    f();
    printf("Back from f\n");
}
If you execute this program it prints:

Executing f
Back from f
Another example for exit():

#include <stdio.h>
#include <stdlib.h>

void f(){
    printf("Executing f\n");
    exit(0);
}

int main(){
    f();
    printf("Back from f\n");
}
If you execute this program it prints:

Executing f
You never get "Back from f". Also notice the #include <stdlib.h> necessary to call the library function exit().

Also notice that the parameter of exit() is an integer (it's the return status of the process that the launcher process can get; the conventional usage is 0 for success or any other value for an error).

The parameter of the return statement is whatever the return type of the function is. If the function returns void, you can omit the return at the end of the function.

Last point, exit() come in two flavors _exit() and exit(). The difference between the forms is that exit() (and return from main) calls functions registered using atexit() or on_exit() before really terminating the process while _exit() (from #include <unistd.h>, or its synonymous _Exit from #include <stdlib.h>) terminates the process immediately.

Now there are also issues that are specific to C++.

C++ performs much more work than C when it is exiting from functions (return-ing). Specifically it calls destructors of local objects going out of scope. In most cases programmers won't care much of the state of a program after the processus stopped, hence it wouldn't make much difference: allocated memory will be freed, file ressource closed and so on. But it may matter if your destructor performs IOs. For instance automatic C++ OStream locally created won't be flushed on a call to exit and you may lose some unflushed data (on the other hand static OStream will be flushed).

This won't happen if you are using the good old C FILE* streams. These will be flushed on exit(). Actually, the rule is the same that for registered exit functions, FILE* will be flushed on all normal terminations, which includes exit(), but not calls to _exit() or abort().

You should also keep in mind that C++ provide a third way to get out of a function: throwing an exception. This way of going out of a function will call destructor. If it is not catched anywhere in the chain of callers, the exception can go up to the main() function and terminate the process.

Destructors of static C++ objects (globals) will be called if you call either return from main() or exit() anywhere in your program. They wont be called if the program is terminated using _exit() or abort(). abort() is mostly useful in debug mode with the purpose to immediately stop the program and get a stack trace (for post mortem analysis). It is usually hidden behind the assert() macro only active in debug mode.

When is exit() useful ?

exit() means you want to immediately stops the current process. It can be of some use for error management when we encounter some kind of irrecoverable issue that won't allow for your code to do anything useful anymore. It is often handy when the control flow is complicated and error codes has to be propagated all way up. But be aware that this is bad coding practice. Silently ending the process is in most case the worse behavior and actual error management should be preferred (or in C++ using exceptions).

Direct calls to exit() are especially bad if done in libraries as it will doom the library user and it should be a library user's choice to implement some kind of error recovery or not. If you want an example of why calling exit() from a library is bad, it leads for instance people to ask this question.

There is an undisputed legitimate use of exit() as the way to end a child process started by fork() on Operating Systems supporting it. Going back to the code before fork() is usually a bad idea. This is the rationale explaining why functions of the exec() family will never return to the caller.
*/