
#include<iostream>
#include<string>
using namespace std;


#define SHOW_SOURCE_CODE

#define SHOW_SOURCE_FILE_PATH

/// Above two lines are user defined Macros
/// using namespace std;


int PauseExitORContinue()
{

    char D;
    int C = 1;

    while(C == 1)
    {
        puts("\n Please enter y or Y to continue, or n or N to stop the program ");

    cin>> D;
    puts("You Entered");
    cout<< D ;
        if ((D == 'y') || (D == 'Y'))
            {
                    C = 0;

                    break;
            }
        else if((D == 'n') || (D == 'N'))
            {
                C = 0;
                return 0;
            }
        else
        {
            C = 1;
            continue;
        }

    }

}

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
mobile(string name_a = "Null", int RAM_a = 0, string processor_a = "Null", int battery_a = 0)
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


int main( )
{



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


PauseExitORContinue();


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




                    puts(" Please press a button to continue");
                    cin.get();/// all system /// C++ all system // platform
return 0;
}

