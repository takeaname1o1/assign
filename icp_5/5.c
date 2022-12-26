#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_valid_email_format(const char *email) {
    // Check the length of the email
    int len = strlen(email);
    if (len < 6 || len > 254) {
        return false;
    }

    // Check for the '@' symbol
    int at_pos = -1;
    for (int i = 0; i < len; i++) {
        if (email[i] == '@') {
            at_pos = i;
            break;
        }
    }
    if (at_pos == -1) {
        return false;
    }

    // Check that the '@' symbol is not at the beginning or end of the email
    if (at_pos == 0 || at_pos == len - 1) {
        return false;
    }

    // Check for a period (.) after the '@' symbol
    bool period_found = false;
    for (int i = at_pos; i < len; i++) {
        if (email[i] == '.') {
            period_found = true;
            break;
        }
    }
    if (!period_found) {
        return false;
    }

    // Check for invalid characters in the email
    for (int i = 0; i < len; i++) {
        char c = email[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
              (c >= '0' && c <= '9') || c == '@' || c == '.' || c == '-' ||
              c == '_' || c == '+')) {
            return false;
        }
    }

    for (int i = 0,j=1; i < len;j++, i++){
        char p=email[i];
        char q=email[j];
        if((p==q && p=='.')||(p=='.'& q=='@')||(q=='.'& p=='@')){
            return false;
        }
    }

    // If all checks pass, the email format is valid
    return true;
}

int main() {
    // Test the function
    printf("%d\n", is_valid_email_format("user@example.com"));    // 1
    printf("%d\n", is_valid_email_format("user@example"));       // 0
    printf("%d\n", is_valid_email_format("user@.com"));          // 0
    printf("%d\n", is_valid_email_format("@example.com"));       // 0

    return 0;
}
