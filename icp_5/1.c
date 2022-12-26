#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

  // Declare the strings
  char str1[] = "abcde";
  char str2[] = "xyz";
  char new_str[100];

  // Copy the first string into the new string
  strcpy(new_str, str1);

  // Concatenate the second string onto the end of the new string
  strcat(new_str, str2);

  // Print the new string
  printf("before shuffle string: %s\n", new_str);
  // Create a char array to store the string
  char str[100];

  // Copy the string into the char array
  strcpy(str, new_str);

  // Seed the random number generator with the current time
  srand(time(0));

  // Shuffle the characters in the string
  int i;
  for (i = 0; i < 100; i++) {
    // Generate a random number between 0 and the length of the string
    int idx1 = rand() % strlen(str);
    int idx2 = rand() % strlen(str);

    // Swap the characters at the randomly generated indices
    char temp = str[idx1];
    str[idx1] = str[idx2];
    str[idx2] = temp;
  }

  // Print the shuffled string
  printf("Shuffled string: %s\n", str);

  return 0;
}
