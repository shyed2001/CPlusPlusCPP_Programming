/// BMI Metric Lab

/*
Body mass index (BMI) is a number calculated from  a person’s weight and height.
According to the Centers for Disease Control and Prevention, the BMI is a fairly
reliable indicator of body fatness for most people. BMI does not measure body fat
directly, but research has shown that  BMI correlates to direct  measures  of  body  fat,  
such  as  underwater  weighing  and dual-energy X-ray absorptiometry. The formula 
for BMI is
    Weight/Height2

Where weight is in kilograms and height is in meters.


Write a program that prompts for metric weight and height and outputs the BMI with two decimal places.


For example,  an  execution could look  like  this:
Please enter weight in kilograms: 50
Please enter height in meters: 1.58
BMI is: 20.03

File Name 

bmimetric.cpp

Score

There are five tests each worth 2 points
*/
/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main(void)

{

  cout<<" BMI Metric-----Body mass index (BMI)------BMI Calculator-------- "<<endl;

double weightis, heightis, BMIis;

weightis= heightis= BMIis = 0.0;

cout<<"\n Please enter weight in kilograms:   ";cin>>weightis;

cout<<"\n Please enter height in meters:    "; cin>>heightis;

BMIis =  (weightis/(heightis*heightis));

cout<<"\n BMI is: "<<fixed<< setprecision(2) << BMIis <<endl;
cout<< "\n " <<endl;
/* 
setprecision(n) applies to the entire number, not the fractional part. You need to use the fixed-point format to make it apply to the fractional part: setiosflags(ios::fixed) /You have to set the 'float mode' to fixed."<<endl;

*/

/// BMI Imperial Lab 


 cout<<" BMI Imperial-----Body mass index (BMI)------BMI Calculator-------- "<<endl;

// double weightis, heightis, BMIis;

weightis = heightis = BMIis = 0.0;

cout<<"\n Please enter weight in pounds:   ";cin>> weightis ;

cout<<"\n Please enter height in inches:    "; cin>> heightis ;

/*
 Note: 1 pound is  0.453592  kilograms and 1 inch is 0.0254  meters.
*/

weightis = weightis * 0.453592;

heightis = heightis * 0.0254 ;

BMIis =  ( weightis /( heightis*heightis));

cout<<"\n BMI is: "<<fixed<< setprecision(2) << BMIis <<endl;


cout<< "\n " <<endl;
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
