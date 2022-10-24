#include <stdio.h>

int min_tab(int tab[] , int size) {
    int min = tab[0];
    for (int i = 0; i < size; i++)
    {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}

int max_tab(int tab[] , int size) {
    int max= tab[0];
    for (int i = 0; i < size; i++)
    {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

float moyenne_tab(int tab[] , int size) {
    float moyenne =  0;
    for (int i = 0; i < size ; i++)
    {
        moyenne += tab[i];
    }

    return moyenne / (float)size;
    
}

int values_less_than_n(int tab[] , int size , int n) {
    int x = 0;
    for (int i = 0; i < size ; i++)
    {
        if(tab[i] < n) {
            x += 1;
        }
    }
    return x;
}


int main() {
    int tab[5] = {1 , 2 , 3 , 4, 5};
    int min = min_tab(tab , 5);
    int max = max_tab(tab , 5);
    float moyenne = moyenne_tab(tab , 5);
    int nmbr = values_less_than_n(tab , 5 , 4);
    printf("min  = %d | max =m %d | moyenne = %f | nmbr = | %d \n" , min , max , moyenne ,nmbr);
}