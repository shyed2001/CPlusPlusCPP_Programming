/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std;


int main(int argc, char* argv[])

{

puts ("\n  C++ For Loop, When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:Syntax for (statement 1; statement 2; statement 3) {   // code block to be executed } Statement 1 is executed (one time) before the execution of the code block. Statement 2 defines the condition for executing the code block. Statement 3 is executed (every time) after the code block has been executed. The example below will print the numbers 0 to 4: Example for (int i = 0; i < 5; i++) {   cout << i << '\\n'; } Example explained Statement 1 sets a variable before the loop starts (int i = 0). Statement 2 defines the condition for the loop to run (i must be less than 5). If the condition is true, the loop will start over again, if it is false, the loop will end. Statement 3 increases a value (i++) each time the code block in the loop has been executed. Another Example This example will only print even values between 0 and 10: Example for (int i = 0; i <= 10; i = i + 2) {   cout << i << '\\n'; } ");


cout<<"\n ____+++++++======C++ Break and Continue-----_____++++++====    "<<endl;
cout<<"\n ____+++++++======C++ Break-----_____++++++====      "<<endl;



cout<<"\n  C++ Break, You have already seen the break statement used in an earlier chapter of this tutorial. It was used to 'jump out' of a switch statement.The break statement can also be used to jump out of a loop. This example jumps out of the loop when i is equal to 4:Example for (int i = 0; i < 10; i++) {  if (i == 4) {break;}cout << i << '\\n'; }   "<<endl;
cout<<"\n C++ Continue, The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop. This example skips the value of 4:Example for (int i = 0; i < 10; i++) {   if (i == 4) { continue; } cout << i << '\\n'; } "<<endl;

cout<<"\n     "<<endl;




cout<<"\n      "<<endl;
cout<<"\n      "<<endl;
cout<<"\n      "<<endl;
cout<<"\n      "<<endl;
cout<<"\n      "<<endl;
cout<<"\n      "<<endl;
cout<<"\n      "<<endl;
cout<<"\n      "<<endl;
cout<<"\n      "<<endl;
cout<<"\n      "<<endl;
int height, width;
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }

    system("pause>0");
return 0 ;
// For exiting within main function return is better for memory.
   /// or exit(0) for Exit with success , may cause memory leak.

}
