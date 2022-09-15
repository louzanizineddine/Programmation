#include <stdio.h>

int main() {
    int fact = 1;
    int n;
    printf("type a number to calculate it's factorial \n");
  
    scanf("%d" , &n);

    while (n < 0)
    {
        printf("please type a positive integer");
        scanf("%d" , &n);
    }
    


    for (int i = 1; i <= n; i++)
    {
       fact = fact * i;
    }
    
    printf("le fact de n est %d\n" , fact);

    return 2;


}