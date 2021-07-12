#include <stdio.h>
#include <stdlib.h>

void main(){

	int height;
	int width;

	int actual;
	int mult;


	printf("matrix height --> ");
	scanf("%d", &height);
	printf("\nmatrix width --> ");
	scanf("%d", &width);
	printf("\nmultiplier --> ");
	scanf("%d", &mult);

	int matrix[height][width];

	if(height == 1 && width == 1){
		scanf("%d", &actual);
		printf("\n - Multiplied matrix - ");
		printf("\n%d\n", actual * mult);
	}

	else{

		for(int row = 0; row < height; row++){
			
	 		int line[height];
			
	 		for(int columns = 0; columns < width; columns++){
			
	 			fscanf(stdin, "%d", &line[columns]);
				
	 			matrix[row][columns] = line[columns] * mult;
	 		}

	 	}

		printf("\n - Multiplied matrix - \n");

	 	for (int row = 0; row < height; row++){
	 		for (int column = 0; column < width; column++){
	 			printf("%d ", matrix[row][column]);
	 		}
	 		printf("\n");
	 	}

	}
}
