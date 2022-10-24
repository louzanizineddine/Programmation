#include <stdio.h>

int main() {
    int i;
    int *p;

    i = 19;
    p = &i;

    printf("i = %d \n" , i);

    *p = 12;

    printf("i = %d \n" , i);

    printf("i address = %p\n", &i);

    printf("p address = %p \n" , p);
    printf("p = %d \n" , *p);
    return 0;
}