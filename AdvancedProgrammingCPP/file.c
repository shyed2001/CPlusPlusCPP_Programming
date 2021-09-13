#include <stdio.h>
int main()
{
  FILE *fp;
  fp = fopen("/home/ttt/Desktop/sample.txt","w");
  fprintf(fp,"Welcome to the spoken-tutorial 	       \n"); 
  fprintf(fp,"This is a test example\n"); 
  fclose(fp); 
  return 0;
}

