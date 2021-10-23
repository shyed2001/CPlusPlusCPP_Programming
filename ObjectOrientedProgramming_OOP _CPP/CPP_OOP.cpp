
#include<iostream>
#include <string.h>
#include<string>
#include<cstdlib> /// exit()
#include<conio.h> /// C programming header _getch();
/// for linux #include <curses.h> ///erase();

using namespace std;


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

void area()
{
   cout<< "Area Of Rectangle " << length * breadth<<endl;
}



void show( )
{ cout<< "Length = " << length<< endl;
cout << "Breadth = " << breadth<< endl;  }

};



class cuboid : public rectangle
{

public:
int height;

void volume()
{
cout << "Volume Of Cuboid " << length*breadth*height;
}

void display ( )
{ cout<< "Heitht ="  << height<< endl; }
};



class base
{
public:
base( )
{ cout << "Default Of Base Class \n"; }

base( int b )
{ cout << "Parameterized Of Base Class \n" << b << endl;}

};


class derived: public base
{
    // Empty
};


class derived2: public base
{
public:
derived2()
{ cout << "Default Of Derived Class \n"<<endl; }
derived2(int d)
{ cout << "Parameterized Of Derived Class \n" << d<< endl; }
};


class base3
{

public:
base3()

{ cout << "Default of Base Class \n"; }
base3( int b_arg )
{ cout << "Para of Base Class \n" << b_arg;}
};

class derived3: public base3
{
    public:
derived3(): base3() /// derived class default constructor is calling base class default constructor

{ cout << "Default of derived Class \n"; }

derived3(int d_arg ): base3(d_arg ) /// derived class parameterized constructor is calling base class parameterized constructor
{ cout << "Para of derived Class \n"; }

};


/// Overriding Member Function
class base4
{
public:
void Msg()
{
    cout << "Base Class \n" ;
}

void Message()
{
    cout << "Base Class Message\n" ;
}




};



/// Overriding Member Function
class derived4: public base4
{
public:
void Msg()
{
    cout << "Derived Class \n";
}

void Message()
{
    cout << "Derived Class Message\n";

    base4::Message(); /// calling
}


};


class basePoly
{
    public:
void show()
{
    cout << "Base show";
}
virtual ~basePoly()  /// Virtual destructor
{
    puts( " Base Class Destroyed" );
}
virtual void Show()
{
    cout << "Base Show";
}

};

class Derv1: public basePoly
{
   public:
void show()
{
    cout << "Derived1";
}

void Show()
{
    cout << "Derived1Show";
}

};


class Derv2: public basePoly
{
    public:
void show()
{
    cout << "Derived2";
}

void Show()
{
    cout << "Derived2Show";
}
~Derv2()    /// /// destructors
{
    puts( " Derv2 Class Destroyed" );
}
};


class Derv3: public basePoly
{
   public:
void show()
{
    cout << "Derived3";
}
~Derv3() // /// destructors
{
    puts( " Derv3 Class Destroyed" );
}
void Show()
{
    cout << "Derived3Show";
}

};


/// Object Oriented Programming 0OP in C+±

class personVF
{
public:
virtual void give()
{cout << "Bun";}
};

class boy:public personVF
{
public:
void give()
{ cout << "Brown Bun"; }
};

class girl: public personVF
{
public:
void give( )
{
    cout << "Pink Bun";
}

};

///Abstract Class

class personAC /// Abstract class without any object
{
    public:
virtual void give( ) = 0;
/// Pure Virtual Function
};


class boy2: public personAC
{
public:
void give( )
{cout << "Brown Bun";}
};

class girl2: public personAC
{
public:
void give( )
{ cout << "Pink Bun";}

};



/// puts(" object Oriented Programming OOP in C++, Friend Function ");

class Alpha
{
private:
int a1;
public:
Alpha( int arg = 0)
{a1 = arg; }
friend void Fun();
};

class Beta
{
    private:
int b1;
public:
Beta( int arg = 0)
{ b1 = arg; }
friend void Fun();
};

void Fun();


/// Friend Function using Operator Overloading in C++


