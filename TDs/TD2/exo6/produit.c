#include <stdio.h>

int main() {
  int a, b, r;

  printf("type a \n");
  scanf("%d", &a);
  printf("type b\n");
  scanf("%d", &b);

  r = 0;

  while (b != 0) {
    if (b == 0) {
      return r;
    }
    if (b % 2 == 0) {
      a = 2 * a;
      b = b / 2;
    } else {
      b = b - 1;
      a = a + r;
    }
  }

  printf(" a * b = %d \n", a);

  return 0;
}
