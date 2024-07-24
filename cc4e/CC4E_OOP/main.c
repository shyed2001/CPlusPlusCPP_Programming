 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LowestLimit1 0
#define HighesttLimit1 1000


    struct pointStructOutmain
    {
        int XpointStructOut ;
        int YpointStructOut ;
        double ZpointStructOut ;
        char CpointStructOut ;
        char CharpointStructOut[] ;
    };


int py_len(char self[]);   // function prototype

int main(void)

{

    struct pointStructInmain
    {
        int XpointStructIn  ;
        int YpointStructIn  ;
        double ZpointStructIn  ;
        char CpointStructIn ;
        char CharpointStructIn[] ;
    };


   struct pointStructOutmain OBJECTpointStructInmain , *POINTERpointStructInmain;


   struct pointStructInmain OBJECTpointStructOutmain , *POINTERpointStructOutmain;




   struct pointStructOutmain *POINTERpointStructInmainOBJECT;


   struct pointStructInmain *POINTERpointStructOutmainOBJECT;





char StringGETS [15];

 puts("Please Enter Chars or characters or press ^c or ^z, Ctrl+z or Ctrl+z to exit");

gets(StringGETS);

printf(" StringGETS : %s \n" , StringGETS);

register int RegisterIntVal = 99;

printf("RegisterIntVal %d \n  ", RegisterIntVal);

 int charC;

 puts("Please Enter Chars or characters or press ^c or ^z, Ctrl+z or Ctrl+z to exit");

 while((charC = getchar())!=EOF)  //EOF=^c or ^z, Ctrl+z or Ctrl+z
 {

     putchar(charC);
 }

    printf("LowestLimit1 %d\n", LowestLimit1);
   printf("HighesttLimit1 %d\n", HighesttLimit1);


    unsigned int UNsInt;

    short int ShortINT;

    short Short;

    int INT;

    long Long;

    long int LongInt1;

    long long int LongLongInt1;

    //long long long int LongLongLongInt;

//    long long long long int Long4Int;



printf("LongG %d\n", sizeof(Long));

printf("LongI %i\n", sizeof(Long));

   printf("UNsInt %i\n", sizeof(UNsInt));

    printf("SI %i\n", sizeof(ShortINT));

    printf("S %i\n", sizeof(Short));

    printf("I %i\n", sizeof(INT));

    printf("LI %i\n", sizeof(LongInt1));

    printf("LLI %i\n", sizeof(LongLongInt1));

    //printf(sizeof(LongLongLongInt));

    //printf(sizeof(Long4Int));



    printf("Hello, world!\n");

    char x []= "HELLO";


    //int py_len(); // function prototype

    printf("%s %i \n", x, py_len(x));

     printf("strlen() %s %i \n", x, strlen(x));


         int j = strlen(x);
         printf("J1 %i\n",j);

     for(j=strlen(x) ; j>=0 ; j--)
     {
         printf("J2 %i\n",j);
         printf("J2 %o\n",j);
         printf("J2 %x\n",j);
         printf(" %c\n",x[j]);
        printf(" %o\n",x[j]);
        printf(" %x\n",x[j]);
     }


     float FloatTeat1 = 88.99;

     printf("float FloatTeat1 %6.7f \n", FloatTeat1);

    getchar();
    return 0;

 }

int py_len(char self[])
    /// char self[];
{
    int i;

    ///for(i =0; self[i]!= 'O' ; i++);
   /// for(i =0; self[i]!= '/0' ; i++);
   /// for(i =0; self[i]!= NULL ; i++);
    for(i =0; self[i]!='\0' ; i++)
        ; ///Empty body of fo loop

    return i;

}


