//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define combustivel 6.596      
#define vert 5

//variáveis
float G[vert][vert];

//prototipação
void dijkstra(float G[vert][vert],int n,int inicial);
void grafo_criar(void);
void calculaCusto(int linha, int coluna, int val);
void mostraGrafo();

//Função Principal
int main(){
	setlocale(LC_ALL,"portuguese");
	int i,j,u,l,p;
		
	grafo_criar();
	calculaCusto(0,1,2);
	calculaCusto(0,2,0);
	calculaCusto(1,3,1);
	calculaCusto(1,4,2);
	calculaCusto(2,1,7);
	calculaCusto(2,4,5);
	calculaCusto(3,4,4);
	
	mostraGrafo();
	printf("--------------------------------------------------\n");	
	printf("\nInforme o nó inicial(de 1 à 5):");
	scanf("%d",&u-1);
		
	dijkstra(G,vert,u);
	
	return 0;
}

void dijkstra(float G[vert][vert],int n,int inicial){
	float distancia[n], distanciamin, custo[n][n];
 	int pred[n];
 	int visitado[n],cont,proxno,i,j;
	for(i=0;i<n;i++)
    	for(j=0;j<n;j++)
      		if(G[i][j]==-1)
        		custo[i][j]=HUGE_VAL;
      		else
        		custo[i][j]=G[i][j];
	for(i=0;i<n;i++){
		distancia[i]=custo[inicial][i];
    	pred[i]=inicial;
    	visitado[i]=0;
	}
	distancia[inicial]=0;
	visitado[inicial]=1;
	cont=1;
	while(cont<n-1){
		distanciamin=HUGE_VAL;
		for(i=0;i<n;i++)
			if(distancia[i]<distanciamin&&!visitado[i]){
				distanciamin=distancia[i];
        		proxno=i;
      		}
    	//verifica se existe melhor caminho atraves do proximo node
		visitado[proxno]=1;
    	for(i=0;i<n;i++){
			if(!visitado[i])
        	if(distanciamin+custo[proxno][i]<distancia[i]){
				distancia[i]=distanciamin+custo[proxno][i];
				pred[i]=proxno;
        	}
    	}
      	cont++;
    }
    //imprime o caminho e a distancia de cada node
    for(i=0;i<n;i++){
		if(i!=inicial){
        	printf("\nDistancia entre os nós %d e %d = %.3f",inicial+1,i+1,distancia[i]);
        	printf("\nCaminho = %d",i+1);
        	j=i;
			do{
          		j=pred[j];
          		printf("<-%d",j+1);
        	}while(j!=inicial);
      	}
      	printf("\n");
	}
}

void grafo_criar(void){                
	int i, j;
	//Preenchendo a matriz com -1
	for (i = 0; i < vert; i++){
		for (j=0; j < vert; j++ ){
			G[i][j] = -1;
		}
	}
}

//calcula Peso
void calculaCusto(int linha, int coluna, int val){					
	G[linha][coluna] = val * combustivel;
}

void mostraGrafo(){
	int i,j;
	printf("\n********** Grafo - Estrutura de Dados I **********\n\n");
	printf("Aluno: Marcos Vinicius de Morais\n");
	printf("R.A.: 20127542-5\n");
	printf("--------------------------------------------------");
	for (i=0; i<vert; i++){
		printf("\n");
		for (j=0; j<vert; j++){
			printf("%.3f    ",G[i][j]);
		}
	}
	printf("\n");
}

