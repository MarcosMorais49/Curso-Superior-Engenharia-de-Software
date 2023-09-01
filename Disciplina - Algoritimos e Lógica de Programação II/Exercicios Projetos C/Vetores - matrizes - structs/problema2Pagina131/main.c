#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Protuguese");
	int i, vetor[30];
	
	for (i=0; i<30; i++){
		printf("Digite o %d número inteiro: \n", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("Os números digitados, exibidos ao contrario é: \n");
	for (i=29; i>=0; i--)
		printf("\n %d", vetor[i]);
	
	return 0;
}
