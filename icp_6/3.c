#include <stdio.h>
// delete binary file
int main(void) {
  // Delete the file "test.bin"
  if (remove("3") == 0) {
    printf("File deleted successfully.\n");
  } else {
    printf("Error deleting file.\n");
  }

  return 0;
}