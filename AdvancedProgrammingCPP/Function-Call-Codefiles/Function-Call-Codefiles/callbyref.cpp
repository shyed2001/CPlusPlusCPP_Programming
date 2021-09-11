#include <iostream>
using namespace std;

int swap(int &x, int &y)
{
   int t;
   t = x; 
   x = y;    
   y = t; 
}  

int main ()
{
  int a,b;
  cout<< "Enter values of a and b\n";
  cin>> a>>b;
   
  cout << "Before swapping a and b : " <<a <<" and " <<b <<"\n";

   swap(a, b);

   cout << "After swapping a and b : " << a <<" and " <<b <<"\n";
 
   return 0;
}
