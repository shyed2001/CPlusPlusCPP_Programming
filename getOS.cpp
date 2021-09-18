#include <iostream>
using namespace std;
int main() {
   #ifdef _WIN32
      cout<< " Windows"<< endl; system("dir");
   #else
      cout<<"NOT Windows"<< endl; system("ls");
   #endif
      return 0;
}
