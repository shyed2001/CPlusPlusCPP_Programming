#include <iostream>
using namespace std;
class Subtraction
{
public:
    int a, b;
    int sub(int a, int b)
    {
     return (a-b);
    }
    Subtraction ();

};
Subtraction::Subtraction()
{
}
int main ()
{
  int x;
  Subtraction s;
  x=s.sub(8,4);
  cout <<"Difference is "<<x<<"\n";
  return 0;
}
