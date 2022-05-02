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
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
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

    return 0;
}
