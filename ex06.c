#include <stdio.h>
#include <stdlib.h>

void main(){

	int height;
	int width;

	int actual;


	printf("matrix height --> ");
	scanf("%d", &height);
	printf("\nmatrix width --> ");
	scanf("%d", &width);

	int matrix[height][width];

	if(height == 1 && width == 1){
		scanf("%d", &actual);
		printf("\n - Tranposed matrix - ");
		printf("\n%d\n", actual);
	}

	else{

		for(int row = 0; row < height; row++){
			
	 		int line[height];
			
	 		for(int columns = 0; columns < width; columns++){
			
	 			fscanf(stdin, "%d", &line[columns]);
				
	 			matrix[row][columns] = line[columns];
	 		}

	 	}


		printf("\n - Tranposed matrix - \n");

	 	for (int row = 0; row < width; row++){
	 		for (int column = 0; column < height; column++){
	 			printf("%d ", matrix[column][row]);
	 		}
	 		printf("\n");
	 	}

	}
}
