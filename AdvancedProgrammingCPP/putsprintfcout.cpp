/// C / C++ Comparison between output time of puts(), fputs(), printf(), cout

/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <stdio.h>
#include <time.h>
#include <iostream>

void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

#define SHOW_SOURCE_CODE
#define SHOW_SOURCE_FILE_PATH

using namespace std;

int main(int argc, char* argv[])

{ ///  puts("Use gcc -save-temps testC.c -o testC.exe for getting all the preprossed and object and assembly source files saved with chosen name");


        clock_t tStart321456= clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       cout<<'\n'<<endl;
   }
   float coutTime21456 =(double)(clock() - tStart321456)/CLOCKS_PER_SEC;

   printf("\n Starting 10000 '\\n' cout with new endline Time taken: %.5f s\n\n", coutTime21456);



        clock_t tStart32145= clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       cout<<'\n'<<endl;
   }
   float coutTime2145 =(double)(clock() - tStart32145)/CLOCKS_PER_SEC;

   printf("\n 10000 '\\n' cout with new endline Time taken: %.5f s\n\n", coutTime2145);



 clock_t tStartnull = clock();

      for(int i = 0 ; i < 10000 ; i++)
   {
       puts("\n");
       fflush(stdout); /// It is explicitly said in the standard that fflush should only apply to output streams. /// It is explicitly said in the standard that fflush should only apply to output streams.
   }

   float putsTime1null = ((double)(clock() - tStartnull))/CLOCKS_PER_SEC;
   printf(" \n 10000 \\n puts with Time fflush(stdout) staken: %.5f s\n", putsTime1null);


    clock_t tStartnull2 = clock();

      for(int i = 0 ; i < 10000 ; i++)
   {
       puts("\n");
       ///fflush(stdout); /// It is explicitly said in the standard that fflush should only apply to output streams. /// It is explicitly said in the standard that fflush should only apply to output streams.
   }

   float putsTime1null2 = ((double)(clock() - tStartnull2))/CLOCKS_PER_SEC;
   printf(" \n 10000 \\n puts without Time fflush(stdout) staken: %.5f s\n", putsTime1null2);


   clock_t tStart = clock();

      for(int i = 0 ; i < 10000 ; i++)
   {
       puts("str");
       fflush(stdout); /// It is explicitly said in the standard that fflush should only apply to output streams. /// It is explicitly said in the standard that fflush should only apply to output streams.
   }

   float putsTime1 = ((double)(clock() - tStart))/CLOCKS_PER_SEC;
   printf(" \n 10000 str puts with Time fflush(stdout) staken: %.5f s\n", putsTime1);




   clock_t tStart0 = clock();

      for(int i = 0 ; i < 10000 ; i++)
   {
       puts("str");

   }

   float putsTime12 = ((double)(clock() - tStart0))/CLOCKS_PER_SEC;
   printf(" \n 10000 str  puts without Time fflush(stdout) staken: %.5f s\n", putsTime12);


   clock_t tStart11 = clock();
         for(int i = 0 ; i < 10000 ; i++)
   {
       fputs("fstr", stdout); /// It is explicitly said in the standard that fflush should only apply to output streams.
       fflush(stdout); /// It is explicitly said in the standard that fflush should only apply to output streams.
   }

      float fputsTime = ((double)(clock() - tStart11))/CLOCKS_PER_SEC;
      printf(" \n 10000 str fputs with fflush(stdout) Time taken: %.5f s\n", fputsTime);


   clock_t tStart111 = clock();
         for(int i = 0 ; i < 10000 ; i++)
   {
       fputs("fstr", stdout);

   }

      float fputsTime2 = ((double)(clock() - tStart111))/CLOCKS_PER_SEC;
      printf(" \n 10000 str fputs without fflush(stdout) Time taken: %.5f s\n", fputsTime2);




   clock_t tStart2 = clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       printf("%d\n",i);
       fflush(stdout); /// It is explicitly said in the standard that fflush should only apply to output streams.
   }

   float printfTime = ((double)(clock() - tStart2))/CLOCKS_PER_SEC;
   printf("\n 10000 int++ printf with fflush(stdout)  Time taken: %.5f s\n", printfTime);



   clock_t tStart22 = clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       printf("%d\n",i);

   }

   float printfTime2 = ((double)(clock() - tStart22))/CLOCKS_PER_SEC;
   printf("\n 10000 int++ printf without fflush(stdout)  Time taken: %.5f s\n", printfTime2);

   clock_t tStart223 = clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       printf("\n");

   }

   float printfTime23 = ((double)(clock() - tStart223))/CLOCKS_PER_SEC;
   printf("\n 10000 \\n printf without fflush(stdout)  Time taken: %.5f s\n", printfTime23);



   clock_t tStart222 = clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       printf("str");
       fflush(stdout); /// It is explicitly said in the standard that fflush should only apply to output streams.

   }

   float printfTime22 = ((double)(clock() - tStart222))/CLOCKS_PER_SEC;
   printf("\n 10000 str printf with fflush(stdout)  Time taken: %.5f s\n", printfTime22);

   clock_t tStart2224 = clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       printf("str");
       ///fflush(stdout); /// It is explicitly said in the standard that fflush should only apply to output streams.

   }

   float printfTime224 = ((double)(clock() - tStart2224))/CLOCKS_PER_SEC;
   printf("\n 10000 str printf without fflush(stdout)  Time taken: %.5f s\n", printfTime224);

   clock_t tStart3= clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       cout<<i<<'\n';
   }
   float coutTime =(double)(clock() - tStart3)/CLOCKS_PER_SEC;
   printf("\n 10000 int cout with \\n Time taken: %.5f s\n\n", coutTime  );


     clock_t tStart32= clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       cout<<i;
   }
   float coutTime2 =(double)(clock() - tStart32)/CLOCKS_PER_SEC;
   printf("\n 10000 int++ cout without \\n Time taken: %.5f s\n\n", coutTime2 );


     clock_t tStart321= clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       cout<<"str";
   }
   float coutTime21 =(double)(clock() - tStart321)/CLOCKS_PER_SEC;
   printf("\n 10000 str cout without \\n Time taken: %.5f s\n\n", coutTime21 );


        clock_t tStart3214= clock();

   for(int i = 0 ; i < 10000 ; i++)
   {
       cout<<'\n';
   }
   float coutTime214 =(double)(clock() - tStart3214)/CLOCKS_PER_SEC;
   printf("\n 10000 '\\n' cout with0ut newline Time taken: %.5f s\n\n\b", coutTime214);

