#include<iostream>
#include <time.h>
using namespace std;
int main()
{
    clock_t tStart = clock();
    int series[]= {0,1},terms,temp;
    /*   cout<<"\nENTER NUMBER OF TERMS : ";
      cin>>terms; */
    terms = 777 ;
    cout<<"THE SERIES IS : ";
    for(int i=0; i<terms; ++i)
    {
        cout<<series[0]<<" ";
        temp=series[0]+series[1];
        series[0]=series[1];
        series[1]=temp;
    }
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}
