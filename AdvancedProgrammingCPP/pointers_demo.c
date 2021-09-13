#include <stdio.h>
void main()
{
   long int num = 10;      
   long int *ptr;                  
   printf("num's address: %p\n", &num);   
   ptr = &num; 

   printf("pointer's address: %p\n", &ptr);   

   printf("pointer's size: %ld bytes\n", sizeof(ptr));  

   printf("pointer's value: %p\n", ptr);   

   printf("value pointed to: %ld\n", *ptr);  
}

