#include <stdio.h>
#include <stdlib.h>

//Definindo as Constantes
#define tamanho 100
#define E 0
#define D 1
#define R -1


// Criando a Estrutura
struct str_no {     
	char dado;
	int esquerda;
	int direita;
	int pai;
};

//Definindo as Variáveis
struct str_no arvore[tamanho];
int lado, indice = 0;
int opt = -1;
char pai, no;


//Função procura Nó
int arvore_procura(char dado){
	if (indice != 0){
		for (int i=0; i<indice; i++){
			if (arvore[i].dado == dado){
				return (i);
			}
		}
	}
	else {
		return (0);
	}
} 

//Função Iserir Nó
void arvore_insere(int pai, char dado, int lado){
	switch (lado) {
		case E:
			arvore[pai].esquerda = indice;
			arvore[indice].dado = dado;
			arvore[indice].pai = pai;
			arvore[indice].esquerda = -1;
			arvore[indice].direita = -1;
			indice++;
		break;
		
		case D:
			arvore[pai].direita = indice;
			arvore[indice].dado = dado;
			arvore[indice].pai = pai;
			arvore[indice].esquerda = -1;
			arvore[indice].direita = -1;
			indice++;
		break;
		
		case R:
			arvore[indice].dado = dado;
			arvore[indice].pai = -1;
			arvore[indice].esquerda = -1;
			arvore[indice].direita = -1;
			indice++;
		break;
	}
}

//Mostar Menu na Tela
void menu_mostrar(void) {
	system("cls");
	for (int i=0; i<indice; i++) {
		printf("| %c", arvore[i].dado);
	}
	printf("\n1 - Inserir um Nó na árvore");
	printf("\n2 - Pesquisar um Nó na árvore");
	printf("\n0 - Sair...\n\n");
}


int main(int argc, char *argv[]) {
	int temp;
	do {
		menu_mostrar();
		scanf("%d", &opt);
		switch (opt) {
			case 1:
				printf("\nDigite o valor do PAI: ");
				scanf("%c", &pai);
				scanf("%c", &pai);
				printf("\nDigite o valor do Nó: ");
				scanf("%c", &no);
				scanf("%c", &no);
				printf("Digite o lado da subárvore (E=%d/D=%d/R=%d): ", E,D,R);
				scanf("%d", &lado);
				temp = arvore_procura(pai);
				arvore_insere(temp,no,lado);
			break;
			case 2:
				printf("Digite o valor do Nó: ");
				scanf("%c", &no);
				scanf("%c", &no);
				temp = arvore_procura(no);
				printf("Nó %c\nFilho Esquerda: %c\nFilho Direita: %c\n\n",
					arvore[temp].dado,
					arvore[arvore[temp].esquerda].dado,
					arvore[arvore[temp].direita].dado);
				system("pause");
			break;
		}
	}while (opt != 0);
	system("pause");
	return 0;
}  
