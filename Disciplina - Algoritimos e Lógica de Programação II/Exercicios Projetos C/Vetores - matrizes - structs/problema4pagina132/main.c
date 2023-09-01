#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	char nome[50];
	int tamanho, i;
	
	printf("Digite um nome: \n");
	gets(nome);
		
	tamanho = strlen(nome);
	for (i=0; i<tamanho; i=i+2 )
		printf("A letra na posição %d é: %c \n", i, nome[i]);
	
	system('pause');
	
	return 0;
}
