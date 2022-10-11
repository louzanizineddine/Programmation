#include <stdio.h>

int main() {
  int array1[2][2];
  int array2[2][2];
  int result[2][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("Enter the value of array1[%d][%d]\n", i, j);
      scanf("%d", &array1[i][j]);
      printf("Enter the value of array2[%d][%d]\n", i, j);
      scanf("%d", &array2[i][j]);
    }
  }

  return 0;
}
