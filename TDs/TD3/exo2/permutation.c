#include <stdio.h>

int main() {
  int n;
  printf("type the length of the array \n");
  scanf("%d", &n);
  int tab[n];
  for (int i = 0; i < n; i++) {
    printf("tab[%d] = ", i + 1);
    scanf("%d", &tab[i]);
  }
  for (int i = 0; i < n; i++) {
    printf("tab[%d] = %d | ", i, tab[i]);
  }
  // the basic idea
  int is_array_perm = 1; // we suppose that that array is a permutation
  int i = 0;
  int nmb_occ;
  while (is_array_perm && i < n) {
    nmb_occ = 0;
    if (tab[i] < n) {
      for (int j = 0; j < n; j++) {
        if (tab[i] == tab[j]) {
          nmb_occ += 1;
          printf("number of occr for %d is %d", tab[i], nmb_occ);
        }
      }
      if (nmb_occ > 1) {
        is_array_perm = 0;
        printf("the array is not a permutaion\n");
      }
    } else {
      is_array_perm = 0;
      printf("the array is not a permutaion\n");
    }
    i++;
  }
  if (is_array_perm == 1) {
    printf("the array is a permutaion \n");
  }
  return 0;
}
