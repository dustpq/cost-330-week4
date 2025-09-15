#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Professor {
  char firstName[20];
  char lastName[20];
  double salary;
};

int main() {
  struct Professor Professor1;
  strcpy(Professor1.firstName, "Dustin");
  strcpy(Professor1.lastName, "Quintanilla");
  Professor1.salary = 10000;
  printf("%s %lu", "Size of Professor: ", sizeof(Professor1));
  printf("\n");

  struct Professor ProfessorArr1[100];
  printf("%s %lu", "Size of ProfessorArr1: ", sizeof(ProfessorArr1));
  printf("\n");

  int arr2_size = 200;
  struct Professor *ProfessorArr2 =
      (struct Professor *)malloc(arr2_size * sizeof(struct Professor));
  printf("%s %lu", "Size of ProfessorArr2: ", sizeof(*ProfessorArr2));
  printf("\n");

  printf("Address of ProfessorArr1[0]: %p\n", (void *)&ProfessorArr1[0]);
  printf("Address of ProfessorArr1[99]: %p\n", (void *)&ProfessorArr1[99]);
  printf("Address of ProfessorArr2[0]: %p\n", (void *)&ProfessorArr2[0]);
  printf("Address of ProfessorArr1[99]: %p\n", (void *)&ProfessorArr1[99]);

  return 0;
};
