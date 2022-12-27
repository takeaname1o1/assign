#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 8  // Length of the password
#define SYMBOLS "!@#$%^&*()_+"  // String containing the symbols to use
#define NUMBERS "0123456789"  // String containing the numbers to use

int main(void) {
  char password[LENGTH + 1];  // Array to store the password
  int i;

  // Initialize the random number generator
  srand(time(NULL));

  // Generate the password
  for (i = 0; i < LENGTH; i++) {
    // Select a random character from the appropriate string
    switch (i) {
      case 0:  // First character should be a small letter
        password[i] = 'a' + rand() % 26;
        break;
      case 1:  // Second character should be a capital letter
        password[i] = 'A' + rand() % 26;
        break;
      case 2:  // Third character should be a symbol
        password[i] = SYMBOLS[rand() % (sizeof(SYMBOLS) - 1)];
        break;
      case 3:  // Fourth character should be a digit
        password[i] = NUMBERS[rand() % (sizeof(NUMBERS) - 1)];
        break;
      default:  // Remaining characters can be any of the above
        switch (rand() % 4) {
          case 0:
            password[i] = 'a' + rand() % 26;
            break;
          case 1:
            password[i] = 'A' + rand() % 26;
            break;
          case 2:
            password[i] = SYMBOLS[rand() % (sizeof(SYMBOLS) - 1)];
            break;
          case 3:
            password[i] = NUMBERS[rand() % (sizeof(NUMBERS) - 1)];
            break;
        }
        break;
    }
  }

  // Terminate the password string
  password[LENGTH] = '\0';

  // Print the password
  printf("Random password: %s\n", password);

  return 0;
}
