#include <stdio.h>
#define square(x) x* x
int main()
{
    int x = 36 / square(6);
    printf("%d", x);
    return 0;
}