// C/C++ program to create an Hard Link
// to the existing file
/// Only command line arguments work
/// Only command line arguments work
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <string>
using namespace std;
// Driver Code
int main(int argc, char* argv[])
{
   char str[1000];
   char str2[1000];
   char* pstr = str;
   char* pstr2 = str2;
   const char* target = pstr;
   const char* linked = pstr2;
   int sl2;
    // Hard link function
    int sl = link(argv[1], argv[2]);

    // argv[1] is existing file name
    // argv[2] is soft link file name
    if (sl == 0) {
        printf("Soft Link created"
               " succuessfuly");
    }

    else{
//          string target, linked;
//
//    puts("Please Enter an Existing file to be linked");
//    cin>>target;
//    puts("Please Enter an file to be created as soft link");
//    cin>>linked;


   puts("Please Enter an Existing file name with absolute path  file to be linked");
   fgets( pstr,1000, stdin );
   cout<<pstr<<endl;
   puts("Please Enter an file name with absolute path to be created as soft link");
   fgets( pstr2,1000, stdin );
   cout<<pstr2<<endl;

    int sl2 = link(target, linked);

    }
        if (sl2 == 0) {
        printf("Soft Link created"
               " successfully");
    }
    return 0;
}
/// https://cboard.cprogramming.com/c-programming/102188-getting-const-char*-input.html

/// https://www.geeksforgeeks.org/taking-string-input-space-c-3-different-methods/

/// C:/Users/User/Desktop/ExistingSymSoftlink

/// C:\Users\User\Desktop\ExistingSymSoftlink\222.txt

/// C:\Users\User\Desktop\ExistingSymSoftlink22\333.txt
/// C:\Users\User\Desktop\ExistingSymSoftlink\333222.txt

/// Only command line arguments work
/// Only command line arguments work

/// C:\Users\shyed\OneDrive\Desktop\SoftLink\111.txt

/// C:\Users\shyed\OneDrive\Desktop\SymLink

