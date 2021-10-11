#include <iostream>
#include <string>
using namespace std;
int main() {

   #if defined(_WIN32) || defined(_WIN64) || defined(__TOS_WIN__) || defined(OS_WINDOWS) || defined(__WIN32__) || defined(__WINDOWS__)
      char windows = 'y'
      cout<< " Windows"<< endl; system("dir");

   #else
      windows = 'n'
      cout<<"NOT Windows"<< endl; system("ls");

   #endif

   system("systeminfo");
      return 0;
}

//short getOS()
//{
//       #if defined(_WIN32) || defined(_WIN64) || defined(__TOS_WIN__) || defined(OS_WINDOWS) || defined(__WIN32__) || defined(__WINDOWS__)
//      char windows = 1;
//      cout<< " Windows"<< endl; system("dir");
//
//   #else
//      windows = 0;
//      cout<<"NOT Windows"<< endl;
//   #endif
//
//}
