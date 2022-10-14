#include <stdio.h>

int main() {
  char str[10];
  int k;
  printf("type a string to decrypt \n");
  scanf("%s", str);
  printf("type the degree of decryption");
  scanf("%d", &k);
  printf("here is the string you chose %s | degress of decryption k = %d \n",
         str, k);
  int i = 0; // to loop throught the string

  while (str[i] != '\0') {
    int decrypted_letter = str[i] - k;
    if (decrypted_letter < 'a') {
      int diff = 'a' - decrypted_letter;
      str[i] = 'z' - diff + 1;
    } else {
      str[i] = str[i] - k;
    }

    i += 1;
  }

  printf("the decrypted string => %s \n", str);
  return 0;
}
