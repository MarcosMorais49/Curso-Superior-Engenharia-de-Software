#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga se a data é válida ou não. 
//Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013

int main() {
	int dia, mes, ano;
	printf("Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga se a data é válida ou não.") 
	printf("Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013. \n \n");
	printf("Digite o dia do seu aniversario(de 01 a 31): \n");
	scanf("%d", &dia);
	printf("Digite o mes de seu aniversario(de 01 a 12): \n");
	scanf("%d", &mes);
	printf("Digite o ano em que voce nasceu: \n");
	scanf("%d", &ano);
	return 0;
	
	if (dia < 1) && (dia > 31){
		printf("Dia Invalido!");
	}else{
		if (mes < 1) && (mes > 12){
			printf("Mes Invalido!");
		}else{
			if (ano > 2013){
				printf("Ano Invalido!");
			}else{
				printf("Sua data de nascimento e: ");
				printf("%d -", dia);
				printf("%d -", mes);
				printf("%d", ano);
			}
		}
	}
}
