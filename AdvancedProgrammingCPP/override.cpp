#include <iostream>
using namespace std;

class arithmetic
{
  protected:
    int a, b, sum, sub, mul, div;
  public:
    void values (int x, int y)
      { 
	a=x, b=y; 
      }
    virtual int operations ()
      { 
	sum= a + b;
	cout<< "Addition of two numbers is "<< sum<<"\n";
      }
};

class Subtract: public arithmetic  
{
  public:
    int operations ()
      { 
	sub= a - b;
	cout<< "Difference of two numbers is "<<sub <<"\n";
      }
};

class Multiply: public arithmetic
{  
  public:
    int operations ()
      { 
	mul = a * b;
	cout<< "Product of two numbers is "<< mul<<"\n"; 
      }
};

class Divide: public arithmetic
{  
  public:
    int operations ()
      { 
	div = a / b;
	cout<< "Division of two numbers is "<< div<<"\n"; 
      }
};


int main() 
{
    arithmetic *arith, p; 
    Subtract subt;
    Multiply mult;
    Divide divd;

    arith=&p;
    arith->values(30,12);
    arith->operations();

    arith=&subt;
    arith->values(42,5);
    arith->operations();

    arith=&mult;
    arith->values(6,5);
    arith->operations();

    arith=&divd;
    arith->values(6,3);
    arith->operations();

return 0;
}
