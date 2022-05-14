#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include<ctype.h>
#include <cstdlib>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <map>
#include <climit>

/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <unistd.h>
//#include <windows.h>
///#include <threads.h>
//#include <conio.h>
//#include <dos.h>
//#include <direct.h>
//#include <math.h>
//#include<ctype.h>
//#include <cstdlib>
//#include <cmath>
//#include <string>
//#include <iomanip>

void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
#define SHOW_SOURCE_CODE
#define SHOW_SOURCE_FILE_PATH

using namespace std;

int main(int argc, char* argv[])

{ ///  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");

clock_t tStart = clock();








    cout << "Hello world!" << endl;

    // Array and index into it.

    int myArray[] = {1,2,3,4,5};
    int i;


    // Initialise sum to zero for starting.

    int sum = 0;

    // Adding whole array will not work (though it would be nice).
    // Instead, go through array element by element.

    // j += yArray[];
    for (i = 0; i < 5; i++) {
        // Add element to sum and output results.

        sum += myArray[i];
        printf ("Adding %d to get %d\n", myArray[i], sum);
    }

    // Output final result.

    printf ("Final sum is: %d\n", sum);

    string str;
    string str2;
    cout<<"Enter your Name in one word \n"<<endl;
    cin>>str;
    cout<<"Welcome  \n"<< str << flush;

//    fflush(stdin);
//    fflush(stdout);

/*
fflush(stdin) − It is used to clear the input buffer memory. It is recommended to use before writing scanf statement.

fflush(stdout) − It is used for clearing the output buffer memory. It is recommended to use before printf statement.
The following should work:

cin.flush();
On some systems it's not available and then you can use:

cin.ignore(INT_MAX);
Both Windows and Linux define the behaviour of fflush() on an input stream,
 and even define it the same way (miracle of miracles).
The POSIX, C and C++ standards for fflush() do not define the behaviour,
but none of them prevent a system from defining it.
If you're coding for maximum portability,  avoid fflush(stdin);
if you're coding for platforms that define the behaviour, use it — but be aware that it is not portable
    portable code does not use fflush(stdin). Code that is tied to Microsoft's platform may use it and
    it may work as expected, but beware of the portability issues.
*/
/*
When cin.getline() reads from the input, there is a newline character left in the input stream,
 so it doesn't read your c-string. Use cin.ignore() before calling getline().
The extraction operations leave the trailing '\n' character in the stream. On the other hand, istream::getline() discards it. So when you call getline after an extraction operator, '\n' is the first character it encounters and it stops reading right there.

Put this after before getline call extraction:
cin.ignore()
Since you have not posted any code. I am going to take a guess.

A common problem while using getline with cin is getline does not ignore leading whitespace characters.

If getline is used after cin >>, the getline() sees this newline character as leading whitespace, and it just stops reading any further.

How to resolve it?

Call cin.ignore() before calling getline()

Or

make a dummy call getline() to consume the trailing newline character from the cin >>
after the line cin >> age ; there is still the newline character \n (because you pressed enter to input the value)
 in the input buffer, to fix this you add a line with cin.ignore(); after reading the int.
*/
    cout<<"\n Enter your Name in full \n"<< flush; /// or << endl;

    cin.ignore();

    getline(cin,str2);

    cout<<"\n Welcome  \n"<< str2 << endl;

    //DemoCompoundAssignment34.cpp
    int x;
    sum=10,x=5;
    sum+=x;
    cout<<sum<<endl;

    int fact=10,y=5;
    fact*=y;
    cout<<fact<<endl;
//DemoIncrementAndDecrementOperators36.cpp
    i=5;
    //int j;
    int j=i++;
    cout<<j<<" "<<i<<endl;

    int k=5,l;
    l=++k;
    cout<<l<<" "<<k<<endl;

    int a=5,b;
    b=2*++a + 2*a++;
    cout<<b<<" "<<a<<endl;;

    int c=5,d;
    d=2*c++ + 2*c++;
    cout<<d<<" "<<c<<endl;

        //Overflow38.cpp

            char aa=128;
    cout<<(int)aa<<endl;

    char bb=127;
    bb++;
    cout<<(int)bb<<endl;

    char cc=129;
    cout<<(int)cc<<endl;

    char dd=-128;
    dd--;
    cout<<(int)dd<<endl;

    int ee=32767; // maximum integer value.
    ee++;
    cout<<(int)ee<<endl;

 /* Bitwise operator
     char a=128;
    cout<<(int)a<<endl;

    char b=127;
    b++;
    cout<<(int)b<<endl;

    char c=129;
    cout<<(int)c<<endl;

    char d=-128;
    d--;
    cout<<(int)d<<endl;

    int e=32767; // maximum integer value.
    e++;
    cout<<(int)e<<endl;




    	/*
		_ _ _ _ _ _ _ _
	    1 6 3 1 8 4 2 1
		2 4 2 6
	    8
		<< shift left
		>> shift right
		&  and
		|  or
		^  xor
		~  not


	char c = 9;			// 000000000 0 0 0 1 0 0 1 = 9
						// 1 1 1 1 0 1 1 0
/*	char d = c << 2;	// 0 0 1 0 0 1 0 0 = 36
	cout << (int)d << endl;
	d = c >> 1;			// 0 0 0 0 0 1 0 0 = 4
	cout << (int)d << endl; */
	/*
		&
		1 & 1 = 1
		1 & 0 = 0
		0 & 1 = 0
		0 & 0 = 0
	*/

	/* d = c & 7;
	cout << (int)d << endl; */

	/*
	  1 | 1 = 1
	  0 | 1 = 1
	  1 | 0 = 1
	  0 | 0 = 0

	char d = c | 7;
	cout << (int)d << endl;
	/*
	  0 ^ 0 = 0
	  1 ^ 1 = 0
	  1 ^ 0 = 1
	  0 ^ 1 = 1

11001
00110
	d = c ^ 7;
	cout << (int)d << endl;
	/*
	~0 = 1
	~1 = 0

	short e = ~c;
	cout << e << endl;
*/
/*
 int aaa=11,bbb=7,ccc;
    ccc=aaa&bbb;
    cout<<ccc<<endl;

    int ddd=11,eee=7,fff;
    fff=ddd|eee;
    cout<<fff<<endl;

    int g=11,h=7;
    i=g^h;
    cout<<i<<endl;

    char j=5,k;
    k=j<<1;
    cout<<(int)k<<endl;

    char l=20,m;
    m=l>>1;
    cout<<(int)m<<endl;

    char x=5,y;
    y= ~ x;
    cout<<(int)y<<endl;
*/

/// FindingMaxOf2Nos46.cpp

/*	int x,y;
	cout<<"Enter 2 nos";
	cin>>x>>y;

	if(x>y)
	{
		cout<<"Maximum is"<<x;
    }
    else
	{
		cout<<"Maximum is"<<y;
	}*/
/// DemoConditionalStatement47.cpp

/*    int roll;
    cout<<"Enter your Roll Number."<<endl;
    cin>>roll;

    if(roll<1)
    {
        cout<<"Invalid Roll Number."<<endl;
    }
    else
    {
        cout<<"Valid Roll Number."<<endl;
    }*/

///Validation48.cpp

/*    int a,b,c;
    cout<<"Enter Two Numbers: "<<endl;
    cin>>a>>b;

    if(b==0)
    {
        cout<<"Division By Zero"<<endl;
    }
    else
    {
        c=a/b;
        cout<<c<<endl;
    }
    */

///FindingMaxOf3Nos54.cpp

 /*       int a,b,c;
    cout<<"Enter 3 no.s"<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<a<<endl;
    }
    else if(b>c)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
       */

   ///ShortCircuit60.cpp
 /*      	int a=10,b=5,i=5;

    if(a>b && ++i<=b)
    {

    }
    cout<<i<<endl;
    if(a<b || ++i<=b)
    {

    }
    cout<<i<<endl;*/

   /*   int a=10,b=5;

    if(true)
    {
        int c=a+b;
        cout<<c<<endl;
    }
    {
        int d=a-b;

        if(true)
        {
            cout<<d<<endl;
        }
    }

        if(int e=a*b)
        {
            cout<<e<<endl;
        }*/
//Loop Through an Array
//You can loop through the array elements with the for loop.
//
//The following example outputs all elements in the cars array:
//
//Example
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for (int i = 0; i < 4; i++) {
  cout << cars[i] << "\n";
}
//The following example outputs the index of each element together with its value:
//
//Example
string cars2[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for (int i = 0; i < 4; i++) {
  cout << i << ": " << cars2[i] << "\n";
}
int A[]={3};
int B[3]={4};
int C[4];
double D[5]={0,1,-2,3.99,4};

cout<<"A = "<<A<<endl;
cout<<"A[0] = "<<A[0]<<endl;
cout<<"A[2] = "<<A[2]<<endl;

cout<<"B = "<<B<<endl;
cout<<"B[0] = "<<B[0]<<endl;
cout<<"B[2] = "<<B[2]<<endl;
cout<<"B[3] = "<<B[3]<<endl;
cout<<"C = "<<C<<endl;
cout<<"C[0] = "<<C[0]<<endl;
cout<<"C[2] = "<<C[2]<<endl;

cout<<"D = "<<D<<endl;
cout<<"D[0] = "<<D[0]<<endl;
cout<<"D[2] = "<<D[2]<<endl;
cout<<"D[3] = "<<D[3]<<endl;

 int aaa[] = {0, 1, 2, 3, 4, 5};
    for (int n : aaa)
        std::cout << n << ' ';

    std::cout << '\n';

    // Just running a loop for every array
    // element
    for (int nnn : aaa)
        std::cout << "In loop" << ' ';

    std::cout << '\n';

    // Printing string characters
    std::string str123 = "Geeks";  /// String is array of char with \n at last
    for (char cccc : str123)
        std::cout << cccc << ' ';

    std::cout << '\n';

  // Iterating over whole array
    std::vector<int> v = {0, 1, 2, 3, 4, 5};
    for (auto i : v)  /// auto will automatically pick up the variable type.
        std::cout << i << ' ';

    std::cout << '\n';

    // the initializer may be a braced-init-list
        for (int n : {0, 1, 2, 3, 4, 5})
        {
            std::cout << n << ' ';
        }
         std::cout << '\n';
    for (int n : {0, 1, 2, 3, 4, 5})
        {
            std::cout << ++n << ' '; /// changing copy value of n
        }
         std::cout << '\n';

     for (int n : {0, 1, 2, 3, 4, 5})
        {
            std::cout << n++ << ' ';  /// N++ will not change the declared initialized value
        }
    std::cout << '\n';
int ARRAY[] = {0, 1, 2, 3, 4, 5};
    for (int &n : ARRAY) /// &n is reference to change value of n
        {
            std::cout << ++n << ' '; /// ++n will not change the declared initialized value
        }
         std::cout << '\n';
              for (int n : ARRAY)
        {
            std::cout << n << ' ';
        }
    std::cout << '\n';

int ARRAY2[] = {0, 1, 2, 3, 4, 5};
     for (int &n2 : ARRAY2) /// &n is reference to change value of n
        {
            std::cout << n2++ << ' '; /// changing real value of n
        }
    std::cout << '\n';
     for (int n2 : ARRAY2)
        {
            std::cout << n2 << ' ';
        }
    std::cout << '\n';
      // Printing keys and values of a map
    std::map <int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
    for (auto i : MAP)
        std::cout << '{' << i.first << ", "
                  << i.second << "}\n";

/// cout<<A<<'\n'<<B<<'\n'<<C[2]<<'\n'<<C<<'\n'<<D<<'\n'<<D[]<<'\n'<<D[3]<<endl;

int arr[7] = {25, 63, 74, 69, 81, 65, 68};

   for (int i=0; i < 7; i++) {
      cout << arr[i] << "  ";
   }

   std::cout << '\n';

double arr2[7] = {25.55, 63, 74.75, -69, 81, 65, 68};
   for (auto i=0; i < 7; i++) {
      cout << arr2[i] << "  ";
   }


 /// Pointers,   C++ Programming -Beginner to Advance- Deep Dive in C++
/// Pointers

int x =10;
/// integer Variable x holds value 10, address of x is 200/201 (two bites assumed)

int *P;
P= &x;

declaration int *p;   /// pointer variable
Initialization p = &x; /// address of x
dereferencing cout << *p ; ///value of x , that is hold by p

cout < x ; ///== 10
/// Variable x holds value 10, address of x is 200/201 (two bites assumed)300/301
cout <<&x; /// address of x ==200

cout <<p; /// value of p, address of x /// == 200
/// Variable p holds value 200 as address of x is 200/201 (two bites assumed)300/301
cout <<&p ; /// address of pointer variable p == 300
/// int pointer p holds the address of x at the memory address 300/301 (two bites assumed)
cout <<* p; /// == 10 /// Value stored at address 200 , *p is called dereferencing


/// DemoPointers107.cpp


int a=10;
	int *p=&a;

/// or first int *p; only and then p = &a;

	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	cout<<&p<<endl;
	cout<<*p<<endl;

///PointerArithmitic112.cpp with arrays

 int A[5]={2,4,6,8,10};
    int *p = A; /// A is already the address of A[0], the first element of the array so &A is not needed
    int*q=&A[4]; /// &A[4] is an address different than A
    cout<<*p<<endl;
    cout<<endl;

    p++;
    cout<<*p<<endl;
    cout<<endl;

    p--;
    cout<<*p<<endl;
    cout<<endl;
    cout<<p<<endl;
    cout<<p+2<<endl;
    cout<<endl;
    cout<<*p<<endl;
    cout<<*(p+2)<<endl;
    cout<<endl;
    cout<<q-p<<endl;
    cout<<p-q<<endl;

cout<<p<<endl;
    for (i=0; i<5; i++)
    {
        cout << << A << endl;
        cout << A[i] << endl;
        cout << i[A] << endl;
        cout << (A+i) << endl;
        cout <<  A+i << endl;
        cout << *(A+i) << endl;
        cout << *(p+i) << endl;
        cout <<  *p+i << endl;
        cout <<  *(p+i) << endl;
        p++
    }
cout<<p<<endl;



    ///DynamicAllocation110.cpp


    int size;
	cout<<"Enter Number of Elements";
	cin>>size;
	int A[size];

	cout<<sizeof A<<endl;


   /// int *p;   is a stack memory allocation
   /// p = new int[5]; is a heap memory allocation
   /// int *p = new int[5]; is a heap memory allocation

   /// delete []p; to deallocate heap memory.
   /// after delete []p; then p = NULL; to release memory

   /// but p = nullptr; is best for C++

  /// p = NULL; or p = nullptr; should not be done before delete []p;

     A[2] = 15; ///  int A[5]={2,4,6,8,10};
     p[2] = 71;
     p[1] = 17;
     p[3] = 7; /// dynamic heap memory array int *p = new int[5];

    int *p = new int[5];
     cout<< A[2] << endl;
     cout<< p[2] << endl;
     cout<< p[1] << endl;
     cout<< p[3] << endl;


    int size;
	cout<<"Enter Number of Elements";
	cin>>size;
	int *p = new int[size];

	cout<<sizeof p<<endl;

    delete []p;   /// to prevent memory leak
    cout<<"Enter new Number of Elements";
	cin>>size;
	p = new int[size];



     delete []p;
     p = nullptr;

   float putsTime1 = ((double)(clock() - tStart))/CLOCKS_PER_SEC;
   printf(" \n Time taken: %.5f s\n", putsTime1);






#ifdef SHOW_SOURCE_CODE
        // We can append this code to any C program
    // such that it prints its source code with line number.

unsigned long ln = 0;
 FILE *fp = fopen(__FILE__, "r");
int prev = '\n';
int c;  // Use int here, not char
while((c=getc(fp))!=EOF) {
  if (prev == '\n'){
    printf("%05lu ", ++ln);
  }
  putchar(c);
  prev = c;
}
if (prev != '\n') {
  putchar('\n');  // print a \n for input that lacks a final \n
}
printf("lines num: %lu\n", ln);

    fclose(fp);
          // We can append this code to any C program
    // such that it prints its source code.

#endif

#ifdef SHOW_SOURCE_FILE_PATH

       // Prints location of C this C code.
   printf("%s \n",__FILE__);

#endif



/// clear();  /// clearing console window

///system("@cls||clear"); /// or system("cls||clear");

    /// cin.get()/// all system /// C++ all system // platform

    getch();

    cin.get();
    return 0;

    /// system("pause>null"); /// for windows only  /// For debugging only.

}
