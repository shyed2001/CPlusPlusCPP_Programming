/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include<cstdlib> /// exit()
#include<conio.h> /// C programming header _getch();
/// for linux #include <curses.h> ///erase();

///using namespace std;    /// bad practice

using std::cout;
using std::cin;
using std:: endl;
using std::string;



#define SHOW_SOURCE_CODE

#define SHOW_SOURCE_FILE_PATH

/// Above two lines are user defined Macros

short OS;
short getOS(void);

///int PausedExitORContinue(string message)

int PausedExitORContinue(string message)
{
cout<< '\n'<< message << endl;

    char D;
    int C = 1;

    while(C == 1)
    {
        puts("\n Please enter y or Y to continue, or n or N to stop the program ");

    scanf("%c",&D);
    puts("You Entered ");
    printf("%c",D);
        if ((D == 'y') || (D == 'Y'))
            {
                    C = 0;

                    break;
            }
        else if((D == 'n') || (D == 'N'))
            {
                C = 0;
                exit(0);
            }
        else
        {
            C = 1;
            continue;
        }

    }

}

void clearscreen(void);

//class
// class atm

class atm
{
private:   /// private member variables
long int account_No;
string name;
int PIN;
double balance;
string mobile_No;  /// string reduces the complexity

public:
// public member functions
// setData function is setting the Data into the private member variables
void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)

{
 account_No = account_No_a;
/// assigning the formal argument to the private members variables
name = name_a;
PIN = PIN_a;
balance = balance_a;
mobile_No = mobile_No_a;
}
/// setter function


//getAccountNo function is returning the user's account no.
long int getAccountNo()
{
    return account_No;
}


//getName function is returning the user's Name
string getName()
{
    return name;
}

///getPIN function is returning the user's PIN
int getPIN()
{
return PIN;
}

///getBalance is returning the user's Bank Balance
double getBalance()
{
    return balance;
}


///getMobileNo is returning the user's Mobile No.
string getMobileNo( )
{
    return mobile_No;
}


///setMobile function is Updating the user mobile no
void setMobile(string mob_prev, string mob_new)
{
    if (mob_prev == mobile_No)
// it will check old Mobile no
{
    mobile_No = mob_new;
// and Update with new, if old matches
cout << endl << "Successfully Updated Mobile no.";
_getch ();
//getch is to hold the screen ( untill user press any key)
}
/// Does not update if old mobile no. does not matches
else
{
cout << endl << "Incorrect !! ! Old Mobile no" ;
//getch is to hold the screen ( untill user press any key )
_getch ( );
}

}


///cashWithDraw function is used to withdraw money from ATM

void cashWithDraw(double amount_a)
{
    if (amount_a > 0 && amount_a <=balance)
/// check entered amount validity
{
balance -= amount_a;
puts("Please Collect YourCash: ");
/// balance = balance - amount_a
cout<< "Available Balance :" << balance<< endl;
_getch();
///getch is to hold the screen (until user press any key )
}
else
{
puts("Invalid Input or Insufficient Balance");
_getch();
//getch is to hold the screen ( until user press any key )
system("cls");
}



}



};








/// Main Function /// Main Function /// Main Function /// Main Function /// Main Function /// Main Function /// Main Function

/// Main Function /// Main Function /// Main Function /// Main Function /// Main Function /// Main Function /// Main Function

/// Main Function /// Main Function /// Main Function /// Main Function /// Main Function /// Main Function /// Main Function



