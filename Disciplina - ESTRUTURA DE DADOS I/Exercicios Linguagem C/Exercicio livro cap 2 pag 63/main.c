#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 5

//Estrutura
struct pilha_livros {
	int codigo[tamanho];
	char nomeLivro[tamanho][25];
	char autorLivro[tamanho][20];
	int ini;
	int fim;
};

//variáveis globais
struct pilha_livros plivros;
int op;


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int i;
	op = 1;

	plivros.fim = 0;
	plivros.ini = 0;

	while (op != 0) {
		system("cls");
		mostrar_livros();
		mostrar_menu();
		scanf("%d", &op);
		switch (op) {
			case 1:
				empilhar_livros();
			break;
			case 2:
				desempilhar_livros();
			break;
		}		
	}	
	return 0;
}

//Empilhamento
void empilhar_livros() {
	int cod;
	if (plivros.fim == tamanho) {
		printf("\nNão é possivel empilhar mais livros, chego ao limite de peso para a mesa!\n");
		system("pause");
	}
	else {
		printf("Informe o codigo do livro: \n");
		scanf("%d", &plivros.codigo[plivros.fim]);
		printf("Digite o nome do autor: \n");
		scanf("%s", &plivros.autorLivro[plivros.fim][30]);
		printf("Informe o nome do livro: ");
		scanf("%s", &plivros.nomeLivro[plivros.fim][30]);

		printf("\n%d --- %s\n",plivros.codigo[plivros.fim], plivros.autorLivro[plivros.fim]);
		system("pause");
		
		plivros.fim++; 
	}
}

//Desempilhamento
void desempilhar_livros() {
	if (plivros.fim == plivros.ini) {
		printf("\nNão existem livros empilhados, portanto não teremos o que guardar!\n");
		system("pause");
	}
	else {
		plivros.codigo[plivros.fim-1] = 0;
		//plivros.autorLivro[plivros.fim -1] = " ";
		//plivros.nomeLivro[plivros.fim -1] = " ";
		plivros.fim--;
	}
}

void mostrar_livros() {
	int i;
	for (i=0; i<tamanho; i++) {
		printf("\nCod Livro = %d\n", plivros.codigo[i]);
		printf("Nome do Autor = %c\n", plivros.autorLivro[i]);
		printf("Nome do Livro = %c\n", plivros.nomeLivro[i]);
	}
}

void mostrar_menu() {
	printf("\nDigite a opção desejada: \n");
	printf("1 - Empilhar livros \n");
	printf("2 - Desempilhar livros \n");
	printf("0 - Sair\n\n");
}

