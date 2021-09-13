#include <stdio.h>
#include <string.h>
#include <iostream>


using namespace std;

#define SHOW_SOURCE_CODE
#define SHOW_SOURCE_FILE_PATH

int main(void) {

/* shows source code without File line number.
#ifdef SHOW_SOURCE_CODE
        // We can append this code to any C program
    // such that it prints its source code.

    char c;
    FILE *fp = fopen(__FILE__, "r");

    do
    {
        c = fgetc(fp);
        putchar(c);
    }
    while (c != EOF);

    fclose(fp);
          // We can append this code to any C program
    // such that it prints its source code.

#endif
*/
#ifdef SHOW_SOURCE_FILE_PATH

       // Prints location of C this C code.
   printf("%s \n",__FILE__);

#endif

    // A list to store 10 strings, but no memory for the strings themselves.
    char *strings[10];

    printf("Enter ten lines of code:\n");

    // A line buffer that's sufficiently large.
    // This will be reused.
    char line[4096];
    for ( int i = 0; i < 10; i++) {
        // Read into the large line buffer.
        fgets( line, sizeof(line), stdin );

        // Copy the string into a buffer that's just big enough.
        strings[i] = strdup( line );
    }

    for ( int i = 0; i < 10; i++) {
        printf("Line %d: %s\n", i, strings[i]);
    }

    /*
* C Program to read and print string using getchar and putchar
*/
    char inputString[100], s;
    int index = 0;
    printf("Enter a string\n");
    /* Read string from user using getchar
     inside while loop */
    while((s = getchar()) != '\n'){
        inputString[index] = s;
        index++;
    }
    inputString[index] = '\0';
    /* Print string stored in inputString using putchar */
    index = 0;
    while(inputString[index] != '\0'){
     putchar(inputString[index]);
     index++;
 }

#ifdef SHOW_SOURCE_CODE
        // We can append this code to any C program
    // such that it prints its source code with line number.

unsigned long ln = 0;
 FILE *fp = fopen(__FILE__, "r");
int prev = '\n';
int c;  // Use int here, not char
while((c=getc(fp))!=EOF) {
  if (prev == '\n'){
    printf("%05lu ", ++ln);
  }
  putchar(c);
  prev = c;
}
if (prev != '\n') {
  putchar('\n');  // print a \n for input that lacks a final \n
}
printf("lines num: %lu\n", ln);

    fclose(fp);
          // We can append this code to any C program
    // such that it prints its source code.

#endif

#ifdef SHOW_SOURCE_FILE_PATH

       // Prints location of C this C code.
   printf("%s \n",__FILE__);

#endif

      return 0;
}

