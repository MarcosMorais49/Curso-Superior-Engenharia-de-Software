#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50   // Constante que define o tamanho do vetor pac, ou seja, a quantidade de pacientes que o sistema consegue armazenar durante a execu��o.


void titulo (){       //procedimento que exibe o cabe�alho do sistema durante a primeira etapa
	system("cls");     //fun��o para limpar tela
	printf("**************************************  SISTEMA PARA CLASSIFICA��O DE PACIENTES  *************************************** \n\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Etapa 1 - Cadastro \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");	
}

void titulo2 (){           //procedimento que exibe o cabe�alho do sistema durante a segunda etapa
	system("cls");        //fun��o para limpar tela
	printf("**************************************  SISTEMA PARA CLASSIFICA��O DE PACIENTES  *************************************** \n\n");
	printf("Etapa 1 conclu�da com sucesso! \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Etapa 2 - Triagem \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Responda ao seguinte question�rio para ser direcionado � ala desejada: \n\n");
}

void titulo3 (){           //procedimento que exibe o cabe�alho do sistema durante a terceira etapa
	system("cls");         //fun��o para limpar tela
	printf("**************************************  SISTEMA PARA CLASSIFICA��O DE PACIENTES  *************************************** \n\n");
	printf("Etapa 1 conclu�da com sucesso! \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Etapa 2 conclu�da com sucesso! \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Etapa 3 - Resultado da pr� avalia��o e encaminhamento... \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Leia atentamente as instru��es abaixo: \n\n");
}

int verificaResp (vValor, vResp, vPts){    //Essa fun��o verifica a resposta e atribui pontos a cada quest�o de acordo com a resposta do paciente
	if (!(vResp == 'N' || vResp =='n' || vResp == 'S' || vResp == 's')){     //Se a resposta do usuario for diferente de S,s para Sim, ou N,n para N�o, o sistema executa os passos abaixo
		printf("Valor Inv�lido! Digite novamente! \n");   // Caso a resposta seja diferente da esperada, o sistema exibe a mensagem - Valor Inv�lido! Digite novamente!
		vPts = 0;                           //V�ri�vel que retorna os pontos obtidos em cada quest�o para a fun��o pesquisa
		system("pause");            //Pausa o sistema para o usu�rio ler a mensagem de retorno e aguarda alguma intera��o para continuar a execu��o
	} else {
		if (vResp == 'S' || vResp == 's'){ //Se o usu�rio responder S,s para a questao, essa fun��o retorna o valor de pts da quest�o para a func pesquisa
			vPts = vValor;        //Valor obtido pela resposta Sim
		} else {
			vPts = 0;      //se a resposta � N,n essa fun��o retorna 0 pontos para a pesquisa
		}
	}
	return vPts;            //	retorno dos pontos obtidos nessa fun��o
}

