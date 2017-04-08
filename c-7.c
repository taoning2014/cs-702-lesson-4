#include <stdio.h>
#include <string.h>

struct GraduateStudent {
  char ID[10];
  char firstName[10];
  char lastName[10];
  int age;
  float gpa;
  int papers;
};

void printName(struct GraduateStudent student) {
  printf("First Name is: %s\n", student.firstName);
  printf("Last Name is: %s\n", student.lastName);
}

void printGPA(struct GraduateStudent student) {
  printf("GPA is: %.2f\n", student.gpa);
}

void printPapers(struct GraduateStudent student) {
  printf("Publish papers: %d\n", student.papers);
}

int main()
{
  struct GraduateStudent g1;

  strcpy(g1.ID, "0001");
  strcpy(g1.firstName, "tao");
  strcpy(g1.lastName, "ning");
  g1.age = 30;
  g1.gpa = 3.55;
  g1.papers = 0;

  printName(g1);
  printGPA(g1);
  printPapers(g1);

  return 0;
}
