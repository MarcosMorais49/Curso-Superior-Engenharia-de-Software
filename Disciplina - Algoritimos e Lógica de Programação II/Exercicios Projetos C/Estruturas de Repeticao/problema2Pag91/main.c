#include <stdio.h>
#include <stdlib.h>

int main() {
	int notas, codAluno, aprovados, reprovados, i;
	float media, nProva;	
	aprovados = 0;
	reprovados = 0;
	printf("Informe a quantidade de notas da disciplina: \n");
	scanf("%d", &notas);
	do {
		printf("Informe o codigo do aluno: \n");
		scanf("%d", &codAluno);
		if (codAluno != 0){
			media = 0;
			for (i=0; i<notas; i++){
				printf("Informe a nota obtida na prova %d. \n", i+1);
				scanf("%f", &nProva);
				media = media + nProva;				
			}
			media = media / notas;
			if (media >= 6){
				aprovados = aprovados + 1;
			} else {
				reprovados = reprovados + 1;
			}			
		}		
	} while (codAluno != 0);
	printf ("A quantidade de alunos APROVADOS e: %d \n", aprovados);
	printf("A quantidade de alunos REPROVADOS e: %d \n", reprovados);	
	return 0;
}