int pesquisa (){         //fun��o pesquisa, realiza perguntas e exibe a quantidade de pontos acumulados de acordo com as respostas do paciente
	char resp;        //vari�vel que controla cada resposta do paciente
	int pts, valor;   //pts - realiza o acumulo de pontos em cada resposta, valor - define o valor de pontos para cada quest�o
	pts = 0;     // iniciando a vari�vel pts
	do {               //inicio da estrutura de repeti��o do-while
		titulo2();       //invoca a fun��o titulo2 que exibe o cabe�alho do sistema
		printf("O paciente tem febre? Digite S - Sim ou N - N�o \n");  // 5 pontos
		scanf("%c", &resp);            //realiza a leitura da resposta do peciente
		fflush(stdin);		 //comando para limpeza de buffer do teclado
		valor = 5;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp); // pts acumula a pontua��o obtida da fun��o verificaResp atraves dos paramentros valor, resp
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' ));    //condi��o de parada da estrutura de repeti��o
	
	do {
		titulo2();
		printf("Tem dor de cabe�a? Digite S - Sim ou N - N�o \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem secre��o nasal ou espirros? Digite S - Sim ou N - N�o \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem dor/irrita��o na garganta? Digite S - Sim ou N - N�o \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem tosse seca?  Digite S - Sim ou N - N�o \n");  // 3 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 3;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem dificuldade respirat�ria? Digite S - Sim ou N - N�o \n");  // 10 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 10;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem dores no corpo? Digite S - Sim ou N - N�o \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts =  pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem diarr�ia? Digite S - Sim ou N - N�o \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Esteve em contato, nos �ltimos 14 dias, com um caso diagnosticado com COVID-19? Digite S - Sim ou N - N�o \n");  // 10 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 10;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts =  pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Esteve em locais com grande aglomera��o? Digite S - Sim ou N - N�o \n");  // 3 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 3;              //Vari�vel que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	return pts;
}

struct paciente {           //criando o tipo registro para os dados dos pacientes
	char nome[50];        //vetor string de 50 posi��es para nome do paciente
	char cpf[14];           //vetor caracteres de 15 posi��es para cpf, lembrando que a ultima posi��o � \0 e indica o final da string
	char sexo;              //var tipo caractere para sexo 'M'ou'F'
	int idade, pts;      //vari�veis do tiupo inteiro para idade e pontos
};

int main() {             //iniciando a fun��o principal MAIN do sistema
	setlocale(LC_ALL,"Portuguese");  //Essa fun��o permite o uso de acentos de acordo com a lingua portuguesa	
	struct paciente pac[TAM];          //cria a vari�vel pac do tipo vetor de paciente, com tamanho TAM, definido na constante declarada no inicio do codigo
	int cont = 0; //variavel que controla a quantidade de pacientes cadastrados no vetor, iniciando em 0
	int str1, i;
	do {
		titulo();     //invocando a fun��o titulo 
		printf("Digite o CPF do paciente ou 0 para encerrar o sistema! \n");
		gets(pac[cont].cpf);         //realizando a leitura do cpf do paciente no vetor pac
		fflush(stdin);           //limpeza de buffer
		str1 = strlen(pac[cont].cpf);          //str1 recebe o tamanho da string digitada pelo usu�rio ao informar o CPF
		if ((str1 == 1) && strcmp(pac[cont].cpf, "0") == 0) {      //Se o valor digitado for 0, a execu��o � encerrada
			exit;
		} else {          // se o CPF informado � diferente de 0, segue os comandos abaixo
			titulo();         //chamada para a funl�ao titulo
			printf("Informe o nome do paciente: \n");
			gets(pac[cont].nome);     //leitura do nome do paciente na posi��o CONT do vetor
			fflush(stdin);      //limpeza do buffer a cada leitura 
			titulo();        //nova chamada para a fun��o titulo
			printf("Qual a idade do paciente? \n");
			scanf("%d", &pac[cont].idade);              //leitura da idade na posi��o CONT do vetor de paciente
			fflush(stdin);
			i = 1;       //Iniciando a vari�vel de controle i, que ir� controlar a sa�da do do-while
			do {
				titulo();          //invocando a fun��o titulo
				printf("Informe o sexo do paciente: M - masculino ou F - feminino: \n");
				scanf("%c", &pac[cont].sexo);     // realizando a leitura do sexo do paciente na posi��o CONT do vetor
				fflush(stdin);
				if (!(pac[cont].sexo == 'M' || pac[cont].sexo == 'm'  || pac[cont].sexo == 'F' || pac[cont].sexo == 'f' )){
					printf("Sexo inv�lido! Digite novamente o sexo do paciente. \n"); //Se o valor recebido � diferente de M,m,F,f, o sistema exibe a mensagem de erro de digita��o
					system("pause");     //aguarda a intera��o do usu�rio
				} else {
					i = 0;   //Se a resposta foi conforme o sistema espera, i recebe 0 para sair do while
				}				
			} while (i == 1);    //condi��o  de sa�da do while
			pac[cont].pts = 0;    //iniciando a vari�vel que acumula os pontos do paciente			
			titulo2();    //invocando a fun��o titulo2			
			pac[cont].pts = pesquisa ();     //fun��o pesquisa retornando para a vari�vel paciente a quantida de pontos final, obtida na pesquisa			
			titulo3 ();	       //invocando a fun��o titulo3	
			printf("O total de pontos do paciente �: %d \n", pac[cont].pts);   //Exibe a quantidade de pontos obtidos pelo paciente de acordo com a pesquisa			
			if (pac[cont].pts < 10) {    //Se a quantidade de pontos obtidas pelo usu�rio est� entre 1 e 9, o sistema exibir� a mensagem abaixo
				printf("Seu risco para COVID-19 � baixo! Favor encaminhar para a ala 1 (Risco Baixo). \n\n\n");
			}else {
				if (pac[cont].pts < 20) {    //Se a quantidade de pontos obtidas pelo usu�rio est� entre 10 e 19, o sistema exibir� a mensagem abaixo
					printf("Seu risco para COVID-19 � m�dio! Favor encaminhar para a ala 2 (Risco M�dio). \n\n\n");
				} else {     //Se a quantidade de pontos obtidas pelo usu�rio est� acima de 19, o sistema exibir� a mensagem abaixo
					printf("Seu risco para COVID-19 � alto! Favor encaminhar para a ala 3 (Risco Alto). \n\n\n");
				}
			}	
			FILE *arq;
			arq = fopen("arquivo.txt", "a");
			fprintf(arq, "Paciente: %s \n", pac[cont].nome);
			fprintf(arq, "CPF: %s \n", pac[cont].cpf);
			fprintf(arq, "Sexo: %c \n", pac[cont].sexo);
			fprintf(arq, "Idade: %d \n", pac[cont].idade);
			fprintf(arq, "Total de pontos: %d \n", pac[cont].pts);
			fprintf(arq, "%s", "---------------------------------------------------------------------------\n");	
			fclose(arq);   		
		}
	system("pause");	 //pausa o sistema e aguarda a intera��o do usu�rio
	}while (strcmp(pac[cont].cpf, "0"));    //condi��o de parada para a repeti��o do programa... "Quando o usu�rio digitar o CPF = 0"	
	return 0;
}
