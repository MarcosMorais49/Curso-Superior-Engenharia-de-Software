#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	typedef struct{
		int id;
		char cor[20];
	}semaforo;
	
	semaforo pare = {1,"vermelho"}; 
	semaforo aten = {2,"amarelo"}; 
	semaforo siga = {3,"verde"}; 
	semaforo *pont;
	
	pont = &pare;
	printf("Valor do ponteiro = %d\n", (*pont).id);
	printf("Valor do ponteiro = %s\n", (*pont).cor);
	pont = &aten;
	printf("Valor do ponteiro = %d\n", (*pont).id);
	printf("Valor do ponteiro = %s\n", (*pont).cor);
	pont = &siga;
	printf("Valor do ponteiro = %d\n", (*pont).id);
	printf("Valor do ponteiro = %s\n", (*pont).cor);
	
	
	
	return 0;
}


