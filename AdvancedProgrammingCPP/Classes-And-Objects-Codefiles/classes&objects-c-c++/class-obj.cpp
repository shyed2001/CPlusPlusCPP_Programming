#include <iostream>

using namespace std;

class square
{
    int x;  /// this is private data, as nothing about access specifier is mentioned.
    public:  /// this means area will be available globally.
    int area (int); /// member function or method
};

int square :: area (int a) /// :: means area function is a member of class square only
{
  x = a;
 return x*x;
}

int main()
{
  square sqr;  // object sqr

  cout << "Area of the square is " << sqr.area(4)<<"\n";
  return 0;
}

