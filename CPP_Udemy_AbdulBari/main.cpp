#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include<ctype.h>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    // Array and index into it.

    int myArray[] = {1,2,3,4,5};
    int i;


    // Initialise sum to zero for starting.

    int sum = 0;

    // Adding whole array will not work (though it would be nice).
    // Instead, go through array element by element.

    // j += yArray[];
    for (i = 0; i < 5; i++) {
        // Add element to sum and output results.

        sum += myArray[i];
        printf ("Adding %d to get %d\n", myArray[i], sum);
    }

    // Output final result.

    printf ("Final sum is: %d\n", sum);
    return 0;
}
