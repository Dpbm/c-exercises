#include <stdio.h>

int main(){

	int num;

	printf("max number <--> it need to be a odd number\n");
	scanf("%d", &num);
	printf("\n");

	if(num % 2 == 0){
		return 1;
	}

	int last = num;

	int numbers[num];
	int remove = 0;

	for (int i = 1; i <= num; i++){
		numbers[i - 1] = i;
	}

	while(num - remove > 0){
		for(int j = 0; j < remove; j++){
			printf(" ");
		}
		for (int i = remove; i < num - remove; i++){
			printf("%d", numbers[i]);
		}
		printf("\n");
		remove ++;

	};

	return 0;
}