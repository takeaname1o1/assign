#include <stdio.h>
#include <math.h>
#include "random.h"

#define N 10  // Number of elements in the arrays

int main(void) {
  int i;
  double X[2][N], Y[2][N], sum = 0.0;

  // Initialize the arrays with random numbers
  for (i = 0; i < N; i++) {
    X[0][i] = random32();
    X[1][i] = random32();
    Y[0][i] = random32();
    Y[1][i] = random32();
  }

  // Calculate the sum of the terms in the equation
  for (i = 0; i < N; i++) {
    sum += (X[1][i] - X[0][i]) * (X[1][i] - X[0][i]) - (Y[1][i] - Y[0][i]) * (Y[1][i] - Y[0][i]);
  }

  // Calculate the result of the equation
  double result = sum / (N - 1);

  // Print the result
  printf("Result: %f\n", result);

  return 0;
}
