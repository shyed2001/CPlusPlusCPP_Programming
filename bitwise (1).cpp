#include <iostream>
using namespace std;

int main()
{
	/*
		_ _ _ _ _ _ _ _
	    1 6 3 1 8 4 2 1
		2 4 2 6
	    8
		<< shift left
		>> shift right
		&  and
		|  or
		^  xor
		~  not
	*/

	char c = 9;			// 000000000 0 0 0 1 0 0 1 = 9
						// 1 1 1 1 0 1 1 0
/*	char d = c << 2;	// 0 0 1 0 0 1 0 0 = 36
	cout << (int)d << endl;
	d = c >> 1;			// 0 0 0 0 0 1 0 0 = 4
	cout << (int)d << endl; */            
	/*
		&
		1 & 1 = 1
		1 & 0 = 0
		0 & 1 = 0
		0 & 0 = 0
	*/

	/* d = c & 7;
	cout << (int)d << endl; */

	/*
	  1 | 1 = 1
	  0 | 1 = 1
	  1 | 0 = 1
	  0 | 0 = 0
	*/

	char d = c | 7;
	cout << (int)d << endl;
	/*
	  0 ^ 0 = 0
	  1 ^ 1 = 0
	  1 ^ 0 = 1
	  0 ^ 1 = 1
	
	*/

	d = c ^ 7;
	cout << (int)d << endl;
	/*
	~0 = 1
	~1 = 0
	
	*/

	short e = ~c;
	cout << e << endl;

	return 0;
}