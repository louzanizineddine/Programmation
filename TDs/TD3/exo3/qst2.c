#include <stdio.h>

int main() {
    char str[10];
    printf("type the string\n");
    scanf("%s", str);
    int i = 0;
    int len  = i;
    int len_char = 0;
    int len_digits = 0;
    while (str[i] != '\0' && len <= 10)
    { 
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            len_char += 1; 
        }
        if (str[i] >= '1' && str[i] <= '9') {
            len_digits += 1;
        }
        len += 1;
        i++;
    }
    
    printf(" the length of you string is %d \n", len);
    printf(" the length of chars in your sting is %d \n", len_char);
    printf(" the length of digits in  you string is %d \n", len_digits);

    return 0;
}