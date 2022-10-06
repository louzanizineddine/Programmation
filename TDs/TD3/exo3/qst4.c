#include <stdio.h>

int main() {
    char str[10];
    char c;
    printf("type the string\n");
    scanf("%s", str);
    getchar();
    printf("type a char");
    scanf("%c", &c);
    int i = 0;
    int occurence = 0;
    while (str[i] != '\0'){ 
        if (str[i] == c)
        {
            occurence +=1;
        }
        
        i++;
    }
    
    printf(" the occurence of char %c is  %d \n", c , occurence);

    return 0;
}