#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tam 5

int main() {
	setlocale(LC_ALL,"Portuguese");
	int i,j;
	float notas[tam][4], mediaA[tam];  //verificar a ordem de declaração para linhas e colunas 4-tam ou tam-4
	float mediaT, totalA, totalT;
	
	for (i=0; i<tam; i++)
		mediaA[i] = 0;
	totalT = 0;	
	
	for (i=0; i<tam; i++){	
	printf("Digite as 4 notas do %d aluno(a): \n", i+1);
		totalA = 0;
		for (j=0; j<4; j++){
			printf("Nota %d: \n",j+1);
			scanf("%f", &notas[i][j]);
			totalA = totalA + notas[i][j];
		}
		mediaA[i] = totalA/4;
		totalT = totalT + totalA;
	}
	mediaT = totalT/tam;
	
	for (i=0; i<tam; i++)
		printf("A média do aluno %d é: %.1f \n",i+1, mediaA[i]);
	printf("A média da turma é: %.1f", mediaT);
	
	system('pause');
	return 0;
}
