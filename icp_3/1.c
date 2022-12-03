#include<stdio.h>
int
main ()
{
  int i, j, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
  for (i = 0; i < 10; i++, c1++) // loop 1
    {
      for (j = 0; j < 100; j++, c1++,c2++){} // loop 2
    }
  printf ("Counter c1: %d Inside c2= %d i=%d \n ", c1, c2, i);
  for (i = 0; i < 100; i++, c3++) //loop 3
    {
      for (j = 0; j < 10; j++, c3++, c4++){} //loop 4
      }
  printf ("Counter c3 = %d Inside c4= %d  , j=%d\n ", c3, c4,j);
  return 0;
}
