#include<stdio.h>
void x(int n);
int main ()
{
   

  int n;
  scanf("%d",&n);
    
for(int i=1;n>i;i++){
    for(int k=i;n-k>0;k++){
        printf("\t");
    }
    x(i);
    
 }







  return 0;
}
void x(int n){
 for(int i=1;i<=n;i++){
    printf("%d\t",i);}  
  for(int i=n-1;i>0;i--){
     printf("%d\t",i);  
  }
  printf("\n");
}