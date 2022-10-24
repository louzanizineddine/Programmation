#include <stdio.h>

void show_array(int *tab , int size) {
    for (int i = 0; i < size; i++)
    {
        printf("tab[%d] = %d | " , i , tab[i]);
    }
    printf("\n");
}

void tri_a_bull_dec(int* arr , int  size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

    show_array(&arr[0] , size);
    
}

int main() {
    int tab[5] = { 2 , 1 , 5, 8 , 76};
    show_array(tab , 5);
    tri_a_bull_dec(&tab[0]  , 5);
    show_array(&tab[0] , 5);
     return 0;
}