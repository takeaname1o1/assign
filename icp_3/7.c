#include <stdio.h>
// factorial number
int main()
{    int n,f=1;
scanf("%d",&n);
    for(int i=1;n>=i;i++){
       f=f*i;
    }
     printf("%d",f);

   
   
    return 0;
}