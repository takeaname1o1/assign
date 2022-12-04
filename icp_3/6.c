#include <stdio.h>
// Fibonacci series
int main()
{
    int f=0; 
   for(int i=0,j=1;999999>f;){
    // limit of f limits the series 



    printf("%d\t",f);
    // i is first term  0
    // j is second term 1
    f=i+j;
    // f is now third term 1
    i=j;
    //i is now second term 1
    j=f;
    //j is now third term  1


    // series goes on with the loop
     

   }
   
    return 0;
}