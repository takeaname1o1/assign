#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MIN_PASSWORD_LENGTH 10
#define NUM_UPPER_LETTERS 2
#define NUM_LOWER_LETTERS 2
#define NUM_SYMBOLS 2
#define NUM_DIGITS 2

int main(void) {
char password[256]; // Array to store the password

// Get the password from the user
printf("Enter a password: ");
scanf("%s", password);

// Check the length of the password
if (strlen(password) < MIN_PASSWORD_LENGTH) {
printf("The password is too short.\n");
return 1;
}

// Check for the required number of upper letters, lower letters, symbols, and digits
int num_upper_letters = 0;
int num_lower_letters = 0;
int num_symbols = 0;
int num_digits = 0;
for (int i = 0; i < strlen(password); i++) {
if (isupper(password[i])) {
num_upper_letters++;
} else if (islower(password[i])) {
num_lower_letters++;
} else if (isdigit(password[i])) {
num_digits++;
} else {
num_symbols++;
}
}
if (num_upper_letters < NUM_UPPER_LETTERS || num_lower_letters < NUM_LOWER_LETTERS ||
num_symbols < NUM_SYMBOLS || num_digits < NUM_DIGITS) {
printf("The password does not meet the requirements.\n");
return 1;
}

// Check for consecutive symbols
for (int i = 0; i < strlen(password) - 1; i++) {
if (!isalnum(password[i]) && !isalnum(password[i + 1])) {
printf("The password contains consecutive symbols.\n");
return 1;
}
}

// Check if all characters are the same
int all_same = 1;
for (int i = 1; i < strlen(password); i++) {
if (password[i] != password[0]) {
all_same = 0;
break;
}
}
if (all_same) {
printf("The password consists of all the same characters.\n");
return 1;
}

// If the password passes all the checks, it is valid
printf("The password is valid.\n");
return 0;
}