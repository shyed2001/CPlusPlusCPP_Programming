#include <iostream>
using namespace std;
int main()
{
   long int num = 10;      
   long int *ptr;                  
   cout<<"num's address :"<< &num<<"\n";   
   ptr = &num; 

   cout<<"pointer's address :"<< &ptr<<"\n";   

   cout<<"pointer's size bytes "<< sizeof(ptr)<<"\n";  

   cout<<"pointer's value: "<< ptr<<"\n";   

   cout<<"value pointed to: "<< *ptr<<"\n";  
return 0;
}

