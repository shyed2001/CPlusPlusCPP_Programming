#include <iostream>
using namespace std;
class Addition 
{
    int a, b;
    public:
    Addition (int, int);
    ~Addition();
    int add() 
    {
     return (a+b);
    }
};

Addition::Addition (int x, int y) 
{
  a = x;
  b = y;
}
Addition::~Addition()
{
cout << "Memory Deallocation\n";
}
int main () 
{
  Addition obj (3,4);
  cout <<"Sum is " <<obj.add() <<"\n";  
  return 0;
}
