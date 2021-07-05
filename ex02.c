#include <stdio.h>

// Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
// maior ou igual a 9	A
// maior ou igual a 7.5 e menor que 9	B
// maior ou igual a 6 e menor que 7.5	C
// maior ou igual a 4 e menor que 6	D
// menor que 4	E

void main(){

	printf("exam 1 - exam 2 - exam 3 - exercises average\n");
	
	int count[4];
	float total = 0;

	for(int i = 0; i < 4; i++){
			
		fscanf(stdin, "%d", &count[i]);

		if(i == 1){ total += count[i] * 2; }
		else if (i == 2){ total += count[i] * 3; }
		else { total += count[i]; }
		
	}

	total /= 7;

	if(total >= 9) { printf("A\n"); }
	else if(total >= 7.5 && total < 9)   { printf("B\n"); }
	else if(total >= 6   && total < 7.5) { printf("C\n"); }
	else if(total >= 4   && total < 6)   { printf("D\n"); }
	else if(total < 4 ) { printf("E\n"); }


}