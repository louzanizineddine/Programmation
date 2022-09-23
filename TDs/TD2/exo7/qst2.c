#include <stdio.h>

int main() {
  int a, l;
  printf("Entrez la value de l\n");
  scanf("%d", &l);

  int counter = 0;
  int end_condition = 0;
  int max_k = 0;
  int k;
  for (int j = 2; j <= l; j++) {
    counter = 0;
    end_condition = 0;
    int i = j;
    while (end_condition != 1) {
      if (i % 2 == 0) {
        i = i / 2;
        counter++;
      } else {
        i = 3 * i + 1;
        counter++;
      }
      if (i == 1) {
        end_condition = 1;
      }
    }
    printf("the counter for %d is %d \n", j, counter);
    if (counter > max_k) {
      max_k = counter;
      k = j;
    }
  }

  printf("la valeur entre 2 et %d qui maximise la valeur de k est %d \n", l, k);
  return 0;
}
