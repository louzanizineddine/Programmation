#include <stdio.h>



int main() {
    char str[7];
    printf("type the string\n");
    scanf("%s", str);
    printf("%s\n" , str);
    int i = 0;
    int j = 6;
    char temp;
    int end = 0;
    while(i != j && !end) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        printf(" i = %d " , i);
        j--;
        if(i > j) {
            end = 1;
        }
    }

    printf("%s\n" , str);

    return 0;
}