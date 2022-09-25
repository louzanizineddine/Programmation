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

	// etape  recherche de min 
	
	int min = tab[0];
	for (int i = 0 ; i < 20 ; i++){
		if (tab[i] < min ) {
			min = i;		
		}
	} 
	int max = tab[0];
	for (int i = 0 ; i < 20 ; i++){
		if (tab[i] > max ) {
			max = i;		
		}
	}
	
	printf("indice de  min est %d \n" , min);
	printf("indice de  max est %d \n" , max);

	// recherche de valeurs < a n
	int cnt = 0;
	for (int i = 0 ; i < 20 ; i++){
		if (tab[i] < tab[min] ) {
			cnt +=1;		
		}
	}
	
	printf("le nombre de valerus < au min %d est %d \n" , tab[min] , cnt);
	
	
	return 0;
}
