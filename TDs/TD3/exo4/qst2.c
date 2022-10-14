#include <stdio.h>

int main() {
  int frequecy_of_letters[26];
  char str[30];
  // initializing the values of the array to 0;
  for (int i = 0; i <= 25; i++) {
    frequecy_of_letters[i] = 0;
  }

  printf("the the string you want \n");
  scanf("%s", str);
  printf("%d\n", 'a');
  int i = 0;

  while (str[i] != '\0') {
    // if the letter has not been counted before
    if (frequecy_of_letters[str[i] - 97] == 0) {
      int j = i + 1;
      int counter = 1;
      while (str[j] != '\0') {
        if (str[j] == str[i]) {
          counter += 1;
        }
        j++;
      }

      frequecy_of_letters[str[i] - 97] = counter;
    }

    i++;
  }
  int min_letter = 100000; // initialiser a la taille de la chaine
  int index_of_min_letter;
  int max_letter = frequecy_of_letters[0];
  int index_of_max_letter;
  for (int i = 0; i <= 25; i++) {
    printf(" the frequency of the letter %c is %d \n", 97 + i,
           frequecy_of_letters[i]);
  }

  for (int i = 0; i <= 25; i++) {
    if (frequecy_of_letters[i] != 0) {
      if (frequecy_of_letters[i] > max_letter) {
        max_letter = frequecy_of_letters[i];
        index_of_max_letter = i;
      }
      if (frequecy_of_letters[i] < min_letter) {
        min_letter = frequecy_of_letters[i];
        index_of_min_letter = i;
      }
    }
  }
  printf("%d %d \n", index_of_max_letter, index_of_min_letter);
  printf("the letter the most appeared is %c \n", index_of_max_letter + 97);

  printf("the letter the lest appeared is %c \n", index_of_min_letter + 97);

  return 0;
}
