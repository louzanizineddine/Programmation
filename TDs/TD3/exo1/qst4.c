#include<stdio.h>

int main() {
	int n;
	printf("tapez la taille de tableau");
	scanf("%d",&n);

	int tab[n];
	int k;
	
	printf("tapez la valeur de k");
	scanf("%d",&k);
	
	for (int i = 0 ; i < n ; i++) {
		printf("tapez la valuer de %d eme\n", i);
		scanf("%d", &tab[i]);	
	}

	for (int i = 0 ; i < n ; i++) {
		printf("tab[%d] = %d \n", i  , tab[i]);
	}
	
	int last_element;
	int first_element;
	int j = 1;
	int number_of_iterations = k % n;
	if (number_of_iterations != 0) {
		while (j <= number_of_iterations){
			first_element = tab[0];
			last_element  = tab[n - 1];
			printf("first element is %d\n" ,first_element );
			printf("last_element is %d\n" ,last_element );
			for (int i = n - 1; i >= 1; i--) {
					
				tab[i] = tab[i-1];
			}
			tab[0] = last_element;
			printf("after %d iteration \n" , j);
			
			for (int d = 0 ; d < n ; d++) {
				printf("\n");
				printf(" tab[%d] = %d , ",d , tab[d]);
			}
			printf("\n");
			j++;
		}
	
	}
	
	
	return 0;
}
