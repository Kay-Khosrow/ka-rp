#include <stdio.h>

int numbers(int a, int b);

int main(void) {
  int w = numbers(2, 1);
  fprintf(stderr, "%s\n\n%d\n", "salaam", w);
  return 0;
}

int numbers(int a, int b) { return a * b; }
