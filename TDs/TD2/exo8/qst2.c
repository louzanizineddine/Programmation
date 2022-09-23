#include<stdio.h>

int main() {
	int l  , ht ,rt ,  number_of_spaces_to_center , len_of_last_line;
	int number_of_spaces;
	printf("entrez le nombre l\n");
	scanf("%d", &l);

	printf("entrez ht l\n");
	scanf("%d", &ht);

	printf("entrez rt l\n");
	scanf("%d", &rt);
	
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

	len_of_last_line = 2 * l - 1;
	number_of_spaces_to_center = (len_of_last_line - ( 2 * rt -1 )) / 2;

	

	for (int i = 1 ; i <= ht; i++) {
		for (int k = 0; k <= number_of_spaces_to_center ; k++) {
			printf(" ");	
		}	
		for (int j = 0; j <= rt ; j++) {
			printf("+");	
		}
		
		printf("\n");		
	
	}	
	
	
	
	return 0;
}
