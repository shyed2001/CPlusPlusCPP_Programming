#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <shellapi.h>

using namespace std;

void SearchWeb( string word );

void browser(string word){

    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)

        printf("Not Windows\n");
        system("open https://digitalbd.org");
    #endif

    #if defined(_WIN32) || defined(_WIN64) || defined(__TOS_WIN__) || defined(OS_WINDOWS) || defined(__WIN32__) || defined(__WINDOWS__)


        printf("Windows\n");
        SearchWeb(word);
    #endif

}


int main(void)
{
    // How to determine the version of the C++ standard used by the compiler?
     if (__cplusplus == 201703L)
      std::cout << "C++17" << endl;
   else if (__cplusplus == 201402L)
      std::cout << "C++14" << endl;
   else if (__cplusplus == 201103L)
      std::cout << "C++11" << endl;
   else if (__cplusplus == 199711L)
      std::cout << "C++98" << endl;
   else
      std::cout << "pre-standard C++" << endl;

//system("start https://digitalbd.org");
/// ShellExecute(NULL, "open", "http://www.microsoft.com", NULL, NULL, SW_SHOWNORMAL);
/// reference link https://www.betaarchive.com/wiki/index.php/Microsoft_KB_Archive/224816
string word;
cout<<"Enter a word to search\n";
cin>>word;
browser(word);
///SearchWeb(word);

return 0;
}

/// I've had MUCH better luck using ShellExecuteA().
/// I've heard that there are a lot of security risks when you use "system()".
///  This is what I came up with for my own code.

void SearchWeb( string word )
{
    string base_URL = "http://www.bing.com/search?q=";
    string search_URL = "dummy";
    search_URL = base_URL + word;

    cout << "Searching for: \"" << word << "\"\n";

    ShellExecuteA(NULL, "open", search_URL.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

/// p.s. Its using WinAPI if i'm correct. So its not multiplatform solution.
/// If this is about starting a web browser from C++, you can invoke a shell command with system on a POSIX system:

/// system("<mybrowser> http://google.com");
