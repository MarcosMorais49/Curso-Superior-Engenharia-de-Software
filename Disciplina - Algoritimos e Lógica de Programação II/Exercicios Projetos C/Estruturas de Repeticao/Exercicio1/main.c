#include <stdio.h>
#include <stdlib.h>

//Resolvendo exerc�cio para verificar se um n�mero � par, �mpar ou nulo em Linguagem C, utilizando if else.
int main() {
	int num, resto;
	printf("Digite um numero: \n");
	scanf("%d", &num);
//	resto = num / 2;
//	resto = num - (resto * 2);
//	if (resto == 0) {
	if (num % 2 == 0){                       //As 3 lunhas comentadas acima, s�o a formula da fun��o % (MOD), que foi utilizada nesse IF.
		printf("O numero digitado e PAR");	
		scanf;
	}else{
		if (num == 0){
		printf("Nulo");
		}else{
			printf("O numero digitado e IMPAR");
		}
	}
	return 0;
}
