#include <stdio.h>

int main() {
  int n;
  int condition = 0;
  // this is my first commment
  printf("type a number to know if it's prime or not \n");
  scanf("%d", &n);

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      printf("the number %d is not prime\n", n);
      condition = 1;
      break;
    }
  }

  if (condition == 0) {
    printf(" the number prime \n");
  }

  return 0;
}
