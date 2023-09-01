#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
	double num;
	printf ("Por favor, digite um numero: \n");
	scanf ("%d", &num);
	if (num > 10 && num < 20) {
		printf ("O numero digitado e maior que Dez e menor que Vinte");
	}
	else {
		printf ("ATENCAO!!! O numero digitado e MENOR que 10 ou MAIOR que 20!");
	}
}
