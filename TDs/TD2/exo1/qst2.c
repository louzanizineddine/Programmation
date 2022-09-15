#include <stdio.h>

int main() {
    int n;
    int origin_n;
    int number_of_digits = 0;
    printf("type a number \n");
    scanf("%d" , &n);

    while (n < 0)
    {
        printf("please type a positive integer");
        scanf("%d" , &n);
    }

    origin_n = n;

    while (1)
    {
        if (n % 10 != 0){
            number_of_digits = number_of_digits + 1; 
        } 
        n = n / 10;            
        if (n == 0) {
            break;
        }  
    }
    
    // number_of_digits = number_of_digits + 1;

    printf("the number of non null digits in the %d is %d \n"  , origin_n , number_of_digits);
    
    return 0;
}