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

  // looping through the lines of the first matrix
  for (int i = 0; i < 2; i++) {
    // looping throught the columns of the second matrix
    for (int j = 0; j < 2; j++) {
      // looping through the reslut matrix
      for (int k = 0; k < 2; k++) {
      }
    }
  }

  return 0;
}
