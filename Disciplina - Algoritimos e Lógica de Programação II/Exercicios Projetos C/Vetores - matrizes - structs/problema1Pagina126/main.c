#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 10

struct livro {
	int codigo;
	int ano;
	char titulo[30];
	char autor[30];
	char area[20];
	char editora[15];
};

/*struct temporario {
	int codigo;
	int ano;
	char titulo[30];
	char autor[30];
	char area[20];
	char editora[15];
};    */


int main() {
	setlocale(LC_ALL,"Portuguese");
	struct livro lv[TAM];
	struct livro temp;
	int op, i, j, cont, pesCod;	
	cont = 0;
	
	do {
		system("cls");
		printf("Menu de Op��es\n\n");
		printf("1 - Cadastrar livros \n");
		printf("2 - Imprimir as informa��es dos livros \n");
		printf("3 - Pesquisar livros por c�digos \n");
		printf("4 - Ordenar livros por ano \n");
		printf("5 - Sair do programa \n");
		scanf ("%d", &op);
		fflush(stdin);
		switch (op) {
		case 1 : {
			system("cls");
			printf("Informe o c�digo do livro: \n");
			scanf("%d", &lv[cont].codigo);
			fflush (stdin);			
			printf("Digite o t�tulo do livro: \n");			
			gets(lv[cont].titulo);
			fflush (stdin);	
			printf("Digite o nome do autor do livro: \n");
			gets(lv[cont].autor);
			fflush (stdin);	
			printf("Informe a �rea do livro: \n");
			gets(lv[cont].area);
			fflush (stdin);	
			printf("Digite o ano de publica��o do livro: \n");
			scanf("%d", &lv[cont].ano);
			fflush (stdin);	
			printf("Informe a editora do livro: \n");
			gets(lv[cont].editora);	
			fflush (stdin);			
			printf("Livro cadastrado com sucesso, na posicao %d do vetor! \n", cont);
			
		/*	system("pause");
			printf("C�digo do livro: %d \n", lv[cont].codigo);
			printf("Titulo: %s \n", lv[cont].titulo);
			printf("Autor: %s \n", lv[cont].autor);
			printf("�rea: %s \n", lv[cont].area);
			printf("Publicado em %d \n", lv[cont].ano);
			printf("Editora: %s \n", lv[cont].editora); */
		
		
			system("pause");
			cont++;			
			break;
		}
		case 2 : {
			system("cls");
			printf("Informa��es dos  livros \n\n");
			for (i=0; i<cont; i++){
				printf("C�digo: %d \n", lv[i].codigo);
				printf("T�tulo: %s \n", lv[i].titulo);
				printf("Autor:  %s \n", lv[i].autor);
				printf("�rea:   %s \n", lv[i].area);
				printf("Publicado em %d \n", lv[i].ano);
				printf("Editora %s \n", lv[i].editora);
				printf("------------------------------------\n");
			}
			system("pause");
			break;
		}
		case 3 : {
			system("cls");
			j = 0;
			printf("Pesquisar Livros \n\n");
			printf("Digite o c�digo do livro que deseja pesquisar: \n");
			scanf("%d", &pesCod);
			system("cls");
			printf("Resultados da pesquisa: \n\n");
			for (i=0; i<cont; i++){
				if (lv[i].codigo == pesCod){
					printf("C�digo: %d \n", lv[i].codigo);
					printf("T�tulo: %s \n", lv[i].titulo);
					printf("Autor:  %s \n", lv[i].autor);
					printf("�rea:   %s \n", lv[i].area);
					printf("Publicado em %d \n", lv[i].ano);
					printf("Editora %s \n", lv[i].editora);
					printf("------------------------------------\n");
					j++;
				}
			}
			printf("Sua pesquisa encontrou %d resultado(s)! \n", j);
			system("pause");
			break;
		}
		case 4 : {
			system("cls");
			for (i=0; i<cont; i++){
				for (j=i+1; j<cont; j++){
					if (lv[i].ano > lv[j].ano) {
						printf("%d \n", cont);
						printf("O livro do ano %d que est� na posicao %d, tem o ano menor que o livro ano %d, que est� na posicao %d", lv[j].ano,j, lv[i].ano, i);
						temp.codigo = lv[i].codigo;
						strcpy (temp.titulo, lv[i].titulo);
						strcpy (temp.autor, lv[i].autor);
						strcpy (temp.area, lv[i].area);
						temp.ano = lv[i].ano;
						strcpy (temp.editora, lv[i].editora);
						
						lv[i].codigo = lv[j].codigo;
						strcpy (lv[i].titulo, lv[j].titulo);
						strcpy (lv[i].autor, lv[j].autor);
						strcpy (lv[i].area, lv[j].area);
						lv[i].ano = lv[j].ano;
						strcpy (lv[i].editora, lv[j].editora);
						
						lv[j].codigo = temp.codigo;
						strcpy (lv[j].titulo, temp.titulo);
						strcpy (lv[j].autor, temp.autor);
						strcpy (lv[j].area, temp.area);
						lv[j].ano = temp.ano;
						strcpy (lv[j].editora, temp.editora);
						system("pause");
					}				
				}
			}
			break;
		}
		case 5 :  abort;   
		break;
		
		default : {
			printf("Op��o Inv�lida! \n");
			system("pause");
			break;
		}
		
		}
		//system(clrs);
	} while (op != 5);
	
	
	
	return 0;
}
