#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	float sal, maiorSal, medFilhos, medSal, totSal, totFilhos;
	int filhos, cont;
	maiorSal = 0;
	cont = 0;
	totFilhos = 0;
	totSal = 0;
	printf("Informe o sal�rio ou -1 para sair: ");
	scanf("%f", &sal);
	while (sal != -1) {
		printf("Informe a quantidade de filhos: ");
		scanf("%d", &filhos);
		cont = cont + 1;
		if (sal > maiorSal)
			maiorSal = sal;		
		totFilhos = totFilhos + filhos;
		totSal = totSal + sal;
		printf("Informe o sal�rio ou -1 para sair:");
		scanf("%f", &sal);
	}
	medSal = totSal / cont;
	medFilhos = totFilhos / cont;
	printf("O maior sal�rio �: R$%.2f \n",maiorSal);
	printf("A m�dia de filhos �: %.2f \n", medFilhos);
	printf("A m�dia salarial �: R$%.2f \n",medSal);
	return 0;
}
