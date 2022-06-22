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
#include <string.h>
#include <string>
#include <cstring>
#include <iomanip>
#include <vector>
#include <map>
#include <climits>

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

void clear()
{
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


/*program for function overloading sum of two integers

*/
int sum(int a,int b)
{
	return a+b;
}
float sum(float a,float b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a,b,c;
}



/*program for function templates

*/
template<class t>
t maxim(t a,t b)
{
       return a>b?a:b;
/*
one line if statement c++
x = condition ? expression1 : expression2

// Example:
double x = (1 > 0) ? 10 : 20; // put any value
Short Hand if-else Methods
There is Short Hand format to code if statements as below


variable = (condition) ? true_expression : false_expression;

for example same example above can be written as,


int a= 5;
string result = (a>3) ? "greater than 3" : "not greater than 3";
std::cout << result;

You can use the if-else shorthand in your program instead of the if-else statement by following the syntax given below:

variable = (condition)? expressionTrue: expressionFalse;
In the above syntax, question marks are part of the code and are used to check whether the condition is true or not. If the condition is true the program will execute the first expression right after the question mark, else the program will execute the second expression.
*/
}



int main(int argc, char* argv[])

{
    ///  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");

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
    for (i = 0; i < 5; i++)
    {
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

    getline(cin,str2);   /// for string

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

    int cC=5,d;
    d=2*cC++ + 2*cC++;
    cout<<d<<" "<<cC<<endl;

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
    	}
    */
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
        }
    */

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
         }
    */
//Loop Through an Array
//You can loop through the array elements with the for loop.
//
//The following example outputs all elements in the cars array:
//
//Example
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 4; i++)
    {
        cout << cars[i] << "\n";
    }
//The following example outputs the index of each element together with its value:
//
//Example
    string cars2[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 4; i++)
    {
        cout << i << ": " << cars2[i] << "\n";
    }
    int A[]= {3};
    int B[3]= {4};
    int C[4];
    double D[5]= {0,1,-2,3.99,4};

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
    for (int n :
            {
                0, 1, 2, 3, 4, 5
            })
    {
        std::cout << n << ' ';
    }
    std::cout << '\n';
    for (int n :
            {
                0, 1, 2, 3, 4, 5
            })
    {
        std::cout << ++n << ' '; /// changing copy value of n
    }
    std::cout << '\n';

    for (int n :
            {
                0, 1, 2, 3, 4, 5
            })
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

    for (int i=0; i < 7; i++)
    {
        cout << arr[i] << "  ";
    }

    std::cout << '\n';

    double arr2[7] = {25.55, 63, 74.75, -69, 81, 65, 68};
    for (auto i=0; i < 7; i++)
    {
        cout << arr2[i] << "  ";
    }


/// Pointers,   C++ Programming -Beginner to Advance- Deep Dive in C++
/// Pointers

    x =10;
/// integer Variable x holds value 10, address of x is 200/201 (two bites assumed)

    int *P;
    P= &x;

///declaration
    int *p;   /// pointer variable
///Initialization
    p = &x; /// address of x
//dereferencing
    cout << *p ; ///value of x , that is hold by p

    cout << x ; ///== 10
/// Variable x holds value 10, address of x is 200/201 (two bites assumed)300/301
    cout <<&x; /// address of x ==200

    cout <<p; /// value of p, address of x /// == 200
/// Variable p holds value 200 as address of x is 200/201 (two bites assumed)300/301
    cout <<&p ; /// address of pointer variable p == 300
/// int pointer p holds the address of x at the memory address 300/301 (two bites assumed)
    cout <<* p; /// == 10 /// Value stored at address 200 , *p is called dereferencing


/// DemoPointers107.cpp


    int  AnInt =10;
    int *pointer = &AnInt ;

/// or first int *pointer; only  and then pointer = & AnInt ;

    cout<< AnInt <<endl;
    cout<<& AnInt <<endl;
    cout<<pointer<<endl;
    cout<<&pointer<<endl;
    cout<<*pointer<<endl;

