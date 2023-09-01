#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int num, cont, i;
	printf("Digite um número para saber se ele é primo: ");
	scanf("%d", &num);
	cont = 0;
	for (i=1; i<=num; i++){
		if (num % i == 0)
			cont++;
	}
	if (cont > 2)
		printf("O número digitado não é um número Primo!");
	else
		printf("O número digitado é Primo!");
	
	return 0;
}
