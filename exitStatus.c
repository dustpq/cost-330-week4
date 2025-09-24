// The goal is to make a micro shell.
// Include ability to run "ls", and "mkdir"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("\033[2J\033[H");
  bool valid = false;

  do {
    printf("Select an option from below:\n");
    printf("1.) ls\n2.) mkdir\n");

    int input;
    int scan_result = scanf("%d", &input);

    if (scan_result == 1) {
      if (input == 1) {
        printf("Current folder's contents:\n");
        system("ls");
        valid = true;
      } else if (input == 2) {
        printf("Creating newdir.");
        system("mkdir newdir");
        valid = true;
      } else {
        printf("\033[2J\033[H");
        printf("ERROR: Invalid input. Try again.\n");
      }
    } else {
      printf("\033[2J\033[H");
      printf("ERROR: Invalid input. Try again.\n");
      while (getchar() != '\n')
        ;
    };

  } while (valid == false);

  return 0;
};
