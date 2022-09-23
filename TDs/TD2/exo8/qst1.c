#include<stdio.h>

int main() {
	int l;
	int number_of_spaces;
	printf("entrez le nombre l\n");
	scanf("%d", &l);
	printf("la valeur de l est %d est : \n" , l);
	number_of_spaces = l;
	for(int i = 1;i <= l * 2; i++)  {

		if ( i % 2 == 1) {

			for(int k =0; k < number_of_spaces; k ++) {
					printf(" ");
			}
			number_of_spaces--;
			for (int j = 1; j <= i;j++){
				
				printf("^");
				
			}
		
		}
		
		printf("\n");
	}
	
	return 0;
}
