#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int n;
int d,i,j;
int r=0;
clock_t start,end;
start =clock();
for(i=0;i<10;i++)
{
r=0;
for(j=0;j<32;j++)
{
n=clock();
d=n&1;
r=r+ d * ( 1<<j);
}
printf("%d\t",r);
}
end=clock();
printf("\nTotalelapsedtime=%lf\n",(end - start)/1000.0);
return 0;
}