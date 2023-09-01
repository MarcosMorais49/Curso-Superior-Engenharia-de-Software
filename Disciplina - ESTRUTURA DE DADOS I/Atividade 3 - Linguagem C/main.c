#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define tam 10

typedef struct Curso {
	int id;
	char nome[30];
	int duracao;
	char coordenador[30];
}curso;

typedef struct Alunos {
	int ra;
	char nome[30];
	int matricula;
	struct curso *alunoCurso;
}alunos;


int main(int argc, char *argv[]) {
	alunos al[tam];
	curso cur[3];
	
	cur[0].id = 1;
	strcpy(cur[0].coordenador, "Professor Raimundo");
	cur[0].duracao = 4;
	strcpy(cur[0].nome, "Engeneharia de Software");
	
	cur[1].id = 1;
	strcpy(cur[1].coordenador, "Professor Girafales");
	cur[1].duracao = 4;
	strcpy(cur[1].nome, "Ciencias da Computação");
	
	al[0].ra = 001;
	al[0].matricula = 991;
	strcpy(al[0].nome, "Marcos Vinicius");
	al[0].alunoCurso = 1;
	
	printf("R.A = %d\n",al[0].ra);
	printf("Matricula = %d\n", al[0].matricula);
	printf("Aluno = %s\n", al[0].nome);
	printf("Curso = %d\n",al[0].alunoCurso->nome);
	return 0;
}
