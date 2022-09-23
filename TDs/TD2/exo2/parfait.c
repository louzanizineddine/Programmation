#include <stdio.h>

int main() {
  int n;
  int sum_of_divs = 1;
  printf("type a numbe to know if it is perfect");

  scanf("%d", &n);

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      sum_of_divs += i;
    }
  }

  if (sum_of_divs == n) {
    printf("the number is parfait\n");
  }

  // first of all find all devisors

  return 0;
}
