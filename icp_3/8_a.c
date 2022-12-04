#include <stdio.h>
//sum of 1/n
int main()
{   
    long double  s=0;
    long double n=999999999999999999;
    // n is number of terms
    for(long double i=1;n>i;i++){
        s=s+(1/i);
        
    }
    
    printf("%Lf\n",s);
   
   
    return 0;
}