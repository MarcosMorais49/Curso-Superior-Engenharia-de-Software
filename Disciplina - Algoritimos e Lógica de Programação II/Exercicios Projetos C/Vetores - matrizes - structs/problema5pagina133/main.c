#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
	char nome[50];
	int i, tamanho;
	
	printf("Digite um nome: \n");
	gets(nome);
	tamanho = strlen(nome);
	for (i=tamanho -1; i>=0; i--)
		printf("%c", nome[i]);
	
	system('pause');
	return 0;
}
