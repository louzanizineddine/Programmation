#include <stdio.h>
#include <math.h>

float peremeter (float r) {
    return 2 * 3.14 * r;
}

int main() {
    float resulst = peremeter(1);
    printf("the perimeter is %f = \n" , resulst);
    return 0;
}