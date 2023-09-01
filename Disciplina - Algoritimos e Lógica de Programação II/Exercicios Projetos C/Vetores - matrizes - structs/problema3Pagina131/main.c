#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	int vetA[20], vetB[20], vetC[20];
	int i, j, temp;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite 20 números inteiros para compor o vetor A: \n");
	for (i=0; i<20; i++)
		scanf("%d", &vetA[i]);
	printf("Digite mais 20 números inteiros para compor o vetor B: \n");
	for (i=0; i<20; i++)
		scanf("%d", &vetB[i]);
	for (i=0; i<20; i++)
		vetC[i] = vetA[i] + vetB[i];
		
	printf("O resultado da soma do vetorA + vetorB é igual a: \n");
	for (i=0; i<20; i++)
		printf("%d \n", vetC[i]);
		
	for (i=0; i<20; i++){
		for (j=i+1; j<20; j++){
			if (vetC[j] > vetC[i]){
				temp = vetC[i];
				vetC[i] = vetC[j];
				vetC[j] = temp;
			}
		}
	}
	printf("Oredenando o vetor C: \n");
	for (i=0; i<20; i++)
		printf("%d \n", vetC[i]);
	
	return 0;
}
