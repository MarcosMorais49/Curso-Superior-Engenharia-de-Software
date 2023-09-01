#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, par, impar;
	par = 0;
	impar = 0;
	do {
		printf("Digite um numero inteiro: \n");
		scanf("%d", &num);
		if (num != 0 ){             //esse IF serve para nao deixar o 0 entrar na contagem de numeros pares, sem ele o PAR receberá esse 0 como numero par
			if (num % 2 == 0){
				par = par + 1;
			}else{
				impar = impar + 1;
			}
		}
	} while (num != 0);
	printf("Foram digitados, %d numeros pares! \n", par);
	printf("Foram digitados, %d numeros impares! \n", impar);
	
	return 0;
}
