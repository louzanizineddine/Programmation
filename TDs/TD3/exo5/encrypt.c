#include <stdio.h>

int main() {
  char str[10];
  int k;
  printf("type a string to encrypt \n");
  scanf("%s", str);
  printf("type the degree of encryption");
  scanf("%d", &k);
  printf("here is the string you chose %s | degress of encryption k = %d \n",
         str, k);
  int i = 0; // to loop throught the string

  while (str[i] != '\0') {
    int encrypted_letter = str[i] + k;
    if (encrypted_letter > 122) {
      int diff = encrypted_letter - 122;
      str[i] = 97 + diff - 1;
    } else {
      str[i] = str[i] + k;
    }

    i += 1;
  }

  printf("the encrypted string => %s \n", str);
  return 0;
}