/// clear();  /// clearing console window
/// or
///system("@cls||clear"); /// or system("cls||clear");

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

puts("Using for(int i = 0 ; i < 10000 ; i++) in all cases\n");

printf(" 10000 '\\n' cout with new endline Time taken: %.5f s\n", coutTime21456);

printf(" 10000 '\\n' cout with new endline Time taken: %.5f s\n\n", coutTime2145);

printf(" 10000 \\n puts with fflush(stdout) Time     : %.5f s\n", putsTime1null);

printf(" 10000 \\n puts without fflush(stdout) Time  : %.5f s\n\n", putsTime1null2);

printf(" 10000 '\\n' cout without newline Time taken : %.5f s\n", coutTime214);

printf(" 10000 \\n printf without fflush(stdout) Time: %.5f s\n\n", printfTime23);

printf(" 10000 str puts with fflush(stdout) Time pass: %.5f s\n", putsTime1);

printf(" 10000 str  puts with0ut fflush(stdout) Time : %.5f s\n", putsTime12);

printf(" 10000 str fputs with fflush(stdout) Time log: %.5f s\n", fputsTime);

printf(" 10000 str fputs without fflush(stdout) Time : %.5f s\n", fputsTime2);

printf(" 10000 str printf with fflush(stdout)  Time  : %.5f s\n", printfTime22);

printf(" 10000 str printf without fflush(stdout) Time: %.5f s\n", printfTime224);

printf(" 10000 str cout without \\n Time taken       : %.5f s\n\n", coutTime21 );

printf(" 10000 int++ printf with fflush(stdout)  Time: %.5f s\n", printfTime);

printf(" 10000 int++ printf without fflush(stdout)Time:%.5f s\n", printfTime2);

printf(" 10000 int++ cout with \\n Time taken        : %.5f s\n", coutTime  );

printf(" 10000 int++ cout without \\n Time taken     : %.5f s\n", coutTime2 );



 cin.get()/// all system /// C++ all system // platform

    return 0;

    /// system("pause>null"); /// for windows only  /// For debugging only.

}
