#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define tamanho 9

struct str_no{
	int dado;
	int pai;
	int esquerda;
	int direita;
};

struct str_no arvore[tamanho];
int busca;

void montaArvore(int indice, int dado, int pai, int esq, int dir ){
	arvore[indice].dado = dado;	
	arvore[indice].pai = pai;
	arvore[indice].esquerda = esq;
	arvore[indice].direita = dir;
	sleep(1);
	printf("Nó %d adicionado com sucesso na posição %d do vetor!\n", arvore[indice].dado, indice);
}

void preOrdem(int raiz){
	if(raiz >= 0 && raiz <=8 ){	
		printf("%d ", arvore[raiz].dado);
		preOrdem(arvore[raiz].esquerda);
		preOrdem(arvore[raiz].direita);
	} 
} 

void cabecalho(){
	printf("*************** Atividade MAPA - Estrutura de Dados II ***************\n\n");
	printf("Aluno: Marcos Vinicius de Morais\n");
	printf("R.A: 20127542-5\n");
	printf("_________________________________________________________________________\n\n");	
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int r = 0;	
	cabecalho();
	printf("Inserindo os nós...\n\n");
	        //  I   D   P     E     D
	montaArvore(0,  2, -1,  1  ,  3  );
	montaArvore(1,  0,  0  , -1,  2  );
	montaArvore(2,  1,  1  , -1, -1);
	montaArvore(3,  2,  0  , -1,  4  );
	montaArvore(4,  7,  3  ,  5  , -1);
	montaArvore(5,  5,  4  ,  6  ,  8  );
	montaArvore(6,  4,  5  ,  7  , -1);
	montaArvore(7,  2,  6  , -1, -1);
	montaArvore(8,  5,  5  , -1, -1);
	printf("\n\n");
	printf("_________________________________________________________________________\n\n");
	printf("Visitação Pré-Ordem: ");
	preOrdem(r);
	printf("\n\n");
	printf("_________________________________________________________________________\n\n");	
	system("pause");
	return 0;
}
