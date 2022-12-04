#include <stdio.h>
// reverse the input number
int main()
{
   int n,r=0,s;
   scanf("%d",&n);
   
   for(int i=0;n>0;i++){
    s=n%10; 
    // extracts last digit
    r=r*10+s; 
    // adds last digit to new number
    n=n/10;  
    // removes last digit
   }
   printf("%d\n",r);
    

    return 0;
}