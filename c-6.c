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
  printf("Last Name is: %s\n", student.lastName);
}

void printGPA(struct Student student) {
  printf("GPA is: %.2f\n", student.gpa);
}

int main()
{
  struct Student s1;

  strcpy(s1.ID, "0001");
  strcpy(s1.firstName, "tao");
  strcpy(s1.lastName, "ning");
  s1.age = 30;
  s1.gpa = 3.55;

  printName(s1);
  printGPA(s1);

  return 0;
}