///PointerArithmitic112.cpp with arrays

    int  AnIntArray[5]= {2,4,6,8,10};
    int *POINTER =  AnIntArray; ///  AnIntArray is already the address of  AnIntArray[0], the first element of the array so & AnIntArray is not needed
    int*q=& AnIntArray[4]; /// & AnIntArray[4] is an address different than  AnIntArray
    cout<<*POINTER<<endl;
    cout<<endl;

    POINTER++;
    cout<<*POINTER<<endl;
    cout<<endl;

    POINTER--;
    cout<<*POINTER<<endl;
    cout<<endl;
    cout<<POINTER<<endl;
    cout<<POINTER+2<<endl;
    cout<<endl;
    cout<<*POINTER<<endl;
    cout<<*(POINTER+2)<<endl;
    cout<<endl;
    cout<<q-POINTER<<endl;
    cout<<POINTER-q<<endl;

    cout<<POINTER<<endl;
    for (i=0; i<5; i++)
    {
        cout << AnIntArray << endl;
        cout <<  AnIntArray[i] << endl;
        cout << i[ AnIntArray] << endl;
        cout << ( AnIntArray+i) << endl;
        cout <<   AnIntArray+i << endl;
        cout << *( AnIntArray+i) << endl;
        cout << *(POINTER+i) << endl;
        cout <<  *POINTER+i << endl;
        cout <<  *(POINTER+i) << endl;
        POINTER++;
    }
    cout<<POINTER<<endl;


    int box = 5;
    int * ptr = &box;
    int ** dPtr = &ptr;
    cout << "box holds: " << box << endl;
    cout << "box lives at: " << &box << endl;
    cout<< "ptr points to address: " << ptr << endl;

    cout<< "The thing that ptr points to has the value: " << *ptr << endl;
    cout <<"ptr lives at: " <<&ptr << endl;
    cout <<"dPtr points to: " << dPtr << endl;

    cout << "The thing that dptr points to has the value: " << *dPtr << endl;
    cout << "The ptr that dPtr points to, points to an int with the value: " << **dPtr << endl;
    cout << "dPtr lives at: " << &dPtr << endl;

    cout << "\n\nThing:       dPtr                    ptr                    box \n";


    cout << "Values:     " << dptr << " ------->   " << dPtr << "  ------->  " << box << endl;

    cout << "Addresses:   " << &dptr << "        " << &dPtr << "               " << &box << endl;




    ///DynamicAllocation110.cpp


    int size;
    cout<<"Enter Number of Elements";
    cin>>size;
    int  AnIntArray2[size];

    cout<<sizeof  AnIntArray2<<endl;


    /// int *POINTER;   is a stack memory allocation
    /// POINTER = new int[5]; is a heap POINTER memory allocation
    /// int *POINTER = new int[5]; is a heap memory allocation

    /// delete []POINTER; to deallocate heap memory.
    /// after delete []POINTER; then POINTER = NULL; to release memory

    /// but POINTER = nullptr; is best for C++

    /// POINTER = NULL; or POINTER = nullptr; should not be done before delete []POINTER;

    AnIntArray[2] = 15; ///  int  AnIntArray[5]={2,4,6,8,10};
    POINTER[2] = 71;
    POINTER[1] = 17;
    POINTER[3] = 7; /// dynamic heap memory array int *POINTER = new int[5];

    int *DynamicPointer = new int[5];
    cout<<  AnIntArray2[2] << endl;
    cout<<  AnIntArray[2] << endl;
    cout<< DynamicPointer[2] << endl;
    cout<< DynamicPointer[1] << endl;
    cout<< DynamicPointer[3] << endl;


    int Arraysize;
    cout<<"Enter Number of Elements";
    cin>>Arraysize;
    int *DynamicPointertwo = new int[Arraysize];

    cout<<sizeof DynamicPointer<<endl;

    delete []DynamicPointertwo;   /// to prevent memory leak
    cout<<"Enter new Number of Elements";
    cin>>Arraysize;
    int *DynamicArrayPointerTwo = new int[Arraysize];


    delete []DynamicArrayPointerTwo;
    DynamicArrayPointerTwo= nullptr;


    /// Declaring and Initializing String
