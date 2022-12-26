#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
char number[256]; // Array to store the number

// Get the number from the user
printf("Enter a floating point number: ");
scanf("%s", number);

// Check if the number starts with a digit or a sign
if (!isdigit(number[0]) && number[0] != '+' && number[0] != '-') {
printf("The number is invalid.\n");
return 1;
}

// Check if the number has a decimal point or an exponent
int has_decimal_point = 0;
int has_exponent = 0;
for (int i = 1; i < strlen(number); i++) {
if (number[i] == '.') {
if (has_decimal_point || has_exponent) {
printf("The number is invalid.\n");
return 1;
}
has_decimal_point = 1;
} else if (number[i] == 'E' || number[i] == 'e') {
if (has_exponent) {
printf("The number is invalid.\n");
return 1;
}
has_exponent = 1;
} else if (!isdigit(number[i]) && number[i] != '+' && number[i] != '-') {
printf("The number is invalid.\n");
return 1;
}
}

// If the number passes all the checks, it is valid
printf("The number is valid.\n");
return 0;
}