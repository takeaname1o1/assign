#include <stdio.h>
#include <math.h>
//sum of 1/x(power n)
// to compile use : gcc 8_b.c -lm  
int main()
{   
    long double  s=0,p;
    int n=19,x;
    scanf("%d %d ", &n , &x);
    for(long double i=1;n>i;i++){
        p=pow(x,i);
        // taking x = 5
        s=s+(1/p);
        
    }
    
    printf("%Lf\n",s);
   
   
    return 0;
}