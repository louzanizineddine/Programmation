#include <stdio.h>

int main() {

  srand(time(NULL));
  int value = rand();
  value = value % 101;
  int user_choice = 0;
  int is_correct = 0;
  int number_of_tries = 1;

  printf("the value chosen by the computer is %d", value);

  while (is_correct == 0 && number_of_tries < 10) {

    scanf("%d", &user_choice);
    if (user_choice == value) {
      printf("great you go the right number in %d tires \n", number_of_tries);
      is_correct = 1;
    } else if (user_choice > value) {
      printf("you choise is greater \n");
    } else {
      printf("your choise is smaller \n");
    }
    number_of_tries = number_of_tries + 1;
  }

  if (number_of_tries == 10) {
    printf("you lost so tires so many times \n");
  }
  return 0;
}
