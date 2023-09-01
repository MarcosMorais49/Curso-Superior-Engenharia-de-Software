#include <stdio.h>
#include <stdlib.h>

//Resolvendo exercício: Desenvolva um programa que recebe do usuário o placar de um jogo de futebol (os gols de cada time)
// e informa se o resultado foi um empate, a vitória do primeiro time ou do segundo time.
int main() {
	int timeA, timeB;
	printf ("Infrome quantos gols o time A fez: \n");
	scanf("%f", &timeA);
	printf("Informe quantos gols o time B fez: \n");
	scanf ("%f", &timeB);
	
	if (timeA == timeB){
		printf ("O resultado do jogo foi empate! \n");
	}else{
		if (timeA > timeB){
			printf("O time A Venceu! \n");
		}else{
			printf ("O time B Venceu! \n");}
	}
	
	
	return 0;
}
