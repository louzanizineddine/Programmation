#include <stdio.h>

char number_to_char(int number) {
    return number;
}

int char_to_number(char c){
    return c;
}

void show_ascii_table() {
    for (int i = 0; i < 128; i++)
    {
       printf("ascii(%d) = %c \n", char_to_number(number_to_char(i)) ,  number_to_char(i));
    }
    
}

int main() {
    show_ascii_table();
    return 0;
}