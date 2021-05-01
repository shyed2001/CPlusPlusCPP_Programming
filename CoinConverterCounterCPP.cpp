/// Coin Converter Lab

/* 
Write a program that asks the user to enter an amount of money in the format of dollars and remaining cents. The program should calculate and print the minimum number of coins (quarters, dimes, nickels and pennies) that    are equivalent to the given amount.

Hint: In order to find the minimum number of coins, first find the maximum number of quarters that fit in the given amount of money, then find the maximum number of dimes that fit in the remaining amount, and so on.

File Name 

coins.cpp

Score

There are five tests each worth 2 points

For example, an execution should look like  this:
Please enter the amount of money to convert:

# of dollars: 2
# of cents: 37
The coins are 9 quarters, 1 dimes, 0 nickels and 2 pennies
*/
/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <iostream>
#include <string>

using namespace std;


int main(void)

{

  cout<<" USA Dollar $ and cent-----to Coins------Coin Converter-------- "<<endl;

int cent, dollar, penny, nickel, quarter, dime;

cent= dollar= penny= nickel= quarter= dime = 0 ;

cout<<"\n Please enter the amount of money to convert:  "<<endl;

cout<<"\n# of dollars: "; cin>>dollar;

cout<<"\n# of cents:  "; cin>>cent;

cent = cent + (dollar*100); // Total cents;

quarter = cent/25; // div for total quarters

cent = cent%25; // Mod % for remainder cents

dime = cent/10; // div for total dimes

cent = cent%10; // Mod % for remainder cents

nickel = cent/5; // div for total nickels

cent = cent%5; // Mod % for remainder cents

penny = cent;

/* Conver sion rate is 
cent = penny;
nickel = 5 * cent;
dime = 10 * cent;
quarter = 25 * cent;
dollar = 100 * cent;
*/
cout<< "\n The coins are " << quarter << " quarters " << dime<< " dimes "<<  nickel  << " nickels " << penny << " pennies " <<endl;

cout<< "\n " <<endl;

  cout<<"\n\n USA Coin to $ and cent----------------Coin Counter------------- \n\n"<<endl;

// int cent, dollar, penny, nickel, quarter, dime;

cent= dollar= penny= nickel= quarter= dime = 0 ;

cout<<"\n Please enter the number of coins:   "<<endl;

cout<<"\n# of quarters:  "; cin>>quarter;

cent = cent + (quarter*25);

cout<<"\n# of dimes:     "; cin>>dime;

cent = cent + (dime*10);

cout<<"\n# of nickels:   "; cin>>nickel;

cent = cent + (nickel*5);

cout<<"\n# of pennies:   "; cin>>penny;

cent = cent + (penny*1);

/*cent = penny;
nickel = 5 * cent;
dime = 10 * cent;
quarter = 25 * cent;
dollar = 100 * cent;
*/
dollar = cent / 100; //Use div to get total dollars and

cent = cent % 100;  // Use mod to get remainder. 

cout<< "\n The total is " << dollar << " dollars and " << cent<< " cents" <<endl;

cout<< "\n " <<endl;

  return 0;

}