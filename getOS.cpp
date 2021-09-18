#include <iostream>
using namespace std;
int main() {

   #if defined(_WIN32) || defined(_WIN64) || defined(__TOS_WIN__) || defined(OS_WINDOWS) || defined(__WIN32__) || defined(__WINDOWS__)

      cout<< " Windows"<< endl; system("dir");

   #else

      cout<<"NOT Windows"<< endl; system("ls");
      cout<< " Windows"<< endl; system("dir");

   #endif

      return 0;
}
