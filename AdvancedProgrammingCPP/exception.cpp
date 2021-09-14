#include <iostream>
using namespace std;

double division(int a, int b)
{
   if( b == 0 )
   {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main ()
{
int x,y;
double z;
cout<<"Enter value of x and y\n";
cin>>x>>y;

   try 
    {
     z = division(x, y);
     cout << z<<"\n";
    }
catch (const char* msg) 
{
     cout << msg << endl;
   }

   return 0;
}


//An exception is a problem that arises during the execution of as program
