#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num, total, i;
	printf("Digite um numero para saber seu fatorial: ");
	scanf("%d", &num);
	total = num;
	for (i = 1; i < num; i++) 
		total = total * i;
	
	printf("O fatorial de %d é: %d", num, total);
	
	return 0;
}
