#include <stdio.h>

int main() {
    int a[2][2] = { { 1, 1 },
                    { 2, 2 } };
 
    int b[2][2] = { { 1, 1 },
                    { 2, 2 } };

    int c[2][2];
  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     printf("Enter the value of array1[%d][%d]\n", i, j);
  //     scanf("%d", &array1[i][j]);
  //     printf("Enter the value of array2[%d][%d]\n", i, j);
  //     scanf("%d", &array2[i][j]);
  //   }
  // }

  // looping through the lines of the first matrix
  for (int i = 0; i < 2; i++) {
    // looping throught the columns of the second matrix
    for (int j = 0; j < 2; j++) {
      // looping through the reslut matrix
      for (int k = 0; k < 2; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
       printf("c[%d][%d] = %d    " , i , j , c[i][j]);
    }
    printf("\n");
  }
  

  return 0;
}
