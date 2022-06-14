#include <stdio.h>

void f(int j) {
  j++;
}

int main() {
  int i = 20;
  printf("i = %d\n", i);
  f(i);
  printf("i = %d\n", i);

  return 0;
}
