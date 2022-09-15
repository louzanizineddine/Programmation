#include <stdio.h>

#define ONE_EURO_TO_FRNAC 6.55957

int main() {
    float money_franc;
    float money_euro;

    printf("\t\t\t ***Program to convert FRANC to EURO *** \n");

    scanf("%f" , &money_franc);

    printf("money in franc is : %f" , money_franc);

    money_euro = money_franc / ONE_EURO_TO_FRNAC;

    printf("%f franc = %f euro" , money_franc , money_euro);  


    return 0;
}