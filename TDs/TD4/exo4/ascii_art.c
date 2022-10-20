#include <stdio.h>

void line_of_Nchar(int n) {
    for (int i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");    
}

void square_char(int n) {
    for (int i = 1; i <= n; i++)
    {
        line_of_Nchar(n);
    }
    
}

int main() {
    
    square_char(30);
    return 0;
}