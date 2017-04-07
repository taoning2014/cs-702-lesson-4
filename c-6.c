#include <stdio.h>
#include <string.h>

struct Student {
  char ID[10];
  char firstName[10];
  char lastName[10];
  int age;
  float gpa;
};

void printName(struct Student student) {
  printf("First Name is: %s\n", student.firstName);
}

int main()
{
  struct Student s1;
  struct Student students[2];

  strcpy(s1.ID, "0001");
  strcpy(s1.firstName, "tao");
  strcpy(s1.lastName, "ning");
  s1.age = 30;
  s1.gpa = 3.55;

  // printf("First Name is: %s\n", s1.firstName);
  printName(s1);
  printf("GPA is: %.2f\n", s1.gpa);

  return 0;
}
