#include<stdio.h>
int f (int n);// factorial
int c (int n,int r); // combination operator
int h (int n); // horizontal output
int main ()
{
   
    int n=9;
    for(int i=0;n>=i;i++){

        for(int j=1;n>j;j++){
            printf("\t");
        }
        h(i);
        printf("\n");
        n--;
    
    }

    

    
   
  return 0;
}
int h (int n){
for(int i=0;n>=i;i++){
        printf("\t%d\t",c(n,i));
    }
}
int f( int n)
// factorial
{
    int f=1;
    for(int i=n;i>0;i--){
        f=f*i;
    }
    return f;
}
int c (int n,int r)
// combination operator
{
    int c=f(n)/(f(n-r)*f(r));
    return c;
}