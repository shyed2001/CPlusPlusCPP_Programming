#include <stdio.h>
int main()
{
   FILE *fp;
   char c;
   fp = fopen("/home/ttt/Desktop/sample.txt","r");
   if (fp == NULL)
   printf("File doesn't exist\n");
   else 
   {
     while (c != EOF)
     {
       c = getc(fp); 
       putchar(c); 
     }
     fclose(fp);
   }
   return 0;
}
