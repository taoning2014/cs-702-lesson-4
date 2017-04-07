#include <stdio.h>

int sum(int from, int to) {
  int sum = 0;
  int index = from;

  while (index <= to) {
    sum += index;
    index++;
  }

  return sum;
}

int main() {
  int result = sum(1, 100);
  printf("sum = %d\n", result);
  return 0;
}
