#include <stdio.h>
#include <stdlib.h>
#include <locale.h>                                                                     //incluindo a biblioteca locale 

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");                                                     //chamando a função setlocale para que o programa aceite os acentos contidos na lingua portuguesa
	int *pont;                                                                          //definindo o ponteiro
	pont = (int *) malloc (sizeof(int));                                                //fazendo alocação dinâmica
	if (pont == NULL) {													               	//faz a verificação se a alocação fi realizada corretamente
		printf("Erro na alocação!\n");
	} 
	else{
		*pont = 54;                                                                     //atribuindo o valor 54
		printf("O endereço do ponteiro é: %ld\n", &pont);                               //Imprime o endereço do ponteiro
		printf("O valor contido no ponteiro é: %d\n", *pont);                           //imprime o valor contido no ponteiro
		return 0;
	}
}
