#include<stdio.h>

int main() {
	int tab[20];
	for (int i = 0 ; i < 20 ; i++) {
		printf("tapez la valuer de %d eme\n", i);
		scanf("%d", &tab[i]);	
	}

	for (int i = 0 ; i < 20 ; i++) {
		printf("tab[%d] = %d \n", i  , tab[i]);
	}
	return 0;
}
