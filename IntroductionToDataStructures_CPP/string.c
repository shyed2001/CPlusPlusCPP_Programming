/*
* C Program to read and print string using getchar and putchar
*/
#include <stdio.h>
#include <conio.h>

int main(){
    char inputString[100], c;
    int index = 0;
    printf("Enter a string\n");
    /* Read string from user using getchar
     inside while loop */
    while((c = getchar()) != '\n'){
        inputString[index] = c;
        index++;
    }
    inputString[index] = '\0';
    /* Print string stored in inputString using putchar */
    index = 0;
    while(inputString[index] != '\0'){
     putchar(inputString[index]);
     index++;
 }

    getch();
    return 0;
}