class UnaryFriend
{
     int a=10;
     int b=20;
     int c=30;
     public:
         void getvalues()
         {
              cout<<"Values of A, B & C\n";
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
         }
         void show()
         {
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
         }
         void friend operator-(UnaryFriend &x);      //Pass by reference
};
void operator-(UnaryFriend &x);

/// Friend Function using Operator Overloading in C++

class person
{

private:
int weight;

public:

person(int w = 0)
{
    weight = w;
}

friend bool operator > (person x, person y); /// /// comparison Operator Overloading in C++
friend bool operator < (person x, person y);/// comparison Operator Overloading in C++
};


bool operator > (person x, person y);
bool operator < (person x, person y);

/// friend function


class Alphaff
{
    private:
int a1;
public:

Alphaff( int arg = 0)
{ a1 = arg; }
friend class Betaff;
};

class Betaff
{
  private:
int b1;
public:

Betaff( int arg = 0)
{ b1 = arg; }

int sum()
{
    Alphaff alpha_obj (3);
int sum = alpha_obj.a1 + b1;
return sum;
}


};

/// static member

class Alphasm
{
    private:
int a;
int b;
public:

Alphasm( )
{
    a = 5;
b = 5;
stat ++;
}
static int stat;
static int stat2;
static int getStat2( ) /// static member function
{stat2 ++ ;
return stat2 ; }

};


int Alphasm :: stat = 0;

int Alphasm :: stat2 = 0;

void clearscreen(void);