/// have to include string.h/cstring
/// '\0' is string delimiter and or Null character to mark the end of string


    char Charx ='A'; /// only a A

    char S[10]= "Hello"; /// Hello\0 this is called string literal , indexed 0 1 2 3 4 5 6 7 8 9

    char Str[]="Hello"; /// Hello\0

    char S1[]= {'H','e','l','l','o',' ','a', 'n', 'd', ' ', 'H', 'i', '\0'};  /// Hello and hi\0

    char S2[]= {'H','e','l','l','o', '\0','a', 'n', 'd', ' ', 'H', 'i'} ; /// only Hello will be printed, '\0' indicates end of string or end of char array

    char S3[] = {65,66,67,68,'\0'}; /// ABCD\0
    char S4[] = {65,66,67,68,'\0', 69,70}; /// only ABCD\0
    char S5[] = {65,66,67,68, 0, 69,70}; /// only ABCD\0, 0 also means null char '\0'
    char *SPointer = "Hello"; /// Hello\0

    string s = "Hello";

    delete []SPointer;

/// Reading and Printing String
/// Reading and Printing String


    char name[20];
    cout<<"Enter your name"<< endl;
    cin >> name;
    char *StrPtr;
    char secondname[50];
    cout<<"Enter your name"<< endl;
    cin.get(name,50);
/// get function will not detect the enter input, the enter will be picked up by the next get or getline function.
///Put this after before getline call extraction:
    cin.ignore();
/// or
    cout<<"Enter your name again"<< endl;

    cin.getline(StrPtr,50);
/// cin.getline() does not require cin.ignore(), because cin.getline() detects enter input
    cin.getline(secondname,50);


    cout<< strlen(name) <<"string length == strlen(s) =  "<<endl;  //string length

    cout<< strlen(StrPtr) <<"string length == strlen(StrPtr) =  "<<endl;  //string length

    cout<< strlen(secondname) <<"string length == strlen(secondname) =  "<<endl;  //string length

    /*

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

        cout<<"\n Enter your Name in full \n"<< flush; /// or << endl;

        cin.ignore();

        getline(cin,str2);   /// for string

        cout<<"\n Welcome  \n"<< str2 << endl;

    */
/// Strings
/// string concatination

    char s1[20]="Good";
    char s2[10]="Morning";
    char s3[20]="Nice";
    char s4[10]="Day";
    char s5[10]=" ";
    char s6[10];
/// strcat (destination, source);
    strcat (s1, s2);
    cout<< s1 <<endl; /// destination

/// strncat (destination, source);

    strncat (s3, s4, 3);  /// concatenating joining two letters at home but only 3 letters
    cout<< s3 <<endl;

    strcpy(s5, s2); /// copying

/// strcpy(destination, source);

    cout << s5 << endl;

    strncpy(s6, s4, 2); /// copying two letters at home but only 2 letters

    cout << s6 << endl;



    char mainstring[10]="Nice Day";
    char substring[10]="Nice";
    char substr1[5]="Ni";
    char substr2[5]="H";

/// find sub string in the main string

    cout<< strstr(mainstring,substring)<< endl;

    cout<< strstr(mainstring,substr1)<< endl;

    if (strstr(mainstring,substr2)!=NULL)
        cout<< strstr(mainstring,substr1)<< endl;
    else
        cout<< "Not Found"<< endl;

    char CHAR1= 'y';

/// strchr(mainstr,char)

    cout<< strchr(mainstring,CHAR1)<< endl;

    cout<< strchr(mainstring,'D')<< endl;

/// strrchr(mainstr,char) -- finds from right hand side

    cout<< strrchr(mainstring,CHAR1)<< endl;

    cout<< strrchr(mainstring,'D')<< endl;




