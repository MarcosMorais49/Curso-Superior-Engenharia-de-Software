#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int i, val, tam, *pt1, *pt2;
	printf("Informe o tamanho do vetor dinâmico: \n");
	scanf("%d", &tam);
	pt1 = (int *) malloc (sizeof (int) * tam);
	pt2 = (int *) malloc (sizeof (int) * (tam*2));
	
	printf("Vetor 1\n"); 
	for (i=0; i<tam; i++) {
		pt1[i] = pow(2,i);
		printf("Posição %d - Valor %d\n",i, pt1[i]);
	}
	printf("\nVetor 2\n");
	for (i=0; i<tam*2;i++) {
		pt2[i] = pow(3,i);
		printf("Posição %d - Valor %d\n", i, pt2[i]);
	}
	
	system("Pause");
	return 0;
}
