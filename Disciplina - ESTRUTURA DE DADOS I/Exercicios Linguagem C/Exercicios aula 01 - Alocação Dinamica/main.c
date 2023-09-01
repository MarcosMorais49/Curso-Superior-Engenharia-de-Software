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
		printf("O vetor não tem o 5 elemento para fazer a troca, portanto essa função não será executada! \n");
	}
}   

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");     //comando para acrescentar os acentos
	srand(time(NULL));    //comando semente para iniciar o random, assim nao repetirá os mesmos numeros gerados sempre
	printf("Informe o tamanho do vetor \n");
	scanf("%d", &tam);
	printf("O tamamnho do vetor é: %d\n",tam);       
	vet = malloc(sizeof(int)*tam);                //alocando o vetor dinamicamente     //sizeof(tamamnho do tipo int) * tamanho do vetor
	if (vet) {
		atribuirValor();   //chamdno a função
		exibeVetor();
		trocaElementos();
		exibeVetor();
		printf("O endereço do vetor é: %ld\n", (long int) vet);	     //chamando o endereço inicial do vetor
		printf("O endereço do vetor em hexadecimal é: %p\n", (void *) vet);	   //chamand o endereço inicial do vetor em hexadecimal
		for (i=0; i<tam; i++){       
			printf("O endereço de vetor na posição %d é: %ld\n", i, (vet+i));     //mostrando o endereço inicial de cada posição do vetor
		}
	}   
	else {
		printf("Erro ao alocar memória!");
	}                  
	return 0;
}