int main( )
{
OS = getOS(); /// OS==1 is windows.

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

cube.area();
cube.volume();



PausedExitORContinue(" Inheritance & Constructors ");
clearscreen();
cout<< "\n NOTE:- If we don't specify a constructor, then derived class will use appropriate constructor from baseclass. \n \
( Applicable only to Default Constructor )"<< endl;


derived d1;

/// derived d2(9); this will give errors
puts("\n NOTE:- If we don't specify a constructor, then derived class will use appropriate constructor from base class. \n \
( Applicable only to Default Constructor )");



derived2 d11;  /// calling default constructor

puts(" NOTE:- Default constructor of base class is always called. 1st Default Constructor Of base class , then Default Constructor of derived class is called.");

derived2 d111(19); /// calling parameterized constructor


puts(" NOTE:- 2nd Parametrized Constructor of base class is not called when Parametrized Constructor is present in derived class. \n \
     Default constructor of base class is always called. ");



derived3 d13;
derived3 d23( 9 );



puts( "Overriding Member Function" );

/// Overriding Member Function
puts( " NOTE:- \n \
b.Msg( ) -- > Base Class \n \
c.Msg( ) -> Derived Class" );

base4 b4;
b4.Msg();
derived4 c4;
c4.Msg();

puts( " NOTE:- \n \
Redefining functionality of BASE \n \
class into DERIVED class, then if we \n \
create OBJECT of DERIVED class" );


puts( " NOTE:- Derived class object would call, function in derived class, \n \
     if same function exists in both classes." );



     derived4 c44;
     c44.Message();

/*
isA relationship

class Suzuki
{
public:
void chechis( )
{.............}
void engine( )
{.............}
void suspension ( )
{.............}
void transmission( )
{.............}
void doors( )
{.............}
};

class DODO: public Suzuki
{
void chechis( )
{ ....... modify..............}

void doors( )
{.............modify..............}
void ABS ( ) // added new feature
{ ...... modify. ...... ..}
};

DODO isA Car
Car ---> myCar

isA = Inheritance

isA
isA relationship is based on
Inheritance.

isA relationship expose all
public data of base classes.
isA relationship is static
binding ( compile time ).

isA relationship used when
can actually inherit .
( person
teacher )
(person --------
dress )

*/

/*
hasA Relationship

class Suzuki
{
public:
void chechis( )
{.............}
void suspension ( )
{.............}
void transmission( )
{.............}
void doors( )
{.............}
};


class Antoinette
{
public:
void V8_Engine( )
{.............}
};

class DODO
{
private:
Suzuki design_obj;
Antoinette anto_obj;

public:
void addChechis()
{ design_obj.chechis( ); }
void addEngine( )
{ anto_obj.V8_Engine( ); }
};


hasA = Object

hasA

hasA relationship is based on
Objects.

hasA relationship, use public
data of derived class.
hasA relationship is dynamic
binding ( run time ).

hasA relationship use when

you can't inherit something.

*/

puts("ways of inheritance ");


/*

Ways Of Inheritance

class Parent

class child : public Parent

class grandchild : public child

Child AND grandchild would not be

able to access both Private.

Child AND grandchild would be able

to access both Protected AND public

Protected would be inherited as Protected
AND
Public would be inherited as Public in
Child AND Grandchild



class Parent
class child : protected Parent
class grandchild : protected child

Protected Inheritance:-
Protected AND Public in Parent class
would be inherited as Protected
in Child And GrandChild classes.


*/

puts("Polymorphism C++ Programming");


/*

Polymorphism
1. Base Class Pointer And Derived class object

2. Abstract Class

3. Virtual Function


*/
puts("Base Class Pointer can only point to A Derived class object");
puts("Base Class Pointer (can only access the base class features) And Derived class object can not be used by base class pointers");

/*
class basicCar
{
public:

void body( );
void door( );
void windows( );
void tyres( );
};


class advCar: public basicCar

{
public:
void ABS( );
void PS( );
void EngineV8( );
void AT( );
};


basicCar *ptr;
ptr = new advCar( );

ptr->body( );
ptr->doors( );
ptr->windows( );
ptr->types( );
*/

puts( "Virtual function" );

/*
Virtual Function
Virtual Function means fun.
existing in class but can't be
used.

Virtual means existing in
appearance but not in
reality

Program that appears to be calling a
function of one class may in reality be
calling a function of different class .




*/

/*

*/


/*

*/

basePoly *ptr;

Derv1 dv1;
//Derv2 dv2;


ptr = &dv1;
ptr->show();
ptr->Show();
puts( " " );

ptr =new Derv2;  /// dynamic memory pointer
ptr->show();
ptr->Show();
puts( " " );
delete ptr;

ptr =new Derv3; /// dynamic memory pointer
ptr->show();
ptr->Show();

delete ptr; /// calling destructors


puts( " Why Virtual Function " );

puts(" Binding:- Compiler deferr the decision untill, the program is running. \n \
And at runtime when it come to know which class is pointed by PTR, then appropriate function would be called. \n \
This is called Dynamic Binding / Late Binding ");



boy b1;
girl g1;

personVF *ptrs = NULL;
ptrs = &b1;
ptrs->give();

ptrs = &g1;
ptrs->give();

/*
Virtual function is hidden

Virtual means existing
in appearance but not
in reality

Virtual Function

virtual void function ( )

we have made, base
class function virtual,
so that only derived
class functionality gets
called

Why virtual function
When we want to
ensure only the latest
functionality get called

Why virtual function

Late binding, compiler

defter the decision

*/


puts( " Define:- Abstract class is used when we never want to instantiate / created object of BASE class. \n \
Define:- Abstract class exists only to act as parent of DERIVED CLASS, it has /// Pure Virtual Function PVF does not have a body." );


/*

///Object Oriented Programming OOP in C++ | C++ Tutorial Beginners

*/

boy2 b12;
girl2 g12;
personAC *ptr3 = NULL;
ptr3 = &b12;
ptr3->give();
ptr3 = &g12;
ptr3->give();


puts( " Poly means many, Polymorphism means something existing in more than one form. " );



puts( " \
Polymorphism -->1. Compile Time --> 1.1 Operator Overloading \n \
                             --> 1.2 Function Overloading \n \
Polymorphism -->2. Run Time --> 2.1 Function Overriding \n \
                            --> 2.2 Virtual Function");


puts("\n Virtual Destructor clear all the base and derived classes ");


puts("\n Fried Functions");

puts("\n Fried Functions in CPP C++ can access all the public protected private data and functions");



puts(" \n object Oriented Programming OOP in C++, Friend Function ");

Fun();

puts( " \n NOTE:- Friend function connecting two class or more( act as bridge )." );



puts( " \n Friend Function using Operator Overloading in C++ \n  \
Friend function using operator overloading offers better flexibility to the class. \n  \
These functions are not a members of the class and they do not have 'this' pointer.\n  \
When you overload a unary operator you have to pass one argument. \n  \
When you overload a binary operator you have to pass two arguments. \n  \
Friend function can access private members of a class directly. \n  \
     Syntax: \n  \
friend return-type operator operator-symbol (Variable 1, Varibale2)\n  \
{     //Statements;}\n  \
      " );



puts( " \n  " );

     UnaryFriend x1;
     x1.getvalues();
     cout<<"Before Overloading\n";
     x1.show();
     cout<<"After Overloading \n";
     -x1;
      x1.show();

      /*
      In the above program, operator – is overloaded using friend function.
       The operator() function is defined as a Friend function. The statement -x1 invokes the operator() function.
       The object x1 is created of class UnaryFriend. The object itself acts as a source and destination object.
       This can be accomplished by sending reference of an object. The object x1 is a reference of object x.
        The values of object x1 are replaced by itself by applying negation.

      */


      /// Friend Function using Operator Overloading in C++

      int w1, w2;
cout << "Enter weight of Jon " << endl;
cin >> w1;

cout << "Enter weight of Rick " << endl;
cin >> w2;
person jon(w1) ;

person rick(w2) ;
if (jon > rick)
{
cout << "Jon is heavy" << endl;
}
else if (jon < rick)
{
    cout << "Rick is heavy"<< endl;

}

puts( " Friend Class." );
puts( " Friend Class Can Access and use all private protected public features and functionalities of each other." );


Betaff beta_obj2(7);
int sumff = beta_obj2.sum();

cout << "Sum = " <<sumff<< endl;
cout << "Sum = " <<beta_obj2.sum()<< endl;
puts( " NOTE:-Now all member functions of Beta class can access private data of Alpha." );




puts( "\n NOTE:- Static member ." );


Alphasm a1;
Alphasm a2; /// two objects
cout << a1.stat;  puts( "  = a1.stat " );
 cout << a2.stat; puts( "  = a2.stat " );
cout << Alphasm::stat; puts( "  = Alpha::stat " );


puts( " NOTE:- Static member would be allocated memory only once." );

puts( " NOTE:- NOTE:- And that memory is shared by both / all the objects.." );

puts( " NOTE:- NOTE:- NOTE:- Static Data members belong a class & common to all objects..." );


puts( "\n NOTE:- Static member function ." );

puts( " " );
puts( " NOTE:- Static member can only access static members " );

puts( " NOTE:- Static member can only access static members " );
//Object Oriented Programming OOP in C++ | C++ Tutorial Beginners
//Static Member Function
cout << Alphasm::getStat2()<<endl;
Alphasm a11;
Alphasm a21;
cout << Alphasm :: getStat2( )<<endl;
cout << a11.getStat2( )<<endl;
cout << a21.getStat2( )<<endl;
/// Static member function

puts( " " );
puts( " End of Static member function " );

puts( " Mini Project ( ATM ) " );



puts( " Mini Project ( ATM ) \n \
Write a program showing ATM functionalities using OOP's \n \
1. Check Balance \n \
2. Cash WithDraw \n \
3. User Details \n \
4. Update Mobile No. \n \
" );


puts( " Welcome to ATM Machine" );


puts( " Please enter your account number:- " );












puts( " " );


puts( " " );
puts( " " );








 puts("\n Please press a button to continue");
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

void Fun()
{
Alpha a(8);
Beta b(2);
int x = a.a1 + b.b1;

cout << "Sum = " <<x<< endl;

}

void operator-(UnaryFriend &x)
{
     x.a = -x.a;     //Object name must be used as it is a friend function
     x.b = -x.b;
     x.c = -x.c;
}
/// Friend Function using Operator Overloading in C++

bool operator< (person x, person y)
{
    return x. weight < y.weight;
}

bool operator> (person x, person y)
{

return x. weight > y. weight;
}

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
