#include <stdio.h>
#include <string.h>

struct Student {
  int ID;
  char firstName[10];
  char lastName[10];
  int age;
  float gpa;
};

void printGPA(struct Student student) {
  printf("GPA is: %.2f\n", student.gpa);
}

void createStudents(struct Student students[]) {
  int i;
  float gpa = 3.0;

  for (i = 0; i < 4; i++) {
    students[i].ID = i;
    students[i].age = 30;
    students[i].gpa = gpa + i / 5.0;
  }
}

float highestGPA(struct Student students[]) {
  float curGPA = 0;

  for (int i = 0; i < 4; i++) {
    if (curGPA < students[i].gpa) {
      curGPA = students[i].gpa;
    }
  }

  return curGPA;
}

int main()
{
  struct Student students[4];
  createStudents(students);

  printGPA(students[1]);
  printf("Highest GPA is: %.2f\n", highestGPA(students));

  return 0;
}
