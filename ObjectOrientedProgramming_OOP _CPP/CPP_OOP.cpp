
#include<iostream>
#include<string>
#include<cstdlib> /// exit()

/// for linux #include <curses.h> ///erase();

using namespace std;


#define SHOW_SOURCE_CODE

#define SHOW_SOURCE_FILE_PATH

/// Above two lines are user defined Macros


short getOS();

int PausedExitORContinue(string message)
{
cout<< '\n'<< message << endl;
    char D;
    int C = 1;

    while(C == 1)
    {
        puts("\n Please enter y or Y to continue, or n or N to stop the program ");

    cin>> D;
    puts("You Entered ");
    cout<< D <<endl;
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

//clearscreen() /// for linux
//{
//    erase();
//}


//class
class house
{

private:  /// Access specifiers
    ///Private member variables, can only be used within the class ,
    /// private data can not be accessed from outside of the class, even fro am inherited class.
int length = 0, breadth = 0;
/// protected data or functions can only be accessed from inherited class.
public: /// Access specifiers, public data can be accessed from anywhere of the program.
//member functions
void setData(int x, int y)
{
    length = x;
breadth = y;
}
void area( )
{
    cout << "Area of house " << length * breadth;
    puts(" ");
}

};


 class A  /// Normal class example

 {
     private:
     int age;

     public:

     void setData(int x =0) /// setter function
     {
         age = x;
     }

     int getData() /// getter function
     {
         return age;
     }
 };

class AConstructor  /// Constructor class example

 {
     private:
     int age;

     public:

     AConstructor(int x) /// Constructor have same name as the class with parameter
     /// This is a parameterized constructor
     /// Constructor also initialize the variable.
    /// no return type, dont return anything


     {
         age = x;
     }

     int getData() /// getter function
     {
         return age;
     }
 };

class NPC
{ private:
int age;
public:

NPC ( )  /// This constructor does not take any argument.
// Non Parametrization or default constructor
{ age = 0;}
/// set to default value 0
// same name as class & don't return anything
int getData( )
{ return age ; }

};

class Person {

private:

string name;
int age;
float height;
public:
Person() /// default or non-parameterized constructor of person class
/// if the coder does not include any constructor, the compiler will allocate its own default constructors with garbage
/// values to allocate memory to member variables.
{ /// Create your own DEFAULT constructor. /// So, that you can initialize Member Variables with some known values.

/// setting default values
name = "Null";
age = 0;
height = 0.0f;
}

Person (string name_a, int age_a, float height_a)
{

name = name_a;
age = age_a;
height = height_a;

}

Person (Person &obj2)
{
name = obj2.name;
age = obj2.age;
height = obj2. height;
}


void getData()
{
    cout << endl << "Name " << name;
cout << endl << "Age " << age;
cout << endl << "Height " << height;

}

};

class All
{ private:
int age;
public:

// Non Parametrization

All ( )
{ age = 0; }

// Parametrization

All ( int x )
{ age = x; }

// Copy constructor
All (All &a_obj1 )
{ age = a_obj1.age; }

/// getter
int getData( )
{ return age ; }
};

/// Overloaded Constructor


class Aov
{ private:
int age;
public:
/// Overloaded Constructor
Aov ( int x = 0 )
// Parametrization
{ age = x; }

Aov ( Aov &a_obj11 )
// Copy constructor
{ age = a_obj11.age; }
int getData( )
{ cout << endl << "Age " << age;  }

};


class mobile
{
    private:
string name;
int RAM;
string processor;
int battery;
public:
mobile(string name_a = "Null", int RAM_a = 0, string processor_a = "Null", int battery_a = 0) /// over loaded parameterized constructor
{
    name = name_a;
RAM = RAM_a;
processor = processor_a;
battery = battery_a;
}
mobile(mobile &mob)
{

name = mob . name;
RAM = mob . RAM;
processor = mob. processor;
battery = mob . battery;

}

void getMobileData();
};

void mobile::getMobileData() /// creating body of getter function outside of the class
{
cout  << "name " << name<< endl;
cout <<  "RAM "<< RAM<< endl;
cout  << "Processor " << processor<< endl ;
cout << "Battery " << battery<< endl ;

}





class AOO
{
    private:
int weight;
public:

AOO ( int x = 0)
{ weight = x; }
AOO addWeight ( AOO w2 )
{ AOO temp;
temp.weight = weight + w2.weight;
return temp; }

AOO operator + ( AOO w2 )  /// Operator Overloading, +
{ AOO temp;

temp.weight = weight + w2.weight;
return temp; }

void operator ++ () /// pre increment operator overloading
{
    ++weight ;
}

void operator ++ (int) /// post increment operator overloading /// int is to differentiate only
{
    weight++ ;
}

int getData()  //printData()
{ cout<< "Weight " << weight<< endl;  }


};





class rectangle
{

public:
int length;
int breadth;

void show( )
{ cout<< "Length = " << length<< endl;
cout << "Breadth = " << breadth<< endl;  }

};



class cuboid : public rectangle
{

public:
int height;

void display ( )
{ cout<< "Heitht ="  << height<< endl; }
};





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


    house gini;

gini.setData(300, 500);
/// gini.length = 80; this will give error because variables are private

gini.area();

house h1, h2;
// memory allocated
h1.setData( 5, 6 );

h1.area( );
h2.setData( 7, 1 );
h2.area( );

cout<<"separate memory locations gets allocated for different object variables (Member variables),\n \
but the member functions get memory only once.\n";


 A a_obj;  /// creating object of class A

 a_obj.setData(27);
 cout<<a_obj.getData()<<"\n";

 /// When we don't pass values with object, then DEFAULT constructor is called.

 AConstructor A_obj(28);  /// creating object of class AConstructor().
/// This constructor take argument
  cout<<A_obj.getData()<<"\n";


/// When we don't pass values with object, then DEFAULT constructor is called.

Person object; /// declaring non parametrized
Person object2("Shyed", 34, 5.7f), object3(object2); /// declaring non parametrized and parametrized objects copy constructs.

object.getData(); /// calling the getter function to print default values.


object2.getData();  /// calling the getter function to print parameterized values.


object3.getData();  /// calling the getter function to print values from copy construct



Aov a_obj11;  /// creating a object from a overloaded constructor

a_obj11.getData(); /// getting value of a object from a overloaded constructor


PausedExitORContinue("Mobile Program");

cout<<" \n \
Write a program, take Phone details as input and store them in object & use \n\
Constructors. \n\
Phone Details :- \n\
1. Name \n\
2. RAM \n\
3. Processor \
4. Battery  \n ";



mobile doko;
mobile doko2("Doko123", 4, "Snapdragon", 4060);
mobile doko3 (doko2);

doko.getMobileData() ;
doko2.getMobileData();
doko3.getMobileData();



PausedExitORContinue("Overloaded Operators  Operator Overloading, \n \
                     When we make operators(+ , - , / , *) work for user-defined types like \n \
                     objects and structures. This is known as operator overloading ");


int a = 63, b = 74, c = 0;
c=a+b ;
AOO person1(63);

AOO person2(74);
AOO total;
total = person1.addWeight(person2);

total.getData();

total = person2.addWeight( person1 );


total.getData();



total = person1 + person2;

total.getData();

AOO person3;  /// default 0 will be loaded

AOO person4(77);


total = person3 + person4;

total.getData();

AOO Jon(77);

++Jon;

Jon.getData();

Jon++;

Jon.getData();


PausedExitORContinue(" Inheritance Inheritance Parent  Child Classes Base Derive Classes ");


rectangle r;
r.length =10; r.breadth = 20;
r.show();

cuboid cube;
cube.length =10; cube.breadth = 20; cube.height = 30;

cube.show();
cube.display();

                    puts(" Please press a button to continue");
                    cin.get();/// all system /// C++ all system // platform
return 0;
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

system("cls");   //For windows
system("clear"); //For Linux

}

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

cin.get(); ///  cin.get();  // or getchar()
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
 the program without printing the message �Press any key to continue��.

*/

short getOS()
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