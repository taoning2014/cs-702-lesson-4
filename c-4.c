#include <stdio.h>

int sum(int from, int to) {
  int sum = 0;
  int index;
  for (index = from; index <= to; index++) {
    sum += index;
  }

  return sum;
}

int main() {
  int result = sum(1, 10);
  printf("sum = %d\n", result);
  return 0;
}
