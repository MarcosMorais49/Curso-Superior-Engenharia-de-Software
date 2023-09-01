#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	char palavra[30];
	int tamanho, i;
	printf("Digite uma palavra e o sistema irá imprimí-la quantas vezes for o número de seus caracteres: \n");
	gets(palavra);
	tamanho = strlen(palavra);
	for (i=0; i<tamanho; i++)
		printf("%s\n", palavra);
	
	system('pause');
	return 0;
}
