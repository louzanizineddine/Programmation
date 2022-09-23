#include <stdio.h>

int main() {
  int k;
  int is_prime = 0;

  printf("type a number to know if it's prime or not \n");
  scanf("%d", &k);

  for (int i = 2; i <= k; i++) {
    is_prime = 0;
    int j = 2;
    while (i % j != 0) {
      if (i % j == 0) {
        is_prime = 1;
      }
      j++;
    }

    if (is_prime == 0) {
      printf("the number %d is prime \n", i);
    }
  }

  return 0;
}