/// strcmp() https://www.bing.com/search?q=strcmp+in+C%2B%2B&form=ANNTH1&refig=d5d2dfb22c4d48269065f8b67db90c99

    /*
    strcmp() in C/C++
    Difficulty Level : Easy
    Last Updated : 09 Jan, 2019
    strcmp() is a built-in library function and is declared in <string.h> header file. This function takes two strings as arguments and compare these two strings lexicographically.

    Syntax::

    int strcmp(const char *leftStr, const char *rightStr );
    In the above prototype, function srtcmp takes two strings as parameters and returns an integer value based on the comparison of strings.

    strcmp() compares the two strings lexicographically means it starts comparison character by character starting from the first character until the characters in both strings are equal or a NULL character is encountered.
    If first character in both strings are equal, then this function will check the second character, if this is also equal then it will check the third and so on
    This process will be continued until a character in either string is NULL or the characters are unequal.
    What does strcmp() return?

    This function can return three different integer values based on the comparison:

    Zero ( 0 ): A value equal to zero when both strings are found to be identical. That is, That is, All of the characters in both strings are same.
    All characters of strings are same
    // C program to illustrate
    // strcmp() function
    #include<stdio.h>
    #include<string.h>

    int main()
    {

        char leftStr[] = "g f g";
        char rightStr[] = "g f g";

        // Using strcmp()
        int res = strcmp(leftStr, rightStr);

        if (res==0)
            printf("Strings are equal");
        else
            printf("Strings are unequal");

        printf("\nValue returned by strcmp() is:  %d" , res);
        return 0;
    }
    Output:

    Strings are equal
    Value returned by strcmp() is:  0
    Greater than zero ( >0 ): A value greater than zero is returned when the first not matching character in leftStr have the greater ASCII value than the corresponding character in rightStr or we can also say
    If character in leftStr is lexicographically
    after the character of rightStr
    // C program to illustrate
    // strcmp() function
    #include<stdio.h>
    #include<string.h>
    int main()
    {
        // z has greater ASCII value than g
        char leftStr[] = "zfz";
        char rightStr[] = "gfg";

        int res = strcmp(leftStr, rightStr);

        if (res==0)
            printf("Strings are equal");
        else
            printf("Strings are unequal");

        printf("\nValue of result: %d" , res);

        return 0;
    }
    Output:

    Strings are unequal
    Value returned by strcmp() is:  19
    Less than Zero ( <0 ): A value less than zero is returned when the first not matching character in leftStr have lesser ASCII value than the corresponding character in rightStr.
    If character in leftStr is lexicographically
    before the character of rightStr
    // C program to illustrate
    // strcmp() function
    #include<stdio.h>
    #include<string.h>
    int main()
    {
        // b has less ASCII value than g
        char leftStr[] = "bfb";
        char rightStr[] = "gfg";

        int res = strcmp(leftStr, rightStr);

        if (res==0)
            printf("Strings are equal");
        else
            printf("Strings are unequal");

        printf("\nValue returned by strcmp() is:  %d" , res);


        return 0;
    }
    Output:

    Strings are unequal
    Value returned by strcmp() is:  -5
    Important point : When the strings are not same, you will find that the value returned by the strcmp() function is the difference between the ASCII values of first unmatched character in leftStr and rightStr in both the cases.
    */


/// C++ functions

/// strtol(string)   --- string to long , string to long integer

/// strtof(string, NULL), string to float

/// https://www.bing.com/search?q=strtol%2C+strtof%2C+strtod+in+C%2FC%2B%2B&form=ANNTH1&refig=e2a87fb7104246f3849d2456a9874070

///strtok()
/// tokenized string
/// https://www.bing.com/search?q=strtok+in+C%2FC%2B%2B&qs=n&form=QBRE&sp=-1&pq=strtok+in+c%2Fc%2B%2B&sc=1-15&sk=&cvid=DA319E4B76C54C99B0E21E1949E6E5AC

/// https://www.bing.com/search?q=strtok+in+C%2fC%2b%2b&FORM=HDRSC1




/// C++ string class & objects

/// https://www.bing.com/search?q=C%2B%2B+string+class+%26objects&qs=n&form=QBRE&sp=-1&pq=c%2B%2B+string+class+%26objects&sc=0-25&sk=&cvid=66517FA03F1846D595185154A70B75EF


    string StringTest; /// string class variable object StringTest was created

    string StringTest1;

    string StringTest2= "Hello"; /// string class variable object StringTest2 Array was created as long as "Capacity of a string"

/// Capacity of an array object will be bigger than length/size of the string.

/// we can store more bigger character in the same string object ,
///  string class will delete the previous array and allocate new space for bigger array.


    cin>> StringTest; /// will take only one word
/// no problem with cin
    getline(cin, StringTest1); /// will take whole lines

    cout<< StringTest2 << endl;

    cout<< StringTest << endl;

    cout<< StringTest1 << endl;

/// self managed capacity by string class


