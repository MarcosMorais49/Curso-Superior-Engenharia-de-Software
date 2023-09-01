#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int i, tam, *vet;

void exibeVetor() {
	for (i=0;i<tam;i++){
		printf("%d,", *(vet+i) );
	}
	printf("\n");
	return 0;
};

void atribuirValor() {
	for (i=0; i<tam; i++){
		*(vet+i) = rand()%100;
	}
}

void trocaElementos(){
	int a;
	if (tam>4) {
		a = vet[0];
		vet[0] = vet[4];
		vet[4] = a;
	}
	else {
		printf("O vetor n�o tem o 5 elemento para fazer a troca, portanto essa fun��o n�o ser� executada! \n");
	}
}   

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");     //comando para acrescentar os acentos
	srand(time(NULL));    //comando semente para iniciar o random, assim nao repetir� os mesmos numeros gerados sempre
	printf("Informe o tamanho do vetor \n");
	scanf("%d", &tam);
	printf("O tamamnho do vetor �: %d\n",tam);       
	vet = malloc(sizeof(int)*tam);                //alocando o vetor dinamicamente     //sizeof(tamamnho do tipo int) * tamanho do vetor
	if (vet) {
		atribuirValor();   //chamdno a fun��o
		exibeVetor();
		trocaElementos();
		exibeVetor();
		printf("O endere�o do vetor �: %ld\n", (long int) vet);	     //chamando o endere�o inicial do vetor
		printf("O endere�o do vetor em hexadecimal �: %p\n", (void *) vet);	   //chamand o endere�o inicial do vetor em hexadecimal
		for (i=0; i<tam; i++){       
			printf("O endere�o de vetor na posi��o %d �: %ld\n", i, (vet+i));     //mostrando o endere�o inicial de cada posi��o do vetor
		}
	}   
	else {
		printf("Erro ao alocar mem�ria!");
	}                  
	return 0;
}
