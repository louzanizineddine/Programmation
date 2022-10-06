#include <stdio.h>

int main() {
    char str1[10];
    char str2[10];
    printf("type the string 1\n");
    scanf("%s", str1);
    printf("type the string 2 \n");
    scanf("%s", str2);

    int i = 0;
    int end = 0;
    int result = 0;
    while ((str1[i] != '\0' || str2[i] != '\0') && !end ) {
        if (str1[i] > str2[i]) {
            result = -1;
            end = 1; 
        } else if (str1[i] < str2[i]) {
            result = 1;
            end = 1;
        }
        i++;
    }

    printf("the resulat of s1 compared to se in lexographic order is %d is \n" , result);


    return 0;
}