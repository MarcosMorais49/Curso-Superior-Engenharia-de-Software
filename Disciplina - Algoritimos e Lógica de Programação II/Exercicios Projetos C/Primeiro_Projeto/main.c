#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, resultado;
	printf ("Ola mundo!\n");
	printf ("Digite o primeiro numero:  ");
	scanf("%d", &num1);
	printf ("Digite o segundo numero:  ");
	scanf("%d", &num2);
	resultado = num1 + num2;
	printf ("A soma dos numeros digitados e:  %d",resultado);
	return 0;
}
