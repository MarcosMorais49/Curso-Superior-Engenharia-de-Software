#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct dl_elemento {
	char *dado;
	struct dl_elemento *proximo;
	struct dl_elemento *anterior;
};

typedef struct dl_lista {
	int tamanho;
	struct dl_elemento *inicio;
	struct dl_elemento *fim;
};

int op;
struct dl_lista *lista;
struct dl_elemento *elemento;

void mostrar_menu(){
	//system("cls");
	printf("====================Lista Duplamente Encadeada====================\n\n");
	printf("Menu\n");
	printf("1 - Inserir elementos no inicio da lista:\n");
	printf("2 - Inserir elementos no final da lista:\n");
	printf("3 - Inserir elementos em uma posição determinada: \n");
	printf("4 - Realizar busca em ordem crescente: \n");
	printf("5 - Realizar busca em ordem decrescente: \n");
	printf("6 - Remover elemento: \n");
	printf("7 - Sair\n");
	scanf("%d", &op);	
}

inserir_vazio(){
//	struct dl_elemento *novo;
	printf("Digite um caractere para inserir na lista: \n");
	elemento = malloc(sizeof(elemento));
	scanf("%s", &elemento->dado);
	elemento->anterior = NULL;
	elemento->proximo = NULL;
	lista->inicio = elemento;
	lista->fim = elemento;
	lista->tamanho++;
	printf("Elemento inserido com sucesso!\n");
	printf("sua lista contém %d elemento(s)\n", lista->tamanho);
	system("pause");
}

inserir_inicio(){
//	struct dl_elemento *novo;
	printf("Digite um caractere para inserir na lista: \n");
	elemento = malloc(sizeof(struct dl_elemento));
	scanf("%s", &elemento->dado);
	elemento->anterior = NULL;
	elemento->proximo = lista->inicio;
	lista->inicio->anterior = elemento;
	lista->inicio = elemento;
	lista->tamanho++;
	printf("Elemento inserido com sucesso!\n");
	printf("sua lista contém %d elemento(s)\n", lista->tamanho);
	system("pause");
}

mostrar_elementos(){
	struct dl_elemento *aux;
	int i;
	printf("\n\nElementos contidos na Lista Duplamente Encadeada:\n");
	if (lista->tamanho == 0){
		printf("Lista Vazia!\n");
	}
	else {
		aux = lista->inicio;
		for (i=0; i < lista->tamanho; i++){
			printf("%c - ", aux->dado);
			aux = aux->proximo;
		}	
	}
	printf("\n");
}

void inserir_final(){
	struct dl_elemento *aux;
	printf("Digite um caractere para inserir no final da lista:\n");
	elemento = malloc(sizeof(struct dl_elemento));
	scanf("%s", &elemento->dado);
	elemento->anterior = NULL;
	elemento->proximo = lista->fim;
	lista->fim->anterior = elemento;
	lista->fim = elemento;                                     //PAREI AQUIIIIIIIIII
	lista->tamanho++;
/*	aux->proximo = lista->fim;
	aux->anterior = NULL;
	elemento->anterior = aux;
	lista->fim = aux;
	lista->tamanho++;
	printf("Elemento inserido com sucesso!\n");
	printf("sua lista contém %d elemento(s)\n", lista->tamanho);*/
	
	int i;
	aux = lista->inicio;
	printf("1 - %c\n", aux->dado);
	aux = aux->proximo;
	printf("2 - %c\n", aux->dado);
	aux = aux->proximo;
	printf("3 - %c\n", aux->dado);
	aux = aux->proximo;
	printf("4 - %c\n", aux->dado);

	
/*	for ( i= lista->tamanho; i >= 0 ;i--){
		printf("Elemento posição %d: %c \n",i,teste->dado );
		teste = teste->anterior;
	};*/

/*	elemento->anterior = lista->fim;
	elemento->proximo = NULL;

	lista->fim = elemento;
	lista->tamanho++;
	printf("Elemento inserido com sucesso!\n");
	printf("sua lista contém %d elemento(s)\n", lista->tamanho);
	system("pause");*/
/*	elemento->anterior = aux;
	elemento = malloc(sizeof(elemento));
	elemento->dado = aux->dado;
	elemento->anterior = NULL;
	elemento->proximo = lista->fim;
	lista->fim = elemento;
	lista->tamanho++;*/
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	lista = malloc(sizeof(lista));
	lista->tamanho = 0;
	op = 0;
	do{
		mostrar_elementos();
		mostrar_menu();
		switch (op){
			case 1:
				if (lista->tamanho == 0){
					inserir_vazio();				
				}
				else {
					inserir_inicio();
				}
				break;
			case 2:
				inserir_final();
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				system("exit");
				break;
			default:
				printf("Opção Inválida!\n");
				break;		
		}
	}while(op!=7);
	return 0;
}
