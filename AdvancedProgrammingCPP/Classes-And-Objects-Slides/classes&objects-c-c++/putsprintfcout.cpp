/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
#include <time.h>
#include <unistd.h>
//#include <windows.h>
///#include <threads.h>
//#include <conio.h>
//#include <dos.h>
//#include <direct.h>
//#include <math.h>
//#include<ctype.h>
//#include <cstdlib>
#include <iostream>
//#include <cmath>
//#include <string>
//#include <iomanip>

void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}


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

printf("\e[1;1H\e[2J");

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



printf("\e[1;1H\e[2J");

/// clear();  /// clearing console window

///system("@cls||clear"); /// or system("cls||clear");

    /// cin.get()/// all system /// C++ all system // platform

    return 0;

    /// system("pause>null"); /// for windows only  /// For debugging only.

}

///Nit: Don't use printf(string);, use puts(string); instead. The former may have UB if string contains a percent sign (even though that is not the case here, I recommend making it a habit).
    /// system() is a library function that makes calls to OS commands/programs. system("pause") calls the "pause"
    /// command in DOS/Windows. Run the pause command in a command shell to see what it does.
    /// will cause the black dos window (where you see your output) to be paused until you press any key.
    ///printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n

/*
You can use the OS commands to clear the contents of the console.

#include<stdlib.h>
int main(){

system("cls");   //For windows
system("clear"); //For Linux

}

or

system("@cls||clear"); /// or system("cls||clear");

This is actually a quite simple problem. All you have to do is use printf. You don't even need printf or any headers, for that matter.

printf("\e[1;1H\e[2J");
The \e[1;1H sets the screen to the 1st row and 1st column. the 2J overwrites all characters currently on the screen.

You can also use this:

write(0,"\e[1;1H\e[2J",12);
Then you don't need stdio.h.

#include <unistd.h>

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}
*/

/*
system("pause");
is wrong because it's part of Windows API and so it won't work in other
operation systems.

You should try to use just objects from C++ standard library.
A better solution will be to write:

cin.get(); ///  cin.get();  // or getchar()
return 0;
But it will also cause problems if you have other cins in your code.
 Because after each cin, you'll tap an Enter or \n which is a white space character. cin ignores this character and leaves it in the buffer zone but cin.get(), gets this remained character. So the control of the program reaches the line return 0 and the console gets closed before letting you see the results.
To solve this, we write the code as follows:
cin.ignore();
cin.get();
return 0;

You can use std::cin.get() from iostream:

#include <iostream> // std::cout, std::cin
using namespace std;

int main() {
   do {
     cout << '\n' << "Press the Enter key to continue.";
   } while (cin.get() != '\n');

   return 0;
}

 cin.get();  // or getchar()

Similarly, in C language, getchar() can be used to pause
 the program without printing the message “Press any key to continue…”.


It is explicitly said in the standard that fflush should only apply to output streams.
*/
