#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int num, cont, i;
	printf("Digite um n�mero para saber se ele � primo: ");
	scanf("%d", &num);
	cont = 0;
	for (i=1; i<=num; i++){
		if (num % i == 0)
			cont++;
	}
	if (cont > 2)
		printf("O n�mero digitado n�o � um n�mero Primo!");
	else
		printf("O n�mero digitado � Primo!");
	
	return 0;
}
