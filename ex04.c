#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){


	char *a = malloc((int)30 * sizeof(char));
	char *b = malloc((int)30 * sizeof(char));

	printf("Read Names\n");

	printf("first name --> ");
	scanf("%s", a);
	printf("\n");

	printf("second name --> ");
	scanf("%s", b);
	printf("\n");

	if((int)a[0] < (int)b[0]){
	
		printf("%s\n%s\n", a, b);
	
	}else if((int)b[0] < (int)a[0]){
	
		printf("%s\n%s\n", b, a);
	
	} else{

		int counter = 1;
		
		while(1){
			if((int)a[counter] < (int)b[counter]){
	
				printf("%s\n%s\n", a, b);
				return 0;

			}else if((int)b[counter] < (int)a[counter]){
	
				printf("%s\n%s\n", b, a);
				return 0;

			}else{
				counter ++;
			}

		}
	}
	return 0;
}
