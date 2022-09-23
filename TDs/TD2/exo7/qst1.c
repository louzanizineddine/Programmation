#include <stdio.h>

int main() {
  int a, k;
  printf("Entrer la valeur de depart a \n");
  scanf(" %d", &a);
  printf("combien de valeurs vous voulez affichez k \n");
  scanf("%d", &k);

  int counter = 0;
  int end_condition = 0;

  while (counter < k && end_condition != 1) {
    if (a % 2 == 0) {

      a = a / 2;
      printf("U%d = %d \n", counter, a);
      counter++;
    } else {
      a = 3 * a + 1;
      printf("U%d = %d \n", counter, a);
      counter++;
    }
    if (a == 1) {
      end_condition = 1;
    }
  }

  return 0;
}
