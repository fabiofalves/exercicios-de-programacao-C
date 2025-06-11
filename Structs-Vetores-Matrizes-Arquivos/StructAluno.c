#include <stdio.h>

struct Aluno {
	char nome[50];
	int matricula;
	float nota;	
};

int main(){
	
	struct Aluno aluno;
	
	printf("Digite os dados do aluno:\n");
	printf("Nome: ");
	scanf("%s", &aluno.nome);
	printf("Matricula: ");
	scanf("%d", &aluno.matricula);
	printf("Nota: ");
	scanf("%f", &aluno.nota);
	
	printf("\nDADOS:\n\nNOME: %s\nMATRICULA: %d\nNOTA: %.2f", aluno.nome, aluno.matricula, aluno.nota);
	
}
