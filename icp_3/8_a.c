#include <stdio.h>

int main()
{   
    long double  s=0;
    long double n=9999;
    for(long double i=1;n>i;i++){
        s=s+(1/i);
        
    }
    
    printf("%Lf\n",s);
   
   
    return 0;
}