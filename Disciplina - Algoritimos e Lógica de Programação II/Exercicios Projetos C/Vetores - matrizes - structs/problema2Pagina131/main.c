#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Protuguese");
	int i, vetor[30];
	
	for (i=0; i<30; i++){
		printf("Digite o %d n�mero inteiro: \n", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("Os n�meros digitados, exibidos ao contrario �: \n");
	for (i=29; i>=0; i--)
		printf("\n %d", vetor[i]);
	
	return 0;
}
