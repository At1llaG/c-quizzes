#include <stdio.h>

void f(int **in) {
  (**in)++;
}

int main() {
  int i = 20;
  printf("i = %d\n", i);
  int *iPtr = &i;
  int **jPtr= &iPtr;
  printf("iPtr = %d\n", iPtr);
  printf("jPtr = %d\n", jPtr);
  printf("**jPtr = %d\n", **jPtr);
  f(jPtr);
  printf("i after function = %d\n", i);
  

  return 0;
}
