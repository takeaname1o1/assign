#include <stdio.h>
#include <string.h>

int main() {
  char x[100];
   scanf("%[^\n]s",x);
  printf("password: %s\n", x);
  for(int i=0;5>i;i++){
    x[i]=x[i]^1;
  }
  printf("encrypted: %s\n", x);
  for(int i=0;5>i;i++){
    x[i]=x[i]^1;
  }printf("dencrypted: %s\n", x);

  return 0;
}
