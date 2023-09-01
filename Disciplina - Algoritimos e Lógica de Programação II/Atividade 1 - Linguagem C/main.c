#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {	//inicia o main
	int op, verCod, vJoao, vMaria, vZe, vNulo, preCod, pZur, pGom, pNulo;    //variaveis
	setlocale(LC_ALL, "Portuguese");
	printf("Pesquisa Eleitoral \n\n\n");
	printf("Escolha uma op��o: \n\n");
	printf("1 - Votar\n");
	printf("2 - Apura��o dos votos\n");
	printf("3 - Sair \n\n");
	scanf("%d", &op);        									     // recebe a vari�vel op
	fflush(stdin);              									  //esvazia o buffer do teclado
	system("cls");          										  // limpa tela
	vJoao = 0;              											  //inicia vari�veis
	vMaria = 0;              											  //inicia vari�veis
	vZe = 0;               												 //inicia vari�veis
	vNulo = 0;             											    //inicia vari�veis
	pZur = 0;             											   //inicia vari�veis
	pGom = 0;             											   //inicia vari�veis
	pNulo = 0;            										    //inicia vari�veis
	while (op != 3) {    // inicia o while e executa ate que seja digitado o valor 3 para encerrar o sistema.
		if (op == 1 || op == 2){	// inicia o bloco if 1 para selecionar a op��o votar ou apurar votos	
			if (op == 1){   // inicia o if 2, entra nesse bloco caso o usu�rio selecione op 1 			
				verCod = 0;                   //inicia vari�vel 
				preCod = 0;                   //inicia vari�vel
				printf("Candidatos a vereadores: \n\n");
				printf("111 - Vereador Jo�o do Frete\n");
				printf("222 - Vereador Maria da Pamonha\n");
				printf("333 - Vereador Z� da Farm�cia\n");
				printf("444 - Voto Nulo \n\n");
				printf("Informe o c�digo do vereador que deseja votar: \n");
				scanf("%d", &verCod);               //recebe variavel verCod
				switch (verCod) {  //inicia o switch
					case 111 : {   //inicia o case 111
						vJoao = vJoao + 1;                    // recebe contagem dos votos para vereador Jo�o do Frete
						break;
					}  // encerra o case 111
					case 222 : {  //inicia o case 222
						vMaria = vMaria + 1;                    // recebe contagem dos votos para o vereador Maria da Pamonha
						break;
					}   //encerra o case 222
					case 333 : {  //inicia o case 333
						vZe = vZe + 1;                    // recebe contagem dos votos para o vereador Ze da Farmacia
						break;
					}    //encerra o case 333
					case 444 : {   //inicia o case 444
						vNulo = vNulo + 1;                    // recebe contagem dos votos para votar nulo para vereador
						break;
					}   //encerra o case 444
					
					default : {    // inicia o defaul
						system("cls");               //limpa a tela
						printf("Voto Inv�lido! \n");
						system("pause");              //aguarda integra��o do usu�rio
						break;
					}    // encerra o defaul
					}    // encerra o switch
					system("cls");
					printf("Candidatos a prefeito: \n\n");
					printf("11 - Prefeito Dr. Zureta\n");
					printf("22 - Prefeito Senhor Gomes\n");
					printf("44 - Voto Nulo \n\n");
					printf("Informe o c�digo do prefeito que deseja votar: \n");
					scanf("%d", &preCod);                                  //recebe variavel preCod (numero do prefeito a ser votado)
					fflush(stdin);															//esvazia buffer do teclado
					switch (preCod) {    //inicia o switch
						case 11 : {        //inicia o case 11
							pZur = pZur + 1;                    // recebe contagem dos votos para o prefeito Dr Zureta
							break;
						}      //encerra o case 111
						case 22 : {       //inicia o case 22
							pGom = pGom + 1;                    // recebe contagem dos votos para o prefeito Senhor Gomes
							break;
						}       //encerra o case 22
						case 44 : {           //inicia o case 44
							pNulo = pNulo + 1;                    // recebe contagem dos votos para votar nulo para prefeito
							break;
						}				//encerra o case 44
						default : {       //inicia o default
							system("cls");                     //limpa tela
							printf("Voto Inv�lido! \n");
							system("pause");             // aguarda intera��o do usu�rio
							break;
						}               //encerra o default
					}                //encerra o switch
					
	
			} else {  //inicia o else 2, caso o usu�rio informe a op 2 (Apurar votos)
				system("cls");
				printf("Votos Apurados\n\n");
				printf("Vereadores: \n\n");
				printf("Vereador Jo�o do Frete ---------- %d \n", vJoao);    // o sistema exibe o total de votos para cada candidato a vereador
			    printf("Vereador Maria da Pamonha ------- %d \n", vMaria);   // o sistema exibe o total de votos para cada candidato a vereador
			    printf("Vereador Z� da Farm�cia --------- %d \n", vZe);      // o sistema exibe o total de votos para cada candidato a vereador
			    printf("Votos Nulos --------------------- %d \n\n", vNulo);   // o sistema exibe o total de votos para cada candidato a vereador
				
				printf("Prefeito: \n\n");
				printf("Prefeito Dr. Zureta ---- %d \n", pZur);             // o sistema exibe o total de votos para cada candidato a prefeito
			    printf("Prefeito Sr. Gomes ----- %d \n", pGom);             // o sistema exibe o total de votos para cada candidato a prefeito
			    printf("Votos Nulos ------------ %d \n\n", pNulo);            // o sistema exibe o total de votos para cada candidato a prefeito
			    system("pause");            //aguarda intera��o do usu�rio
			}  // encerra o if/else 2
			
		} else {   //inicia o else 1
			printf("Op��o Inv�lida! \n");
			system("pause");                       //aguarda intera��o do usu�rio
		}   //encerra o if/else 1
	system("cls");                    //limpa tela
	op = 0;             // iniciando novamente para tratar possivel erro caso o usu�rio digite um tipo de dado diferente de %d, nesse caso, o sistema manteria o ultimo valor informado.
	printf("Pesquisa Eleitoral \n\n\n");
	printf("Escolha uma op��o: \n\n");
	printf("1 - Votar\n");
	printf("2 - Apura��o dos votos\n");
	printf("3 - Sair\n");
	scanf("%d", &op);                    //recebe variavel op
	fflush(stdin);                   //esvazia buffer do teclado
	system("cls");                  //limpa tela
	}    // encerra o while
	return 0;
}   //encerra o main
