#include<iostream>
using namespace std;

class abstractinterface
 {
   public:
   virtual void numbers()=0;
   void input();
   int a, b;
 };

void abstractinterface::input()
  {
    cout<< "Enter the numbers\n";
    cin>>a>>b;
  }

class add : public abstractinterface
 {
  public:
  void numbers()
   {
     int sum;
     sum=a+b;
     cout<<"sum is "<<sum<<"\n";
   }
 };

class sub : public abstractinterface
 {
   public:
   void numbers()
    {
     int diff;
     diff=a-b;
     cout<<"diff is "<<diff<<"\n";
    }
 };

int main()
 {
  add obj1;
  obj1.input();
  obj1.numbers();
  sub obj2;
  obj2.input();
  obj2.numbers();
return 0;
 }
