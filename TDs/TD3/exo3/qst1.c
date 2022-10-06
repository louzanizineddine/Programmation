#include <stdio.h>

int main() {
    char str[10];
    printf("type the string you want to caluculate it's length\n");
    scanf("%s", str);
    int i = 0;
    int len  = 0;
    while (str[i] != '\0' && len <= 10)
    { 
        len += 1;
        i++;
    }
    
    printf(" the length of you string is %d \n", len);

    return 0;
}