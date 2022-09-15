#include <stdio.h>
#include <math.h>

int main() {
    float a ,b , c , d;

    printf("type a\n");
    scanf("%f" , &a);
    
    printf("type  b\n");
    scanf("%f" , &b);
    
    printf("type c\n");
    scanf("%f" , &c);
    
    d = (b * b) - ( 4 * a * c);
    printf("delta = %f \n" , d);

    if (d < 0) {
        printf("the equation %fx^2 + %fx + %f does not solutions in R" , a , b , c);
    }else if ( d == 0) {

        printf("the equation has only one solution x = %f \n" , (- b / (float)(2 * a)));
    }else {

        printf("the equation has two solutions which are x1 = %f and x2 = %f" , 
        ((- b + sqrtf(d)) / (float)(2 * a))  , ( (- b - sqrtf(d)) / (float)(2 * a)));
    }

    return 0;
}