// ConsoleApplication1_CPP_Udemy_AbdulBari.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    cout << "Hello world!" << endl;

    // Array and index into it.

    int myArray[] = { 1,2,3,4,5 };
    int i;


    // Initialise sum to zero for starting.

    int sum = 0;

    // Adding whole array will not work (though it would be nice).
    // Instead, go through array element by element.

    // j += yArray[];
    for (i = 0; i < 5; i++) {
        // Add element to sum and output results.

        sum += myArray[i];
        printf("Adding %d to get %d\n", myArray[i], sum);
    }

    // Output final result.

    printf("Final sum is: %d\n", sum);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