/// functions of string class

    /*
    Class String
    s.length( )
    s.size( )

    s.capacity()
    s.resize(30 )

    s.max_size( )
    s.clear( )
    s.empty( )

    Class String
    s.append( "Bye")
    s.insert(3,"kk" )

    s.replace(3,5,"aa" )
    s.erase( )

    s.push_back('z' )
    s.pop_back( )

    s1.swap($2 )


    /// Class String


    s.copy( char des[ ])
    s.find(str) or char

    s.rfind(str )
    s.find_first_of( )

    s.find_last_of( )
    s.substr( start,number)
    s.compare(str )

    string class overloaded functions

    at() is like []
    front()
    back()
    [] string indexing
    + concatination
    = string assignment

    Class String

    string::iterator
    begin( )

    end( )

    string::reverse_iterator
    rbegin( )

    rend( )

    */



    string s ="Welcome"


              char str[10];
    s.copy(str,s.length());
    cout<<str<<endl;
    s.copy(str,s.length());
    str[3] ='\0'
            cout<<str<<endl;
    s.copy(str,s.length());



    cout<<str<<endl;


    string str="today";
    string::iterator it;
    for (it=str.begin() ; it!=str.end(); it++)
    {
        cout<<str;
        *it=*it-32;
    }

    cout<<str;
    cout<<endl;

    string str="Reversetoday";
    string::riterator it;
    for (it=str.rbegin(); it!=str.rend(); it++)
    {
        cout<<str;
        *it=*it-32;
    }

    cout<<str;
    cout<<endl;

    string str="todayloop" ;
    for(int i=0; str[i]!='\0' ; i++)
    {

        cout<<str[i];
        str[i] = str[i] - 32;
        cout<<str[i];
    }

    cout<<endl;


/// uppercase to lowercase

    string str="WELCOME";
    for(int i=0; str[i]!=' \0' ; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }

    cout< <str<<end1;


    string str="WelcomE7";
    for(int i=0; str[i]!=' \0' ; i++)
    {

        if(str[i]>=97 && str[i]<=122)
        {

            str[i]-=32;
        }
    }

cout< <str<<end1;

/// find how Many Words vowels and consonents,
string str="how Many Words" ;
int vowels=0, consonant=0, space=1;
for(int i=0; str[i]!='\0' ; i++)
if( str[i]=='A' | | str[i]=='E' | | str[i]=='I' [| str[i]=='0' | | str[i]=='U' | |

str[i]=='a' | | str[il=='e' || str[i]=='i' | | str[il=='o' | | str[il=='u')
vowels+ +;
else if(str[i]==' ')
space++;
else
consonant++;

cout< <"Vowels "<<vowels< <endl;
cout < <"Consonants "<<consonant< <endl;
cout< <"Words "<<space+1<<endl;


string str="MADAM" ;
string rev="";
int len=(int )str. length ( ) ;

rev . resize(len) ;
for (int i=0, j=len-1; i<len; i++, j--)
{
    rev[i]=str[j];
}


rev[len]=' \0' ;
if(str . compare (rev)==0)
cout < <"Palindorme"<<endl;
else
cout<<"Not a Plaindrome"<<endl;

string email="john123@gmail.com";

int i=(int) email. find( '@' ) ;
string uname=email. substr(0, i) ;

cout<<"User Name is "< <uname<<endll;


/*program for function overloading sum of two integers

*/

	cout<<sum(10,5)<<endl;
	cout<<(12.5f,3.4f)<<endl;
	cout<<sum(10,20,3)<<endl;





/*program for function templates*/
	cout<<maxim(12,14)<<endl;
	cout<<maxim(2.3,1.4)<<endl;
	cout<<maxim(2.3f,5.6f)<<endl;



























































float putsTime1 = ((double)(clock() - tStart))/CLOCKS_PER_SEC;
printf(" \n Time taken: %.5f s\n", putsTime1);

#ifdef SHOW_SOURCE_CODE
// We can append this code to any C program
// such that it prints its source code with line number.

unsigned long ln = 0;
FILE *fp = fopen(__FILE__, "r");
int prev = '\n';
int c;  // Use int here, not char
while((c=getc(fp))!=EOF)
{
    if (prev == '\n')
    {
        printf("%05lu ", ++ln);
    }
    putchar(c);
    prev = c;
}
if (prev != '\n')
{
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
