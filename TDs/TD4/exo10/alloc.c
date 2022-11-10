#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float * create_farray(int n) {
    float  *ptr;
    ptr = (float *)malloc(sizeof(n));
    return ptr;
}




void fill_frandomly(float *arr , int n) {
    srand(time(NULL));   // Initialization, should only be called once.

    for (int i = 0; i < n; i++)
    {
        *(arr + i) = (float)(rand() % 100); 
    }
    
}

void tri_a_bull_dec(float* arr , int  size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) < *(arr + j)) {
                float temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
        
    }
}

void show_farr(float *arr , int n) {
    for (int i = 0; i < n; i++)
    {
        printf(" %f | ", *(arr + i));
    }

    printf("\n");
    
}


int main() {
    int n;
    float *arr;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    arr = create_farray(n);
    fill_frandomly(arr , n);
    tri_a_bull_dec(arr , n);
    show_farr(arr , n);
} 