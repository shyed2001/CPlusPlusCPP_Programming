#include <iostream>
using namespace std;
 
class statex
{
private:
  int x;

public:
  static int sum; 
  statex() 
    {
     x=sum++;
    }

  static void stat()
    {
      cout << "Result is: " << sum<<"\n";
    }
 
  void number() 
    {
      cout << "Number is: " << x<<"\n";
    }
};
 
int statex::sum;
 
int main()
{
  statex o1,o2,o3,o4;
  o1.number();
  o2.number();
  o3.number();
  o4.number();
  statex::stat();  
  cout<< "Now static var sum is "<<o1.sum<<"\n";
return 0;
}
