#include <stdio.h>

int main() {
  int value;
  int sum = 0;
  int number_of_elements = 0;
  while (scanf("%d", &value) != EOF) {
    printf("the value is %d \n", value);
    sum += value;
    number_of_elements++;
  }

  printf("la moyenne est %f\n", sum / (float)number_of_elements);
  return 0;
}
