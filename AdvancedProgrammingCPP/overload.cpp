#include <iostream>
using namespace std;

int add(int a, int b, int c)
{
   return(a + b + c);
}
 
float add(float d, float e)
{
   return (d + e);
}

int main()
{
int add(int, int, int);
float add(float, float);
int a,b,c;
float d,e,sum; 

   cout << "Enter three integers\n";
   cin >> a >> b >>c;
   sum = add(a, b, c);
   cout << "Sum of integers is " << sum << "\n";
 
   cout << "Enter two floating point numbers\n";
   cin >> d >> e;
   sum = add(d, e);
   cout << "Sum of floating point numbers is " << sum << "\n";
   return 0;
}
 
