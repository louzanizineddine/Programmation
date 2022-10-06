#include <stdio.h>

int main() {
    char str[10];
    printf("type the string\n");
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0')
    { 
        str[i] = str[i] - 32;
        printf("%c" , str[i]);
        i++;
    }
    return 0;
}