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
    int indice = -1;
    int found = 0;
    while (str[i] != '\0' && !found){ 
        if (str[i] == c)
        {
            indice = i;
            found = 1;
        }
        
        i++;
    }
    
    printf("the index is %d \n", indice);

    return 0;
}