int main( )
{
short OS = getOS(); /// OS==1 is windows.

cout << OS <<endl;


#ifdef SHOW_SOURCE_FILE_PATH



       /// Prints location of C this C code.

   printf("%s \n",__FILE__); /// __FILE__ holds the current file name




#endif


#ifdef SHOW_SOURCE_CODE
        /// We can append this code to any C program
    /// such that it prints its source code with line number.

unsigned long ln = 0;
 FILE *fp = fopen(__FILE__, "r");
int prev = '\n';
int cc;  // Use int here, not char
while((cc=getc(fp))!=EOF) {
  if (prev == '\n'){
    printf("%07lu ", ++ln);
  }
  putchar(cc);
  prev = cc;
}
if (prev != '\n') {
  putchar('\n');  /// print a \n for input that lacks a final \n
}
printf("lines num: %lu\n", ln);

    fclose(fp);
          /// We can append this code to any C program
    /// such that it prints its source code with line number.

#endif
///  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");
   clock_t tStart = clock();




puts( " " );
puts( " Mini ( ATM ) Project " );

system("cls");

puts( " Mini Project ( ATM ) \n \
Write a program showing ATM functionalities using OOP's \n \
1. Check Balance \n \
2. Cash WithDraw \n \
3. User Details \n \
4. Update Mobile No. \n \
" );


puts( " Welcome to ATM Machine" );


puts( " Please enter your account number:- " );



int choice = 0, enterPIN;
///enterPIN and enterAccountNo. ---> user authentication
long int enterAccountNo;

system("cls");

///created User ( object )
atm user1;
///Set User Details ( into object )
///Setting Default Data )
user1. setData(1234567, "Tim", 1111, 45000.90, "9087654321") ;



do
{
system("cls");

cout<< endl << "***Welcome to ATM***" << endl;
cout<< endl << "Enter Your Account No ";
// asking user to enter account no
cin >> enterAccountNo;
cout << endl << "Enter PIN ";
// asking user to enter PIN
cin >> enterPIN;

// check whether enter values matches with user details

if((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))

   {
       do
        {
                   double amount = 0;
string oldMobileNo, newMobileNo;

system("cls") ;
///user Interface
cout << endl << "**** Welcome to ATM *" <<endl;
cout << endl << "Select Options ";
cout <<endl  << "1. Check Balance";
cout << endl << "2. Cash withdraw";
cout<< endl<<   "3. Show User Details";
cout<< endl <<  "4. Update Mobile no.";
cout << endl << "5. Exit" << endl;
cin >> choice;  // taking user choice

// switch condition

switch (choice)
{
case 1:    ///if user presses 1
    /// getBalance is ... printing the users bank balance
cout << endl << "Your Bank balance is :" << user1. getBalance();

_getch( ) ;

break;
case 2:
/// if user presses 2
puts("Enter the amount");
cin>> amount;
/// calling cashWith
///passing the withdraw amount
user1.cashWithDraw(amount);
break;

case 3:
///if user presses 3
cout << endl << "*** User Details are :- ";
cout << endl << "-> Account no" << user1.getAccountNo( );
cout << endl << "-> Name " << user1.getBalance();
cout << endl << "-> Balance " << user1.getName( ) ;
cout << endl << "-> Mobile No. " << user1.getMobileNo( );
// getting and printing user details
_getch( ) ;
break;


case 4:
///if user presses 4
cout << endl << "Enter Old Mobile No.";
cin >> oldMobileNo;
// take old mobile no
cout << endl << "Enter New Mobile No. ";

cin >> newMobileNo;
// take new mobile no
user1. setMobile(oldMobileNo, newMobileNo); // now set new mobile no
break;


// if user presses 5
// exit application

case 5:
exit (0);

///handle invalid user inputs
default:
cout << endl << "Enter Valid Data !!!";


    }

   }while (1); // MENU
// condition will always TRUE and loop is capable of running infinite times


}

else
{
    cout << endl << "User Details are Invalid !!!";
_getch();
}

} while (1);

//LOGIN will always TRUE and loop is be condition capable of running infinite times

puts( " " );
puts( " " );
puts( " " );








puts("\n Please press a button to continue");
///// all system /// C++ all system // platform
//
std::cin.get();

/// use cin.get() in C++ instead of system("pause") to end your programs in a very simple way using an older program. I don't get into anything too heavy or too new.

/// cin.get() is far more efficient and unlike system("pause"), this should work in non-windows environment without a problem.

    ///system("pause>0");

    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused untill you press any key.

    return 0;
    /// return 0 means the value 0 (usually some type of int) is returned from a function to the caller of the function.
    /// statement is a type of statement which is written at the last of any function which has its return type as
    /// integer(commonly).This is like a command saying "NOTHING TO DO" at the last of the functions definition.

}


    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused until you press any key.
    ///printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n

/*
You can use the OS commands to clear the contents of the console.

#include<stdlib.h>
int main(){

if (OS==1) /// from getOS function
{
system("cls");   //For windows
}
else
system("clear"); //For Linux

This is actually a quite simple problem. All you have to do is use printf. You don't even need printf or any headers, for that matter.

printf("\e[1;1H\e[2J");
The \e[1;1H sets the screen to the 1st row and 1st column. the 2J overwrites all characters currently on the screen.

You can also use this:

write(0,"\e[1;1H\e[2J",12);
Then you don't need stdio.h.


*/

/*
system("pause");
is wrong because it's part of Windows API and so it won't work in other
operation systems.

You should try to use just objects from C++ standard library.
A better solution will be to write:

cin.get(); ///  cin.get();  // or getchar() or _getch();
return 0;
But it will also cause problems if you have other cins in your code.
 Because after each cin, you'll tap an Enter or \n which is a white space character. cin ignores this character and leaves it in the buffer zone but cin.get(), gets this remained character. So the control of the program reaches the line return 0 and the console gets closed before letting you see the results.
To solve this, we write the code as follows:
cin.ignore();
cin.get();
return 0;

You can use std::cin.get() from iostream:

#include <iostream> // std::cout, std::cin
using namespace std;

int main() {
   do {
     cout << '\n' << "Press the Enter key to continue.";
   } while (cin.get() != '\n');

   return 0;
}

 cin.get();  // or getchar()

Similarly, in C language, getchar() can be used to pause
 the program without printing the message “Press any key to continue…”.

*/
short getOS(void)
{
       #if defined(_WIN32) || defined(_WIN64) || defined(__TOS_WIN__) || defined(OS_WINDOWS) || defined(__WIN32__) || defined(__WINDOWS__)
      char windows = 1;
      return windows;
      cout<< " Windows"<< endl; system("dir");

   #else
      windows = 0;
      return windows;
      cout<<"NOT Windows"<< endl;
   #endif

}
/// puts(" \n object Oriented Programming OOP in C++, Friend Function ");

void clearscreen(void) /// for linux and Windows
{

if (OS==1) /// from getOS function and short OS global variable
{
system("cls");   //For windows
}
else
system("clear"); //For Linux
/// or    erase();
}
