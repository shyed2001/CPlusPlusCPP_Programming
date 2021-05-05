/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

//const float PI = 3.14f;
int const DAYS_IN_A_WEEK = 7;
int main(void)

{

    cout<<"\n  A C++ program is a collection of commands or statements.    \n"<<endl;\

    cout<<"\n      \n"<<endl;
cout<<"\n  Entry point of every C++ program is the main() function, irrespective of \n what the program does. Curly brackets { } indicate the beginning and end of a function, \n  which can also be called the function's body. The information inside the brackets \n indicates what the function does when executed.    \n"<<endl;
cout<<"\n   cout is the stream object used to perform output on the standard output device which is usually the display screen. cout is used in combination with the insertion operator <<. In C++, streams are used to perform input and output operations.   \n"<<endl;

  cout<<"\n #include <iostream> is a header file library that lets us work with input and output objects, such as cout ('see-out' used in line 5). Header files add functionality to C++ programs. C++ offers various headers, each of which contains information needed for programs to work properly.\n"<<endl;
cout<<"\n      \n"<<endl;
cout<<"\n In our code, the line using namespace std; tells the compiler to use the std (standard) namespace: using namespace std means that we can use names for objects and variables from the standard library. The std namespace includes features of the C++ Standard Library.\n "<<endl;

cout<<"\n  The backslash (\\) is called an escape character, and indicates a 'special' character.    \n"<<endl;
cout<<"\n  The new line character \\n can be used as an alternative to endl.Using a single cout statement with as many instances of \n as your program requires will print out multiple lines of text.    \n"<<endl;

cout<<"\n  The cout object does not insert a line break at the end of the output. One way to print two lines is to use the endl manipulator, which will put in a line break.    \n"<<endl;

cout<<"\n in C++ int data types are fixed size, 4 bytes, 32 bits and numbers are represented in 2's complement method. 6 is 00000000 00000000 00000000 00000110 and -6 is 11111111 11111111 11111111 11111010 \n" <<endl;
cout<<"\n   Basic Data Types: \n"<<endl;
cout<<"\n The data type specifies the size and type of information the variable will store: Data Type	Size	Description. \n"<<endl;
cout<<"\n int	4 bytes	Stores whole numbers, without decimals \n"<<endl;
cout<<"\n  float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits \n"<<endl;
cout<<"\n double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits \n"<<endl;
cout<<"\n boolean	1 byte	Stores true or false values \n"<<endl;
cout<<"\n char	1 byte	Stores a single character/letter/number, or ASCII values     \n"<<endl;

cout<<"\n  String Types:-The string type is used to store a sequence of characters (text). This is not a built-in type, but it behaves like one in its most basic usage. String values must be surrounded by double quotes: Example - string greeting = "Hello";cout << greeting;   \n"<<endl;
cout<<"\n  To use strings, you must include an additional header file in the source code, the <string> library:   \n"<<endl;
cout<<"\n  // Include the string library #include <string> // Create a string variable
string greeting = "Hello";// Output string value cout << greeting;    \n"<<endl;
string greeting = "Hello";
cout << greeting<<endl;
// Include the string library
#include <string>

// Create a string variable
string greeting = "Hello";

// Output string value
cout << greeting<<endl;

    int num1, num2, num3;
    int sum;

    cout<<"Please enter three numbers for sum.\n"; /// Line not ended.

    cout<<"Please enter three numbers separated by space :\n"<<endl; /// Line ends.

    cin>>num1>>num2;
    cin>>num3;
    sum = num1 + num2 + num3;

    cout<<"num1 + num2 + num3 = sum"<<endl;

    cout<<num1<<" + "<<num2<<" + " << num3<< " = "<<sum<<endl;

    cout <<num1;

      int num = 3;

      cout << "Hello World! \n";

      cout << "Hello World! \n";
  cout << "\\n characters after each other will create a blank line: \n";
  cout << "Hello World!"<<endl; /// Another way to insert a new line, is with the endl manipulator:

cout << "Both \\n and endl are used to break lines. However, \\n is used more often and is the preferred way."<<endl;


 ///

  cout << num<<endl;
  cout << "num!"<<endl;
  cout << "3"<<endl;
  cout << 3 <<endl;


cout<<"\n  Adding comments to your code is a good practice. It facilitates a clear understanding of the code for you and for others who read it.    \n"<<endl;

cout << "Single or multi-line comments? \n";
cout << "It is up to you which you want to use.\n ";
cout << "Normally, we use // or /// for short comments, and /* */ for longer.\n"<<endl;

cout << "\n This " << "is " << "awesome!\n ";


   cout<<"\n  in C++ int data types are fixed size, 4 bytes, 32 bits and numbers are represented in 2's complement method. 6 is 00000000 00000000 00000000 00000110 and -6 is 11111111 11111111 11111111 11111010 \n" <<endl;

cout<<"\n Forms of Data are Variables and Variables. C++ has two type of Constants :- Programmar Defined Constant (const int NUM = 5)  and C++ Literals (Built into the language, ie- 8, 6, -6, abc, 3654 etc)   \n"<<endl;

cout<<"\n Arithmetic Operators :- plus +, minus - , multiply * , div / , mod % , assign = "<<endl;
int xx22 = 8;
int yy = (xx22 = 7);
cout<<"\n when int xx22 = 8    \n"<<endl;
cout<<" xx22  =  "<< xx22 <<endl;
cout<<  "when yy = (xx22 = 7) " <<endl;
cout<<"yy= "<<yy<<endl;

int DaysofTravel;
int fullWeeks, daysRemaining;
cout<<"\n  Please enter the number of days you have Travelled :     \n"<<endl;
cin>>DaysofTravel;

fullWeeks = DaysofTravel/ DAYS_IN_A_WEEK;
daysRemaining = DaysofTravel%DAYS_IN_A_WEEK;

cout<< DaysofTravel << " days are "<< fullWeeks<<" weeks and "<< daysRemaining<< " days "<<endl;

cout<<"\n Data type of float or double are real numbers or fractional or decimal numbers \n"<<endl;
cout<<"\n  float have size of 4 bytes or 32 bits, double has size of 8 bytes or 64 bits \n"<<endl;
cout<<"\n  doubles are 3.4, -8.65, 6.0  etc  \n"<<endl;
cout<<"\n  floats are 3.4f, -8.765f, 6.0f     \n"<<endl;
double radius1, AREA;
cout<<"\n  Please enter a radius for a circle    \n"<<endl;
cin>>radius1;
//AREA = PI * (radius1*radius1);
AREA = M_PI * (radius1*radius1);  /// M_PI is cmath or Math PI. 
cout<<"\n Area of the circle with radius of  \n"<< radius1<< " is "<< AREA<<endl;
cout<<"\n  Casting is converting one data type to other type  \n"<<endl;
cout<<"\n  Doubles or floats converted to integers , lose their value after decimal point  \n"<<endl;
     double X2 = (int) 6.99;
     double XX1 = (int) 6.7;
     double XX2 = (int) 6.1;
     double XX3 = (int) 6.9; 
cout<<"\n  double X2 = (int) 6.9    \n"<<endl;
cout<<"\n  X2 =    \n"<< X2<<endl;
cout<<"\n  double XX1 = (int) 6.7   \n"<<endl;
cout<<"\n  XX1 =    \n"<< XX1<<endl;
cout<<"\n  double XX2 = (int) 6.1   \n"<<endl;
cout<<"\n  XX2 =    \n"<< XX2<<endl;
cout<<"\n  double XX3 = (int) 6.9   \n"<<endl;
cout<<"\n  XX3 =    \n"<< XX3 <<endl;
cout<<"\n  Doubles or floats converted to integers , lose their value after decimal point  \n"<<endl;

cout<<"\n  5/2  =  "<<  5/2  <<endl;
cout<<"\n  5.0/2.0 = "<< 5.0/2.0 <<endl;
cout<<"\n   5.0/2  = "<< 5.0/2<<endl; // 

int xxx = 5/2;
double yyy = 5/2;
float zzz = 5/2;
cout<<"\n  int xxx = 5/2, so xxx=    \n"<< xxx <<endl;
cout<<"\n   double yyy = 5/2, yyy = \n"<< yyy<<endl;
cout<<"\n  float zzz = 5/2, zzz =     \n"<< zzz<<endl;
cout<<"\n  Compiler does the casting    \n"<<endl;


cout<<"\n  'char' or Characters are letters    \n"<<endl;
cout<<"\n  Each 'char' data uses 1 byte or 8 bits    \n"<<endl;
cout<<"\n   Repressented by ASCII table and mapped value.   \n"<<endl;

char xx = (char) 97;
cout<<"(char) 65 will show" <<(char) 65 <<endl;
cout<<"xx = (char) 97 , xx = " << xx <<endl;
cout<<"\n  (char) 65, this casts 65 to char A on ASCII map table \n"<<endl;
cout<<"\n Please enter a character \n"<<endl;
char Charin;
cin>> Charin;
int asciivalue=0;
asciivalue = (int) Charin;

cout<<Charin<<" ASCII value is "<< asciivalue<<endl;

char ch1 = 'a';
char ch2 = 'B';

cout<<"\n   char ch1 = 'a', char ch2 = 'B' ;- is the way to assign a char to a variable\n"<<endl;
cout<<"\n  ch1 =   "<< ch1<<endl;
cout<<"\n  ch2 ="<< ch2 <<endl;
cout<<"\n  ch3 = '\n', will produce a new line only , if ch3 is printed \n"<<endl;
cout<<"\n  '\t' is for tab or four spaces \n"<<endl;
char CH1, CH2, CH3;
CH1 = 'a';
CH2 = 'a' + 1;
CH3 = 'CH2' + 1; 
cout<<"\n warning: multi-character character constant -Wmultichar . warning: overflow in conversion from 'int' to 'char' changes value from '4409395' to '3' -Woverflow\n" <<endl;
cout<<"\n char CH1, CH2, CH3; CH1 = 'a';CH2 = 'a' + 1;CH3 = 'CH2' + 1; \n"<<endl;
cout<<"\n  CH1 =  "<< CH1<<endl;
cout<<"\n  CH2 = "<< CH2<<endl;
cout<<"\n  CH3 =  "<< CH3<<endl;
cout<<"\n  'a' + 1 = "<< 'a' + 1 <<endl; // 'char' a is casted to int , to preserve accuracy. 
cout<<"\n  // 'char' a is casted to int , to preserve accuracy.     \n"<<endl;
cout<<"\n (char) 'a' + 1 = "<< (char) 'a' + 1 <<endl; // 'char' a is casted to int , because a can be casted to int withot loosing accuracy. but int 1 can not casted to a char without loosing accuracy. 
cout<<"\n  // 'char' a is casted to int , because a can be casted to int withot loosing accuracy. but int 1 can not casted to a char without loosing accuracy. \n"<<endl;
cout<<"\n (char) ('a' + 1) = "<< (char) ('a' + 1 )<<endl;


char lowcaseletter, uppercaseletter;
int offset;

cout<<"\n Please enter a lower case letter: "<<endl;

cin>> lowcaseletter;

offset = (int) (lowcaseletter - 'a');

uppercaseletter = (char)('A' + offset);

cout<<"\n Uppercase of  "<< lowcaseletter<< " is " << uppercaseletter<<endl;


char Lowercaseletter, Uppercaseletter;

cout<<"\n Please enter a Upper-case letter: "<<endl;

cin>>  Uppercaseletter;

int Offset = 32;  /// 32 is the difference between uppercase and lowercase letters in ascii table. 

Lowercaseletter = (char) (Uppercaseletter + Offset); /// Uppercaseletter letter is casted to int, then Uppercaselette + Offset in combinely casted to 'char'.

cout<<"\n Lowercase of  "<< Uppercaseletter<< " is " << Lowercaseletter<<endl;


cout<<"\n  'string' is not a built in data type in C++, we have to #include <string> to use string data type    \n"<<endl;
cout<<"\n  string is a sequence of characters \n"<<endl;
cout<<"\n  String concatening with + is possible  \n"<<endl;

string s;
s = " Hello ";

cout<<"\n string s, s = 'Hello' so s = "<< s <<endl;

cout<<"\n string s, s = 'Hello' so s + world = "<< s + "world" <<endl;

s = s + " world ";

cout<<"\n string s, s = 'Hello' so s = s + world = "<< s <<endl;

cout<<"\n    String concatening with + is possible   \n"<<endl;


cout<<"\n string s, s = 'Hello' so s = s + world = "<< s <<endl;

cout<<"\n    String concatening with + is possible   \n"<<endl;

cout<<"\n    C++ Booleans; Very often, in programming, you will need a data type that can only have one of two values, like:YES / NO, ON / OFF, TRUE / FALSE ; For this, C++ has a bool data type, which can take the values true (1) or false (0). Boolean Values A boolean variable is declared with the bool keyword and can only take the values true or false: Example, bool isCodingFun = true; bool isFishTasty = false;  cout << isCodingFun;  // Outputs 1 (true) cout << isFishTasty;  // Outputs 0 (false) From the example above, you can read that a true value returns 1, and false returns 0. However, it is more common to return boolean values from boolean expressions (see next page).\n"<<endl;

cout<<"\n C++ Boolean Expressions : - A Boolean expression is a C++ expression that returns a boolean value: 1 (true) or 0 (false). You can use a comparison operator, such as the greater than (>) operator to find out if an expression (or a variable) is true:   Example , int x = 10; int y = 9; cout << (x > y); // returns 1 (true), because 10 is higher than 9  Or even easier: Example cout << (10 > 9); // returns 1 (true), because 10 is higher than 9   In the examples below, we use the equal to (==) operator to evaluate an expression: Example , int x = 10; cout << (x == 10);  // returns 1 (true), because the value of x is equal to 10; Example cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15
Booleans are the basis for all C++ comparisons and conditions. "<< s <<endl;






cout<<"\n  bool or boolean is True or False values , data is one byte or 8 bit, butsingle bit is enough   \n"<<endl;
cout<<"\n False is represented by a single byte / 8 bit Zero, True is any non Zero Value  \n"<<endl;
cout<<"\n  C++ bool literals are 'true' or 'false' \n"<<endl;
cout<<"\n  'Not' or '!' Operator    \n"<<endl;
cout<<"\n  bool b1, b2, b3    \n"<<endl;
cout<<"\n  b1 = true; b2 = !b1, so b2 = !true, so b2 = false    \n"<<endl;
cout<<"\n  b3 = !false; so b3 = true = b1 = !b2    \n"<<endl;
cout<<"\n   'And' or '&&' operator, both conditions must be true or else false"<<endl;
cout<<"\n  bool b1, b2, b3     \n"<<endl;
cout<<"\n  b1 = true, b2 = false, b3 = b1 && b2 = false    \n"<<endl;
cout<<"\n  b1 = true, b2 = false, b3 = b1 && !b2 = true     \n"<<endl;
cout<<"\n  'Or'  '||' operator   \n"<<endl;
cout<<"\n   If both are False then they are false, if only one is true, hen the bool  is true.   \n"<<endl;
cout<<"\n  bool b1, b2, b3     \n"<<endl;
cout<<"\n b1 = false; b2 = b1 || !b1; so b2 = true     \n"<<endl;
cout<<"\n  b3 = b2 && (b1 || true); so b3 = true    \n"<<endl;

cout<<"\n  Atomic Bollean Expression  , bool literals true , false.  \n"<<endl;
cout<<"\n  Atomic Bollean Expression  , arithmetic expressions using relational operators, <, >, <=, >= etc. \n"<<endl;
cout<<"\n Compound Bollean Expressions, simple bollean expressions combined with bollean operators - &&, ||, ! etc .  \n"<<endl;
cout<<"\n   b = true; (atomic),\n b = (true && !b); (compound ) , so b = false    \n"<<endl;
cout<<"\n  x = 3; b = (x < 5); so b = true , arithmetic expressions using relational operator   \n"<<endl;
cout<<"\n b = (x >=0) && (x < 5); so b = true \n"<<endl;
cout<<"\n  Check equality by '==', and '!=' is not equal. \n"<<endl;
cout<<"\n   b = (x==3) || (x==4); so b =true   \n"<<endl;

cout<<"\n  float vs. double .The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations. \n"<<endl;

float f1 = 35e3;
double d1 = 12E4;
cout<<"\n float f1 = 35e3; so f1 = " << f1;
cout <<"\n double d1 = 12E4; so d1 = " << d1;
 cout <<"Scientific Numbers: A floating point number can also be a scientific number with an 'e' to indicate the power of 10:\n";
 
  cout <<"float f1 = 35e3; double d1 = 12E4; cout << f1 << \n; cout << d1;\n";
  
  float f1 = 35e3;
  double d1 = 12E4;
  cout<< "\n" << f1 << "\n";
  cout << "\n"<< d1;


cout<<"\n  Boolean Types. A boolean data type is declared with the bool keyword and can only take the values true or false. When the value is returned, true = 1 and false = 0.  \n"<<endl;

bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun;  // Outputs 1 (true)
cout << isFishTasty;  // Outputs 0 (false)
cout<<"\n  bool isCodingFun = true; bool isFishTasty = false; cout << isCodingFun;  // Outputs 1 (true) cout << isFishTasty;  // Outputs 0 (false) . Boolean values are mostly used for conditional testing.\n"<<endl;


cout<<"\n Character Types: The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'c': \n"<<endl;
cout<<"\n   char myGrade = 'B'; cout << myGrade<<endl;char a = 65, b = 66, c = 67;cout << a <<endl;cout << b <<endl; cout << c <<endl;     \n"<<endl;
  char myGrade = 'B';
  cout << myGrade<<endl;
  char a = 65, b = 66, c = 67;
  cout << a <<endl;
  cout << b <<endl;
  cout << c <<endl;

    cout<<"\n   Here we will see how to print some floating point numbers up to some pre-defined decimal places. In C++, we can use setprecision with the cout to do this word. This is present under the iomanip header file in C++, #include <iomanip>."<<endl;


   double x = 2.3654789d;
   cout << "Print up to 3 decimal places: " << setprecision(3) << x << endl;
   cout << "Print up to 2 decimal places: " << setprecision(2) << x << endl;
   cout << "Print up to 7 decimal places: " << setprecision(7) << x << endl;
cout<<"\n /* setprecision(n) applies to the entire number, not the fractional part. You need to use the fixed-point format to make it apply to the fractional part: setiosflags(ios::fixed)*/ "<<endl;

cout<<"\n // You have to set the 'float mode' to fixed."<<endl;
    double d = 122.345;
    cout << fixed << setprecision(2) << d<<endl; 
    //    floating point formatting example
    cout << fixed << setprecision(2) << 122.345 << endl;
    //    Output:  122.34

    //    integer formatting example
    cout << fixed << setprecision(2) << double(122) << endl;
    //    Output:  122.00

cout<<"\n  Branching Statements, if, if else, if if if, if else if else  "<<endl;
cout<<"\n  one way if statement   "<<endl;

cout<<"\n  Computing Absolute Values   "<<endl;

cout<<"\n Please enter a value  to get its absolute value  "<<endl;

int UI11;
cin>> UI11;

if ( UI11 < 0)
     UI11 *= (-1); //UI11 *= UI11 * (-1);

cout<<"\n Absolute value is "<< UI11<<endl;


cout<<"\n Determine Even or Odd   "<<endl;

cout<<"\n Please enter a positive integer  Value  "<<endl;

int UI12 ;
cin>> UI12 ;
if (UI12 % 2 == 0) 
    cout<< UI12 << " is a even number "<<endl;
    
if  (UI12 % 2 == 1) 
    cout<< UI12 << " is a odd number "<<endl;




cout<<"\n Determine Even or Odd   "<<endl;
cout<<"\n Please enter a integer  Value  "<<endl;


int UI1 ;
cin>> UI1 ;

int UI2 = UI1;

if ( UI1 < 0)
{
     UI2 = UI1 * (-1);
     cout<< UI1<< " is a negative number "<<endl;
     cout<< " Absolute value of  "<< UI1<< " is |"<< UI1<< "| ="<< UI2 <<endl;
}   // compound if () multi instruction need {}


else 
    cout<< UI1<< " is a positive number "<<endl;  
    // simple one instruction else does not need {}

if (UI2 % 2 == 0) 
    cout<< UI1<< " is a even number "<<endl;  // simple one instruction does not need {}
    
else 
    cout<< UI1<< " is a odd number "<<endl;  // simple one instruction does not need {}

cout<< "\nMod or Modulo operator % (1 % 2) = " << 1 % 2<< " and 0 % 2 = "<< 0 % 2 <<endl;

/// output  1 % 2 = 1 and  0 % 2 = 0

cout<<"\n  There should be a boolean statement inside () of if ( ..boolean..);    "<<endl;
cout<<"\n  Arithmetic Operators inside of  if ( ..arithmetic..) will give error. "<<endl;


cout<<"\n Check_Alphabate_Letter_Upper_Lower_Numeric_Digit with if() else if "<<endl;

cout<<"\n Please enter a Alphabate or Letter or Upper or Lower or Numeric or Digit "<<endl;

char UserInputChar;
cin>> UserInputChar ;

if (UserInputChar >= 'a' && UserInputChar <= 'z')  // 'a', 'A', .... are C++ character or char literals.
    cout<<"\n Your input "<< UserInputChar<<" is a lower case letter "<<endl;
else if (UserInputChar >= 'A' && UserInputChar <= 'Z')
    cout<<"\n Your input "<< UserInputChar<<" is a Upper case letter "<<endl;
else if (UserInputChar >= '0' && UserInputChar <= '9') // '0', '9', .... are C++ character or char literals.
// else if (UserInputChar >= 0 && UserInputChar <= 9) will not work.
    cout<<"\n Your input "<< UserInputChar<<" is a Numeric digit "<<endl;
else 
    cout<<"\n Your input "<< UserInputChar<<" is not alpha-numeric character "<<endl;

cout<<"\n Time conversion-- 24 hour format to 12 hour format-- Time conversion    "<<endl;

cout<<"\n Please enter time in 24 hour format Hh:Mm to convert to 12 hour format "<<endl;

int hour24, hour12, min24, min12;
char colon;
string period ;
cin>>hour24>>colon>>min24;

if ( min24 >= 60 || min24 < 0 )  // Minutes can not be greater than 60
    {
        cout<<"\n wrong time input, exitting\n"<<endl;
        return 1; /// Exit with error.
    }

else if (hour24 >24 ||  hour24 < 0 )  // Hours can not be greater than 24 hours
    {
        cout<<"\n Wrong time input, exitting\n"<<endl;
        return(1) ; /// or exit (1) means Exit with error. exit () , may cause memory leak. 
    }

else 
   min12 = min24 ;   /// min24 = min12 ;  will not work.

if (hour24 >= 0 && hour24 <= 11)
{
    period = " am ";
        if (hour24 == 0 )
            hour12 = 12;
        else 
            hour12 = hour24; // hour24 = hour12;

}

else 
{
    period = " pm " ;
        if ( hour24 == 12 )
            hour12 = 12 ;
        else
            hour12 = hour24 -12;

}

cout<< hour24<< " : " << min24 <<" is "<< hour12<< " : "<< min12 << period << endl;



cout<<"\n  Switch statements   Switch statements   "<<endl;

double number14 , number15 , Result14 ;
char operator14;

cout<<"\n Please enter two number digits in Digit operator Digit format "<<endl;

cin>> number14 >> operator14 >> number15;

switch(operator14)  // Switch condition,  Numeric or operator conditions , int, char or bool.

 {
    case '+':  // Must be constants, C++ literals, or named Constants. No Variables.
        Result14 = number14 + number15;
        cout<<"\n Addsion Answer is =  " << Result14<<endl;
        break;  // Not mandatory. 

    case '-':
        Result14 = number14 - number15;
        cout<<"\n Subtracting Answer is =  " << Result14<<endl;
        break; // Takes out of the switch statement

    case '*':
        Result14 = number14 * number15;
        cout<<"\n Multiply Answer is =  " << Result14<<endl;
        break; // Takes out of the switch statement

    case '/': // Must be constants, C++ literals, or named Constants. No Variables.
        Result14 = number14 / number15;
        cout<<"\n Div/Division Answer is =  " << Result14<<endl;
            if (number15 == 0)
                cout<<"\n Division with Zero , does not give satisfactory Answer, inf is infinity =  " <<Result14<<endl;
        break;  // Not mandatory.

 /*   case '%':
        Result14 = number14 % number15;
        cout<<"\n Mod or remainder Answer is =  " << Result14<<endl;
        break;
TestCpp.cpp:96:29: error: invalid operands of types 'double' and 'double' to binary 'operator%'
   96 |         Result14 = number14 % number15;
      |                    ~~~~~~~~ ^ ~~~~~~~~
      |                    |          |
      |                    double     double
% can not be used between two doubles
*/
    default:  // If ther is no default, then nothing will be executed in here
        cout<<"\n"<< number14 << operator14 << number15 << "\n Wrong Input " << endl;
        break; // Not mandatory.
 }

cout<<"\n  Answer is =  " << Result14<<endl;


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


    return 0;

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
/// open new file  Ctrl+Shift+n*/




/* 
 Programming and Data Structures - edX MicroBachelors Syllabus

Winter 2020
Professors: Daniel Katz-Braunschweig, Itay Tal, Aspen Olmsted



Program Description
This is a self-paced program that provides an undergraduate-level introduction to C++ programming and data structures.  The material in the program will help prepare students for careers and further course work in computer science, cybersecurity and information technology.

Program Objectives
By the end of this program students should be able to:
    � Identify and explain a programming development lifecycle, including planning, analysis,design, development, and maintenance.
    � Demonstrate a basic understanding of object-oriented programming by using structures and classes in software projects.
    � Use object-oriented programming techniques to develop executable programs that include elements such as inheritance and polymorphism.
    � Document and format code in a consistent manner.
    � Apply basic searching and sorting algorithms in software design.
    � Apply single-and multi-dimensional arrays in software.
    � Use a symbolic debugger to find and fix runtime and logical errors in software.
    � Demonstrate a basic understanding of programming methodologies, including object oriented, structured, and procedural programming.
    � Describe the phases of program translation from source code to executable code
    � Design and develop programs that utilize linked lists to store data internally.
    � Design and develop programs that utilize stacks and queues to manage collections of data
    � Design and develop programs that recursion to solve problems that can be expressed with recurrence.
    � Utilize binary search trees and balanced trees to implement fast retrieval of data from a collection of data stored in memory.


Program Structure
This program  is conducted entirely online, which means you do not have to be on campus to complete any portion of it. You will participate in the course using edX located at https://edx.org.

Students will have access to
    � Active Modules needed to be watched, answering knowledge self-check quizzes
    � Forum discussions, asynchronous;
    � Auto-graded Labs
    � Resource links


Learning Time Rubric
You may choose your own weekly breakdown, such as live webinar sessions.

Learning Time Element
Asynchronous* / Synchronous**
Time on Task for Students (weekly)
Notes
Lecture (Active Module)
Asynchronous
2.00 hours
Video format. Expect quizzes throughout the module.
Readings
Asynchronous
1.00 hours
Readings are provided throughout the learning modules
Weekly Discussion Board
Asynchronous
0.5 hours
Students can interact with TA and professor via the discussion forums.
Labs
Asynchronous
4.0 hours
Students submit their labs to gradescope
Quizzes & Tests
Asynchronous
1.0 hours
Students take quizzes open book and Final Exam proctored with webcam

*Asynchronous learning is defined as any non-real time student learning, such as recorded lecture, podcast, interactive module, articles, websites, etc. This also includes any student-to-student or faculty-to-student communication that may happen with an asynchronous tool, such as discussion board, chatroom, e-mail, text, etc.
**Synchronous learning is defined as any real-time student-to-student and/or faculty-to-student learning, such as a live webinar session or other video/audio communication service.


Course Communication

Announcements -

Announcements will be posted on edX on a regular basis. You can locate all class announcements at the top of the course page.  Be sure to check the class announcements regularly as they will contain important information about class assignments and other class matters.

Discussion Forums �

Discussion forums are an excellent way for you to engage with the course material and with your peers. You are expected to read the discussion boards and engage in thoughtful discussions. I will read all discussion posts and provide content clarification and feedback when necessary.


Netiquette �

When participating in an online class it is important to interact with your peers in an appropriate manner. Always use professional language (no netspeak) in your discussion board posts and emails. Please be respectful of your classmates at all times even if you disagree with their ideas.


Course requirements
Participation is paramount to your success in this course. Be sure to log into edX multiple times a week, read all announcements, complete all Active Learning Modules, and participate in Discussion Forums.

Course evaluation will consist of by-module programming assignments, quizzes and final exams.  The quizzes, providing multiple attempts, without proctoring. The final exams are closed books and utilize an online proctor.








Introduction to Programming in C++ (2 Credits, 8 weeks).
Unit Grading:
    � Quizzes 30%
    � Labs 40%
    � Final Exam 30%

Unit Outcomes:
    � apply variables in C++ program development
    � analyze C++ assignments and apply its components in program development
    � apply basic C++ I/O operations with different data types
    � design C++ expressions using arithmetic operations (including understanding their limitations, such as integer truncation, round-off error, division by zero, narrowing and widening conversions, casting, precedence, and standard math library functions)
    � design C++ expressions using relational operators (including understanding floating point equality)
    � design C++ expressions using logical operators (including short-circuit)
    � design C++ selection statements (including nested selection)
    � design C++ repetition statements (including count-controlled versus event-controlled, sentinel-controlled)

Unit Outline:
    1. Hello World
    2. Data Types and Expressions
    3. Data Type Labs
    4. Branching Statements
    5. Branching Labs
    6. Iterative Statements
    7. Iteration Labs
    8. Final Exam







Advanced Programming in C++ (2 Credits, 8 weeks).
Unit Grading:
    � Quizzes 30%
    � Labs 40%
    � Final Exam 30%

Unit Outcomes:
    � Apply basic searching and sorting algorithms in C++ programming.
    � Apply single-and multi-dimensional arrays in C++ programming.
    � Analyze a C++ function to determine it�s computational complexity.

Unit Outline:
    1. Functions
    2. Function Labs
    3. Algorithm Analysis
    4. Arrays
    5. Array Labs
    6. Strings
    7. String Labs
    8. Final Exam





Introduction to Data Structures (2 Credits, 11 weeks).
Unit Grading:
    � Quizzes 30%
    � Labs 40%
    � Final Exam 30%

Unit Outcomes:
    � Demonstrate a basic understanding of object-oriented programming by using structures and classes in software projects.
    � Use object-oriented programming techniques to develop executable programs that include elements such as inheritance and polymorphism.
    � Apply basic searching and sorting algorithms in software design.
    � Apply single-and multi-dimensional arrays in software.
    � Demonstrate a basic understanding of programming methodologies, including object oriented, structured, and procedural programming.
    � Design and develop programs that utilize recursion to solve problems that can be expressed with recurrence.

Unit Outline:
    1. Pointers and Dynamic Storage
    2. Pointers and Dynamic Storage Labs
    3. Recursions
    4. Recursion Labs
    5. Searching
    6. Searching Labs
    7. Sorting
    8. Sorting Labs
    9.  Object Oriented Programming
    10.  Object Oriented Programming Labs
    11. Final Exam






Advanced Data Structures (2 Credits, 9 weeks).
Unit Grading:
    � Quizzes 30%
    � Labs 40%
    � Final Exam 30%

Unit Outcomes:
    � Design and develop programs that utilize linked lists to store data internally.
    � Design and develop programs that utilize stacks and queues to manage collections of data
    � Utilize binary search trees and balanced trees to implement fast retrieval of data from a collection of data stored in memory.

Unit Outline:
    1. File Processing
    2. File Processing Labs
    3. Linked Lists
    4. Linked Lists Labs
    5. Stacks and Queues
    6. Stacks and Queues Labs
    7. Trees and Binary Search Trees
    8. Trees and Binary Search Trees Labs
    9. Final Exam




*/
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

