#include <stdio.h>

int main()
{
   int n,r=0,s;
   scanf("%d",&n);
  //////// printf("%d\n",n);
   for(int i=0;n>0;i++){
    s=n%10;
    r=r*10+s;
    n=n/10;
   }
   printf("%d\n",r);
    

    return 0;
}