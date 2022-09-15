#include <stdio.h>


int main() {
    int a;
    printf("type a number to know if it is odd or even \n");
    scanf("%d" , &a);
    if (a % 2 == 0) {
        printf("the number is even");
    }else{
        printf("the number is odd");
    }


    return 0;
}