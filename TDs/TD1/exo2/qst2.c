#include <stdio.h>

int main() {
    int times;
    int sum = 0;
    float average = 0;
    int current_num;
    printf(" \t\t\t  *** la moyenne  ***   \t\t\t \n");
    
    printf("how many numbers you want to calculate their average \n");
    scanf("%d" , &times);

    for (int i = 0; i < times; i++){
        printf("type the number n:%d\n" , i + 1);
        scanf("%d" ,  &current_num);
        sum = sum + current_num;
        current_num = 0;   
    }

    printf("the sum = %d\n" , sum);
    average = sum / (float) times;
    printf("the average is %f" , average);

    return 0;
}