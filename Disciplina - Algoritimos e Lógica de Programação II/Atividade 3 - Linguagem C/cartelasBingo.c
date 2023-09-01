#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i, j, l, numCart, temp, cont;
	cont = 0;
	
	printf("Informe o n�mero de cartelas que deseja imprimir: \n");
	scanf("%d", &numCart);       //faz a leitura da quantidade de cartelas a imprimir
	fflush(stdin);            // comando usado para limpar buffer do teclado
	printf("\n");
	system("cls");
	int cartela[numCart][10];         // matriz com linhas a definir pelo usuario de acordo com a quantidade de cartelas e 10 colunas para as dezenas da cartela
	for (i=0; i<numCart; i++){        //percorrer a matriz na linha i
		printf("Cartela %d \n", i+1);  
		for (j=0; j<10; j++){         //percorer a matriz pela coluna j
			temp = rand () %99;  //Rand gera um numero aleat�rio e armazena em temp para ser feito a varifica��o de duplicidade antes de alimentar a matriz cartela
			if (j==0) {      //Se � o primeiro numero da linha, n�o ter� outro para fazer a compara��o de duplicidade, a matriz recebe sem verifica��o
				cartela[i][j] = temp;  // portanto cartela recebe o temp(rand) sem fazer a varifica��o
			} else {       // se n�o � o primeiro numero da cartela, o ssitema entra no else para verificar se ja existe um numero igual na cartela
				do {     //inicio do comando do-While, para executar a tarefa antes da compara��o. O sistema executa o bloco ao menos uma vez
					cont = 0;  //essa vari�vel faz o controle caso o temo seja  um numero repetido na cartela 
					for (l=j-1; l>=0; l-- ){    //Esse la�o percorre o vetor ao contr�rio (Do fim para o inicio					
						if (temp == cartela[i][l]){ //Verifica se o numero TEMP � igual ao numero da cartela
							temp = rand () %99;    // Caso o numero TEMP seja repetido, o sistema deve gerar um novo numero TEMP
							cont = 1;  //Essa vari�vel controla se teve altera��es na TEMP, se cont=1, ser� necess�rio percorrer novamente o vetor, pois o novo temp pode continuar sendo igual a algum numero existente no vetor
						} 
					}					
				} while (cont == 1);  //Condi��o de parada do la�o de repeti��o (cont seja igual a 0)
				cartela[i][j] = temp;     //Ap�s ja ter sido verificado e confirmado que o numero TEMP n�o existe na cartela, o valor � atribuido na matriz cartela
			} 
		printf("%d ", cartela[i][j]);	//Imprime os numeros da cartela
		}
	printf("\n*************************************\n");	  //salta linha entre as cartelas			
	}
	system("pause");
	return 0;
}
