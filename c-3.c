#include <stdio.h>

void swap(int*, int*);

int main()
{
   int x = 100, y = 200;

   printf("Before Swapping\nx = %d\ny = %d\n", x, y);

   swap(&x, &y);

   printf("After Swapping\nx = %d\ny = %d\n", x, y);

   return 0;
}

void swap(int *a, int *b)
{
   int temp;

   temp = *b;
   *b   = *a;
   *a   = temp;
}
