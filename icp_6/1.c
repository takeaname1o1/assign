#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n = 30;  // maximum number to check for primality
  int i, j;

  // Create an array of integers from 2 to n
  int *primes = malloc((n - 1) * sizeof(int));
  for (i = 0; i < n - 1; i++) {
    primes[i] = i + 2;
  }

  // Set the value at index 0 and index 1 to 0
  primes[0] = 0;
  primes[1] = 0;

  // Iterate through the array and mark composite numbers as not prime
  for (i = 2; i < sqrt(n); i++) {
    if (primes[i] != 0) {
      for (j = i * i; j < n; j += i) {
        primes[j - 2] = 0;
      }
    }
  }

  // Print the prime numbers
  printf("Prime numbers: ");
  for (i = 0; i < n - 1; i++) {
    if (primes[i] != 0) {
      printf("%d ", primes[i]);
    }
  }
  printf("\n");

  free(primes);

  return 0;
}
