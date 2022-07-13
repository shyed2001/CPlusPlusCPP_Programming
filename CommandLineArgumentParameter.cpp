/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/


#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <cstdlib> // or #include <stdlib.h>



using namespace std;


int main(int argc, char* argv[])

{

  cout <<"\n Converting Strings to Numbers in C/C++ https://www.geeksforgeeks.org/converting-strings-numbers-cc/"<<endl;

    if (argc <2 || argc > 2 ) {
        // Tell the user how to run the program
        cout << "Usage: " << argv[0] << " Year" << endl;
        /* "Usage messages" are a conventional way of telling the user
         * how to run a program if they enter the command incorrectly.
         */

        return 1;
    }


cout<<"\n  #include <iostream> int main(int argc, char* argv[]){std::cout << argv[0]<<std::endl;return 0;}   "<<endl;
cout<<"\n Have to run / execute this program this command from terminal or command line , cd to d:\\GitHub\\C-plus-plus-CPP-Learning\\ ; after that { g++ TestCpp.cpp -o TestCpp } ; after that { .\\TestCpp } "<<endl;
cout<<"\nThis program will print the name of the command you used to run it: if you called the executable a.exe (Windows) or a.out (UNIX) it would likely print a.exe or ./a.out (if you ran it from the shell) respectively. "<<endl;  




cout<< "\n =======______++++++++++Leap Year Command Line Lab_________++++======="<<endl;


 cout<< "\n Write a program for determining if a year is a leap year. In the Gregorian calendar system you can check if it is a leaper if it is divisible by 4 but not by 100 unless it is also divisible by 400. For example, 1896, 1904, and 2000 were leap years but 1900 was not. Write a program that takes in a year as input (as a command line argument) and returns the string '{year} was a leap year'' if true and '{year} was not a leap year'' if false. Note: background on leap year https://en.wikipedia.org/wiki/ Leap_year Here is a possible example call to the program ./isleapyearc 1896 output: 1896 was a leap year Here is a negative example call to the program ./isleapyearc 1897 output: 1897 was not a leap year File Name isleapyearc.cpp"<<endl; 


int year ; 

sscanf(argv[1], "%d", &year);

cout<<"\n  int year =   "<< year <<endl;

if (year/4 != 0) 
    cout<< year << " was not a leap year " <<endl;
else if (year/100 != 0) 
    cout<< year << " it is a leap year " <<endl; 
else if (year/400 != 0) 
    cout<< year << " was not a leap year " <<endl;
else 
  cout<< year << " it is a leap year " <<endl; 

cout<<"\n cout<< \\n << argv[0] << \"says hello,\"<< \\n<< argv[1]<< \\n <<argv[2] << endl; will output  "<<endl;
cout<< "\n" << argv[0] << " says hello, "<< "  " << argv[1]<< "\n" <<argv[2] << endl;

cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;

return 0 ; 

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
How to parse command line parameters.
Score: 3.9/5 (1156 votes)*****
Introduction
Command-line parameters are passed to a program at runt-time by the operating system when the program is requested by another program, such as a command interpreter ("shell") like cmd.exe on Windows or bash on Linux and OS X. The user types a command and the shell calls the operating system to run the program. Exactly how this is done is beyond the scope of this article (on Windows, look up CreateProcess; on UNIX and UNIX-like systems look up fork(3) and exec(3) in the manual).

The uses for command-line parameters are various, but the main two are:
Modifying program behaviour - command-line parameters can be used to tell a program how you expect it to behave; for example, some programs have a -q (quiet) option to tell them not to output as much text.
Having a program run without user interaction - this is especially useful for programs that are called from scripts or other programs.

The command-line
Adding the ability to parse command-line parameters to a program is very easy. Every C and C++ program has a main function. In a program without the capability to parse its command-line, main is usually defined like this:
 
int main()
 Edit & Run

To see the command-line we must add two parameters to main which are, by convention, named argc (argument count) and argv (argument vector [here, vector refers to an array, not a C++ or Euclidean vector]). argc has the type int and argv usually has the type char** or char* [] (see below). main now looks like this:
 
int main(int argc, char* argv[]) // or char** argv 
 Edit & Run


argc tells you how many command-line arguments there were. It is always at least 1, because the first string in argv (argv[0]) is the command used to invoke the program. argv contains the actual command-line arguments as an array of strings, the first of which (as we have already discovered) is the program's name. Try this example:
1
2
3
4
5
6
7
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << argv[0] << std::endl;
    return 0;
}
 Edit & Run

This program will print the name of the command you used to run it: if you called the executable "a.exe" (Windows) or "a.out" (UNIX) it would likely print "a.exe" or "./a.out" (if you ran it from the shell) respectively.

Earlier it was mentioned that argc contains the number of arguments passed to the program. This is useful as it can tell us when the user hasn't passed the correct number of arguments, and we can then inform the user of how to run our program:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
#include <iostream>

int main(int argc, char* argv[])
{
    // Check the number of parameters
    if (argc < 2) {
        // Tell the user how to run the program
        std::cerr << "Usage: " << argv[0] << " NAME" << std::endl;
        //  "Usage messages" are a conventional way of telling the user
        //  how to run a program if they enter the command incorrectly.
        //  
        return 1;
    }
    // Print the user's name:
    std::cout << argv[0] << "says hello, " << argv[1] << "!" << std::endl;
    return 0;
}
 Edit & Run

