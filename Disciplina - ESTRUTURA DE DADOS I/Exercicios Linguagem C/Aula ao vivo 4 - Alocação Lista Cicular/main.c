#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct LISTA{
	int num;
    struct LISTA *prox;
    struct LISTA *ant;  
}lista;

int op;
lista *inicio = NULL;
lista *fim = NULL;
lista *aux;

void mostrar_menu(){
	system("cls");
    printf("\nMENU DE OP��ES\n");
    printf("\n1 - Inserir no in�cio da lista");
    printf("\n2 - Inserir no fim da lista");
    printf("\n3 - Consultar a lista do in�cio ao fim");
    printf("\n4 - Consultar a lista do fim ao in�cio");
    printf("\n5 - Remover da lista");
    printf("\n6 - Esvaziar a lista");
    printf("\n7 - Sair");
    printf("\nDigite sua op��o: ");
    scanf("%d", &op);	
}

void inserir_inicio(){	
	printf("Digite o n�mero a ser inserido no in�cio da lista: ");
	lista *novo = malloc(sizeof(struct LISTA));
	scanf("%d", &novo->num);
	if (inicio == NULL){
		inicio = novo;
		fim = novo;
		novo->prox = inicio;
		novo->ant = inicio;
	}else{
		novo->prox = inicio;
		inicio->ant = novo;
		novo->ant = fim;
		fim->prox = novo;
		inicio=novo;
	}
	printf("N�mero inserido no in�cio da lista.\n");	
	system("pause");
}

void inserir_fim(){
	printf("Digite o n�mero a ser inserido no fim da lista: ");
	struct LISTA *novo = malloc(sizeof(struct LISTA));
	scanf("%d", &novo->num);
	if (inicio == NULL){
		inicio = novo;
		fim = novo;
		novo->prox = inicio;
		novo->ant = inicio;
	}else{        
		fim->prox = novo;
		novo->ant = fim;        
		fim=novo;
		fim->prox = inicio;
		inicio->ant = fim;
	}
	printf("N�mero inserido no fim da lista.\n");	
	system("pause");
}

void consultar_inicio(){
	if (inicio == NULL){
		printf("Lista vazia!!");
	}else{
		printf("\nConsultando a lista do in�cio ao fim\n");
		aux = inicio;
		do{
			printf("%d - ", aux->num);
			aux = aux->prox;
		}
		while (aux != inicio);
	}
	printf("\n");
	system("pause");	
}

void consultar_fim(){
	if (inicio == NULL){
		printf("Lista vazia!!\n");
	}else{
		printf("\nConsultando a lista do fim ao fim\n");
		aux = fim;
		do{
			printf("%d - ", aux->num);
			aux = aux->ant;
		}
		while (aux != fim);
	}
	printf("\n");
	system("pause");	
}

void remover_item(){
	int numero, achou;
	if (inicio == NULL){
		printf("Lista vazia!!\n");
	}else{
		printf("\nDigite o elemento a ser removido: ");
		scanf("%d", &numero);
		aux = inicio;
		achou = 0;
		int quantidade = 0;
		aux = inicio;
		do{
			quantidade++;
			aux = aux->prox;
		}while (aux != inicio);
		int elemento = 1;
		do{
			if (inicio == fim && inicio->num == numero){
				inicio = NULL;
				free(inicio);
				achou++;
			}else{
				if (aux->num == numero){
				achou++;
					if (aux == inicio){
						inicio = aux->prox;
						inicio->ant = fim;
						fim->prox = inicio;
						free(aux);
						aux = inicio;
					}else if(aux == fim){
						fim = fim->ant;
						fim->prox = inicio;
						inicio->ant = fim;
						free(aux);
						aux = NULL;
					}else{
						aux->ant->prox = aux->prox;
						aux->prox->ant = aux->ant;
						lista *aux2;
						aux2 = aux;
						aux = aux->prox;
						free(aux2);
					}
				}else{
					aux = aux->prox;
				}
			}
			elemento++;
		}while(elemento <= quantidade);
		if (achou == 0)
			printf("N�mero n�o encontrado\n");
		else if (achou == 1)
			printf("N�mero removido 1 vez\n");
		else
			printf("N�mero removido %d vezes\n", achou);
	}
	system("pause");	
}

void esvaziar_lista(){
	if (inicio == NULL){
		printf("Lista vazia!!\n");
	}else{
		aux = inicio;
		do{
			inicio = inicio->prox;
			free(aux);
			aux = inicio;
		}while (aux != fim);
		free(fim);
		inicio = NULL;
		printf("Lista esvaziada.\n");
	}	
	system("pause");
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	do{
		mostrar_menu();
		switch (op){
		case 1:
			inserir_inicio();
			break;
		case 2: 
			inserir_fim();
			break;
		case 3:
			consultar_inicio();
			break;
		case 4:
			consultar_fim();
			break;
		case 5:
			remover_item();
			break;
		case 6:
			esvaziar_lista();
			break;
		case 7:
			system("exit");
			break;
		default :		
			printf("Op��o inv�lida!!\n");
			system("pause");
		}
	getchar();    
	}while (op!= 7);
}
