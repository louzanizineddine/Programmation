#include <stdio.h>

int main() {
    int a ,b;

    printf("type a number a\n");
    scanf("%d" , &a);
    
    printf("type a number b\n");
    scanf("%d" , &b);
    
    if ((a <= 0 && b <= 0) || (a >= 0 && b >= 0)) {
        printf("the prodcut of a * b is positive");
    }else {
        printf("the product of a * b is negative");
    }


    return 0;
}
