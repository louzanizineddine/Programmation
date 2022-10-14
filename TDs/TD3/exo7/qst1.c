#include <stdio.h>

int main() {
    int n = 5;
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++){
       c = a + b;
       a = b;
       b = c;
    }
    
    printf("fib(%d) = %d \n" , n , b);

    return 0;
}