#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i, j, l, numCart, temp, cont;
	cont = 0;
	
	printf("Informe o número de cartelas que deseja imprimir: \n");
	scanf("%d", &numCart);       //faz a leitura da quantidade de cartelas a imprimir
	fflush(stdin);            // comando usado para limpar buffer do teclado
	printf("\n");
	system("cls");
	int cartela[numCart][10];         // matriz com linhas a definir pelo usuario de acordo com a quantidade de cartelas e 10 colunas para as dezenas da cartela
	for (i=0; i<numCart; i++){        //percorrer a matriz na linha i
		printf("Cartela %d \n", i+1);  
		for (j=0; j<10; j++){         //percorer a matriz pela coluna j
			temp = rand () %99;  //Rand gera um numero aleatório e armazena em temp para ser feito a varificação de duplicidade antes de alimentar a matriz cartela
			if (j==0) {      //Se é o primeiro numero da linha, não terá outro para fazer a comparação de duplicidade, a matriz recebe sem verificação
				cartela[i][j] = temp;  // portanto cartela recebe o temp(rand) sem fazer a varificação
			} else {       // se não é o primeiro numero da cartela, o ssitema entra no else para verificar se ja existe um numero igual na cartela
				do {     //inicio do comando do-While, para executar a tarefa antes da comparação. O sistema executa o bloco ao menos uma vez
					cont = 0;  //essa variável faz o controle caso o temo seja  um numero repetido na cartela 
					for (l=j-1; l>=0; l-- ){    //Esse laço percorre o vetor ao contrário (Do fim para o inicio					
						if (temp == cartela[i][l]){ //Verifica se o numero TEMP é igual ao numero da cartela
							temp = rand () %99;    // Caso o numero TEMP seja repetido, o sistema deve gerar um novo numero TEMP
							cont = 1;  //Essa variável controla se teve alterações na TEMP, se cont=1, será necessário percorrer novamente o vetor, pois o novo temp pode continuar sendo igual a algum numero existente no vetor
						} 
					}					
				} while (cont == 1);  //Condição de parada do laço de repetição (cont seja igual a 0)
				cartela[i][j] = temp;     //Após ja ter sido verificado e confirmado que o numero TEMP não existe na cartela, o valor é atribuido na matriz cartela
			} 
		printf("%d ", cartela[i][j]);	//Imprime os numeros da cartela
		}
	printf("\n*************************************\n");	  //salta linha entre as cartelas			
	}
	system("pause");
	return 0;
}
