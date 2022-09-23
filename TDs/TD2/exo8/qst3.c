#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	srand(time(NULL));
	int l  , ht ,rt ,  number_of_spaces_to_center , len_of_last_line , total_number_of_signs = 0 , number_of_circles = 0;
	int number_of_spaces;
	int p;
	printf("entrez le nombre l\n");
	scanf("%d", &l);

	printf("entrez ht \n");
	scanf("%d", &ht);

	printf("entrez rt \n");
	scanf("%d", &rt);
	
	printf("entrez P \n");
	scanf("%d", &p);
	
	// calculer le nombre totale de ^

	for (int b = 0; b <= l ; b++) {
		total_number_of_signs = total_number_of_signs +  (2 * b + 1);
	}
	
	printf("la valeur de total_number_of_signs est %d est : \n" , total_number_of_signs);


	number_of_spaces = l;
	for(int i = 1;i <= l * 2; i++)  {

		if ( i % 2 == 1) {

			for(int k =0; k < number_of_spaces; k ++) {
					printf(" ");
			}
			number_of_spaces--;
			for (int j = 1; j <= i;j++){
				int value = rand() % 101 ;
				if (value > p) {
					printf("^");				
				}else {
					printf("o");				
				}
				
				
			}
		
		}
		
		printf("\n");
	}

	len_of_last_line = 2 * l - 1;
	number_of_spaces_to_center = (len_of_last_line - ( 2 * rt - 1 )) / 2;

	

	for (int i = 1 ; i <= ht; i++) {
		for (int k = 0; k <= number_of_spaces_to_center ; k++) {
			printf(" ");	
		}	
		for (int j = 0; j <= rt ; j++) {
			printf("+");	
		}
		
		printf("\n");		
	
	}	
	
	// 175 % 100 = 75
	
	return 0;
}
