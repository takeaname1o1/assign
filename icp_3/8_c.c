#include <stdio.h>
#include <math.h>
//sum of 1/2(power n)
int main()
{   
    long double  s=0,p;
    int n=19;
    for(long double i=1;n>i;i++){
        p=pow(2,i);
        s=s+(1/p);
        
    }
    
    printf("%Lf\n",s);
   
   
    return 0;
}