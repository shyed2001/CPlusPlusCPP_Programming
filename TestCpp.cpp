/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main(void)

{






cout<<"\n  Branching Statements, if, if else, if if if, if else if else  "<<endl;
cout<<"\n  one way if statement   "<<endl;

cout<<"\n  Computing Absolute Values   "<<endl;

cout<<"\n Please enter a value  to get its absolute value  "<<endl;

int UI11;
cin>> UI11;

if ( UI11 < 0)
     UI11 *= (-1); //UI11 *= UI11 * (-1);

cout<<"\n Absolute value is "<< UI11<<endl;


cout<<"\n Determine Even or Odd   "<<endl;

cout<<"\n Please enter a positive integer  Value  "<<endl;

int UI12 ;
cin>> UI12 ;
if (UI12 % 2 == 0) 
    cout<< UI12 << " is a even number "<<endl;
    
if  (UI12 % 2 == 1) 
    cout<< UI12 << " is a odd number "<<endl;




cout<<"\n Determine Even or Odd   "<<endl;
cout<<"\n Please enter a integer  Value  "<<endl;


int UI1 ;
cin>> UI1 ;

int UI2 = UI1;

if ( UI1 < 0)
{
     UI2 = UI1 * (-1);
     cout<< UI1<< " is a negative number "<<endl;
     cout<< " Absolute value of  "<< UI1<< " is |"<< UI1<< "| ="<< UI2 <<endl;
}   // compound if () multi instruction need {}


else 
    cout<< UI1<< " is a positive number "<<endl;  
    // simple one instruction else does not need {}

if (UI2 % 2 == 0) 
    cout<< UI1<< " is a even number "<<endl;  // simple one instruction does not need {}
    
else 
    cout<< UI1<< " is a odd number "<<endl;  // simple one instruction does not need {}

cout<< " 1 % 2 = " << 1 % 2<< " and  0 % 2 = "<< 0 % 2 <<endl;



/// output  1 % 2 = 1 and  0 % 2 = 0

cout<<"\n  There should be a boolean statement inside () of if ( ..boolean..);    "<<endl;
cout<<"\n  Arithmetic Operators inside of  if ( ..arithmetic..) will give error. "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;

cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;
cout<<"\n     "<<endl;


    return 0;

}

/*
Shortcuts in Vs code
Ctrl+p for search file
Ctrl+Tab for switch to different tab
Ctrl+w for closing current tab
Ctrl+shift+p for command palette

*/

/* Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n

*/
