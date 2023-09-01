#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50   // Constante que define o tamanho do vetor pac, ou seja, a quantidade de pacientes que o sistema consegue armazenar durante a execução.


void titulo (){       //procedimento que exibe o cabeçalho do sistema durante a primeira etapa
	system("cls");     //função para limpar tela
	printf("**************************************  SISTEMA PARA CLASSIFICAÇÃO DE PACIENTES  *************************************** \n\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Etapa 1 - Cadastro \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");	
}

void titulo2 (){           //procedimento que exibe o cabeçalho do sistema durante a segunda etapa
	system("cls");        //função para limpar tela
	printf("**************************************  SISTEMA PARA CLASSIFICAÇÃO DE PACIENTES  *************************************** \n\n");
	printf("Etapa 1 concluída com sucesso! \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Etapa 2 - Triagem \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Responda ao seguinte questionário para ser direcionado à ala desejada: \n\n");
}

void titulo3 (){           //procedimento que exibe o cabeçalho do sistema durante a terceira etapa
	system("cls");         //função para limpar tela
	printf("**************************************  SISTEMA PARA CLASSIFICAÇÃO DE PACIENTES  *************************************** \n\n");
	printf("Etapa 1 concluída com sucesso! \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Etapa 2 concluída com sucesso! \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Etapa 3 - Resultado da pré avaliação e encaminhamento... \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Leia atentamente as instruções abaixo: \n\n");
}

int verificaResp (vValor, vResp, vPts){    //Essa função verifica a resposta e atribui pontos a cada questão de acordo com a resposta do paciente
	if (!(vResp == 'N' || vResp =='n' || vResp == 'S' || vResp == 's')){     //Se a resposta do usuario for diferente de S,s para Sim, ou N,n para Não, o sistema executa os passos abaixo
		printf("Valor Inválido! Digite novamente! \n");   // Caso a resposta seja diferente da esperada, o sistema exibe a mensagem - Valor Inválido! Digite novamente!
		vPts = 0;                           //Váriável que retorna os pontos obtidos em cada questão para a função pesquisa
		system("pause");            //Pausa o sistema para o usuário ler a mensagem de retorno e aguarda alguma interação para continuar a execução
	} else {
		if (vResp == 'S' || vResp == 's'){ //Se o usuário responder S,s para a questao, essa função retorna o valor de pts da questão para a func pesquisa
			vPts = vValor;        //Valor obtido pela resposta Sim
		} else {
			vPts = 0;      //se a resposta é N,n essa função retorna 0 pontos para a pesquisa
		}
	}
	return vPts;            //	retorno dos pontos obtidos nessa função
}