Example output (no arguments passed):
Usage: a.exe <NAME>
Example output (one argument passed):
a.exe says hello, Chris!

Arguments and Parameters
Arguments and parameters are strings passed to your program to give it information. A program for moving files, for example, may be invoked with two arguments - the source file and the destination: move /path/to/source /path/to/destination (note: on Windows these paths would use backslashes instead [and would probably have a drive prefix, like C:], however as Windows supports backwards and forwards slashes in paths while UNIX systems only support forward slashes, forward slashes will be used throughout this article).

In this example, the program would look something like this:
1
2
3
4
5
6
7
8
9
10
11
#include <iostream>

int main(int argc, char* argv[])
{
    if (argc < 3) { // We expect 3 arguments: the program name, the source path and the destination path
        std::cerr << "Usage: " << argv[0] << "SOURCE DESTINATION" << std::endl;
        return 1;
    }
    return move(argv[1], argv[2]);  // Implementation of the move function is platform dependent
                    // and beyond the scope of this article, so it is left out.
}
 Edit & Run


If we wanted to allow the use of multiple source paths we could use a loop and a std::vector:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    if (argc < 3) { // We expect 3 arguments: the program name, the source path and the destination path
        std::cerr << "Usage: " << argv[0] << "SOURCE DESTINATION" << std::endl;
        return 1;
    }
    std::vector <std::string> sources;
    std::string destination;
    for (int i = 1; i < argc; ++i) { // Remember argv[0] is the path to the program, we want from argv[1] onwards
        if (i + 1 < argc)
            sources.push_back(argv[i]); // Add all but the last argument to the vector.
        else
            destination = argv[i];
    }
    return move(sources, destination);
 Edit & Run


Arguments may be passed as values to options. An option usually starts with a single hyphen (-) for a "short option" or a double hyphen (--) for a "long option" on UNIX, or a forward slash on Windows. Hyphens (single and double) will be used in this article. Continuing the example of the move program, the program could use a -d/--destination option to tell it which path is the source and which is the destination, as in move -d /path/to/destination /path/to/source and move --destination /path/to/destination /path/to/source. Options are always right-associative, meaning that the argument to an option is always the text directly to the right of it.

Let's extend the previous example to use the destination option.
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << "--destination DESTINATION SOURCE" << std::endl;
        return 1;
    }
    std::vector <std::string> sources;
    std::string destination;
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "--destination") {
            if (i + 1 < argc) { // Make sure we aren't at the end of argv!
                destination = argv[i++]; // Increment 'i' so we don't get the argument as the next argv[i].
            } else { // Uh-oh, there was no argument to the destination option.
                  std::cerr << "--destination option requires one argument." << std::endl;
                return 1;
            }  
        } else {
            sources.push_back(argv[i]);
        }
    }
    return move(sources, destination);
}
 Edit & Run

Now the parameters can be in any order as long as the destination path is immediately to the right of "--destination".

More on usage messages
Our usage message is helpful, but if we need to print it from more than one place, we have to copy the code. Obviously the way around this is to use a function.
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
#include <iostream>
#include <string>
#include <vector>

static void show_usage(std::string name)
{
    std::cerr << "Usage: " << argv[0] << " <option(s)> SOURCES"
              << "Options:\n"
              << "\t-h,--help\t\tShow this help message\n"
              << "\t-d,--destination DESTINATION\tSpecify the destination path"
              << std::endl;
}

int main(int argc, char* argv[])
{
    if (argc < 3) {
        show_usage(argv[0]);
        return 1;
    }
    std::vector <std::string> sources;
    std::string destination;
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if ((arg == "-h") || (arg == "--help")) {
            show_usage(argv[0]);
            return 0;
        } else if ((arg == "-d") || (arg == "--destination")) {
            if (i + 1 < argc) { // Make sure we aren't at the end of argv!
                destination = argv[i++]; // Increment 'i' so we don't get the argument as the next argv[i].
            } else { // Uh-oh, there was no argument to the destination option.
                  std::cerr << "--destination option requires one argument." << std::endl;
                return 1;
            }  
        } else {
            sources.push_back(argv[i]);
        }
    }
    return move(sources, destination);
}
 Edit & Run

Now, rather than having to guess, the user can call our program with the -h or --help options to find out how to run the command.


Getopt
These methods of finding command-line arguments are simple and not very robust. The best way of finding options is using the getopt family of functions:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
#include <unistd.h>

int getopt(int argc, char * const argv[],
       const char *optstring);

extern char *optarg;
extern int optind, opterr, optopt;

#include <getopt.h>

int getopt_long(int argc, char * const argv[],
                const char *optstring,
                const struct option *longopts, int *longindex);

int getopt_long_only(int argc, char * const argv[],
                     const char *optstring,
                     const struct option *longopts, int *longindex);

(from the manual page)

The manual page has examples of how to use them.
Rate this article
You have already rated this.
Please, log in to change your current rating, or sign up to create a new account.
C++
Information
Tutorials
Reference
Articles
Forum
Articles
Algorithms
C++ 11
Graphics and multimedia
How-To
Language Features
Unix/Linux programming
Source Code
Standard Library
Tips and Tricks
Tools and Libraries
Visual C++
Windows API
Home page | Privacy policy
© cplusplus.com, 2000-2020 - All rights reserved - v3.2
Spotted an error? contact us

*/ 