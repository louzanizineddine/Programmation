#include <stdio.h>


int main() {
    int a , b , temp;
    printf("type a number a\n");
    scanf("%d" , &a);
    
    printf("type a number b\n");
    scanf("%d" , &b);
    
    if (a < b) {
        temp = b;
        b = a;
        a = temp;
    }

    printf("a = %d and b = %d" , a , b);


    return 0;
}