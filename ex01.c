#include <stdio.h>
#include <stdlib.h>

// Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os núm eros lidos.
void main(){

	int length;
	int actual;
	int less;
	int lineOfLess = 1;

	printf("square matrix length --> ");
	scanf("%d", &length);

	if(length == 1){
		scanf("%d", &actual);
		printf("\nless is in line 1\n");
	}

	else{

		for(int row = 0; row < length; row++){
			
			int line[length];
			
			for(int columns = 0; columns < length; columns++){
			
				fscanf(stdin, "%d", &line[columns]);
				
				if(row == 0){
					less = line[0];
				}

				if(line[columns] <= less){
					less = line[columns];
					lineOfLess = row + 1;
				}
			}

		}

		printf("\nless is in line %d\n", lineOfLess);
	}
}