#include <stdio.h>
#include <stdlib.h>
/////#include <iostream>
#include <windows.h>
#include <shellapi.h>
int main(void)
{
//system("start https://digitalbd.org");
ShellExecute(NULL, "open", "http://www.microsoft.com", NULL, NULL, SW_SHOWNORMAL);
/// reference link https://www.betaarchive.com/wiki/index.php/Microsoft_KB_Archive/224816


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
