#include <iostream>
using namespace std;
int main() {

   #if defined(__MINGW32__) || defined(__CYGWIN__)
      cout<< " Windows"<< endl; system("dir");
   #else
      cout<<"NOT Windows"<< endl; system("ls");

   #endif
      return 0;
}
