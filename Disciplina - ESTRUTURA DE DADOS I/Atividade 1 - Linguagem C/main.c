#include <stdio.h>
#include <stdlib.h>
#include <locale.h>                                                                     //incluindo a biblioteca locale 

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");                                                     //chamando a fun��o setlocale para que o programa aceite os acentos contidos na lingua portuguesa
	int *pont;                                                                          //definindo o ponteiro
	pont = (int *) malloc (sizeof(int));                                                //fazendo aloca��o din�mica
	if (pont == NULL) {													               	//faz a verifica��o se a aloca��o fi realizada corretamente
		printf("Erro na aloca��o!\n");
	} 
	else{
		*pont = 54;                                                                     //atribuindo o valor 54
		printf("O endere�o do ponteiro �: %ld\n", &pont);                               //Imprime o endere�o do ponteiro
		printf("O valor contido no ponteiro �: %d\n", *pont);                           //imprime o valor contido no ponteiro
		return 0;
	}
}
