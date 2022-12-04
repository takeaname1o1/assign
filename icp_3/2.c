#include<stdio.h>
void x (int n);
int
main ()
{


  int n;
  scanf ("%d", &n);
  n++;
  
  for (int i = 1; n > i; i++)
    {
      for (int k = i; n - k > 0; k++) 
      //this loop gives space
	{
	  printf ("\t");
	}  
     // initiates the funtion with i input
      x (i);

    }







  return 0;
}

// this function is prints the horizontal output
void x (int n)
{

  for (int i = 1; i <= n; i++)
    {
      printf ("%d\t", i);
    }
  for (int i = n - 1; i > 0; i--)
    {
      printf ("%d\t", i);
    }
  printf ("\n");
}