int pesquisa (){         //função pesquisa, realiza perguntas e exibe a quantidade de pontos acumulados de acordo com as respostas do paciente
	char resp;        //variável que controla cada resposta do paciente
	int pts, valor;   //pts - realiza o acumulo de pontos em cada resposta, valor - define o valor de pontos para cada questão
	pts = 0;     // iniciando a variável pts
	do {               //inicio da estrutura de repetição do-while
		titulo2();       //invoca a função titulo2 que exibe o cabeçalho do sistema
		printf("O paciente tem febre? Digite S - Sim ou N - Não \n");  // 5 pontos
		scanf("%c", &resp);            //realiza a leitura da resposta do peciente
		fflush(stdin);		 //comando para limpeza de buffer do teclado
		valor = 5;              //Variável que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp); // pts acumula a pontuação obtida da função verificaResp atraves dos paramentros valor, resp
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' ));    //condição de parada da estrutura de repetição
	
	do {
		titulo2();
		printf("Tem dor de cabeça? Digite S - Sim ou N - Não \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Variável que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem secreção nasal ou espirros? Digite S - Sim ou N - Não \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Variável que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem dor/irritação na garganta? Digite S - Sim ou N - Não \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Variável que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem tosse seca?  Digite S - Sim ou N - Não \n");  // 3 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 3;              //Variável que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem dificuldade respiratória? Digite S - Sim ou N - Não \n");  // 10 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 10;              //Variável que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem dores no corpo? Digite S - Sim ou N - Não \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Variável que controla o valor de cada resposta da pesquisa
		pts =  pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Tem diarréia? Digite S - Sim ou N - Não \n");  // 1 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 1;              //Variável que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? Digite S - Sim ou N - Não \n");  // 10 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 10;              //Variável que controla o valor de cada resposta da pesquisa
		pts =  pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	do {
		titulo2();
		printf("Esteve em locais com grande aglomeração? Digite S - Sim ou N - Não \n");  // 3 pontos
		scanf("%c", &resp);
		fflush(stdin);		
		valor = 3;              //Variável que controla o valor de cada resposta da pesquisa
		pts = pts + verificaResp(valor, resp);
	//	printf("Resposta depois de verificaResp dentro de Pesquisa  %d \n", pts);
	} while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n' )); 
	
	return pts;
}

struct paciente {           //criando o tipo registro para os dados dos pacientes
	char nome[50];        //vetor string de 50 posições para nome do paciente
	char cpf[14];           //vetor caracteres de 15 posições para cpf, lembrando que a ultima posição é \0 e indica o final da string
	char sexo;              //var tipo caractere para sexo 'M'ou'F'
	int idade, pts;      //variáveis do tiupo inteiro para idade e pontos
};

int main() {             //iniciando a função principal MAIN do sistema
	setlocale(LC_ALL,"Portuguese");  //Essa função permite o uso de acentos de acordo com a lingua portuguesa	
	struct paciente pac[TAM];          //cria a variável pac do tipo vetor de paciente, com tamanho TAM, definido na constante declarada no inicio do codigo
	int cont = 0; //variavel que controla a quantidade de pacientes cadastrados no vetor, iniciando em 0
	int str1, i;
	do {
		titulo();     //invocando a função titulo 
		printf("Digite o CPF do paciente ou 0 para encerrar o sistema! \n");
		gets(pac[cont].cpf);         //realizando a leitura do cpf do paciente no vetor pac
		fflush(stdin);           //limpeza de buffer
		str1 = strlen(pac[cont].cpf);          //str1 recebe o tamanho da string digitada pelo usuário ao informar o CPF
		if ((str1 == 1) && strcmp(pac[cont].cpf, "0") == 0) {      //Se o valor digitado for 0, a execução é encerrada
			exit;
		} else {          // se o CPF informado é diferente de 0, segue os comandos abaixo
			titulo();         //chamada para a funlçao titulo
			printf("Informe o nome do paciente: \n");
			gets(pac[cont].nome);     //leitura do nome do paciente na posição CONT do vetor
			fflush(stdin);      //limpeza do buffer a cada leitura 
			titulo();        //nova chamada para a função titulo
			printf("Qual a idade do paciente? \n");
			scanf("%d", &pac[cont].idade);              //leitura da idade na posição CONT do vetor de paciente
			fflush(stdin);
			i = 1;       //Iniciando a variável de controle i, que irá controlar a saída do do-while
			do {
				titulo();          //invocando a função titulo
				printf("Informe o sexo do paciente: M - masculino ou F - feminino: \n");
				scanf("%c", &pac[cont].sexo);     // realizando a leitura do sexo do paciente na posição CONT do vetor
				fflush(stdin);
				if (!(pac[cont].sexo == 'M' || pac[cont].sexo == 'm'  || pac[cont].sexo == 'F' || pac[cont].sexo == 'f' )){
					printf("Sexo inválido! Digite novamente o sexo do paciente. \n"); //Se o valor recebido é diferente de M,m,F,f, o sistema exibe a mensagem de erro de digitação
					system("pause");     //aguarda a interação do usuário
				} else {
					i = 0;   //Se a resposta foi conforme o sistema espera, i recebe 0 para sair do while
				}				
			} while (i == 1);    //condição  de saída do while
			pac[cont].pts = 0;    //iniciando a variável que acumula os pontos do paciente			
			titulo2();    //invocando a função titulo2			
			pac[cont].pts = pesquisa ();     //função pesquisa retornando para a variável paciente a quantida de pontos final, obtida na pesquisa			
			titulo3 ();	       //invocando a função titulo3	
			printf("O total de pontos do paciente é: %d \n", pac[cont].pts);   //Exibe a quantidade de pontos obtidos pelo paciente de acordo com a pesquisa			
			if (pac[cont].pts < 10) {    //Se a quantidade de pontos obtidas pelo usuário está entre 1 e 9, o sistema exibirá a mensagem abaixo
				printf("Seu risco para COVID-19 é baixo! Favor encaminhar para a ala 1 (Risco Baixo). \n\n\n");
			}else {
				if (pac[cont].pts < 20) {    //Se a quantidade de pontos obtidas pelo usuário está entre 10 e 19, o sistema exibirá a mensagem abaixo
					printf("Seu risco para COVID-19 é médio! Favor encaminhar para a ala 2 (Risco Médio). \n\n\n");
				} else {     //Se a quantidade de pontos obtidas pelo usuário está acima de 19, o sistema exibirá a mensagem abaixo
					printf("Seu risco para COVID-19 é alto! Favor encaminhar para a ala 3 (Risco Alto). \n\n\n");
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
	system("pause");	 //pausa o sistema e aguarda a interação do usuário
	}while (strcmp(pac[cont].cpf, "0"));    //condição de parada para a repetição do programa... "Quando o usuário digitar o CPF = 0"	
	return 0;
}
