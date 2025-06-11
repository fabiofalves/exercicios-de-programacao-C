#include <stdio.h>

struct Aluno {
	char nome[50];
	int matricula;
	float nota;	
};

void imprimeDadosAlunos(struct Aluno aluno[3]){
	
	int i;
	
	printf("\nDADOS:\n");
	for (i = 0; i < 3; i++){
		printf("\nNOME: %s\nMATRICULA: %d\nNOTA: %.1f\n", aluno[i].nome, aluno[i].matricula, aluno[i].nota);
	}
	
}

int main(){
	
	struct Aluno aluno[3];
	int i;
	
	printf("Digite os dados dos alunos:\n");
	for (i = 0; i < 3; i++){
		printf("Nome Aluno %d: ", i + 1);
		scanf("%s", &aluno[i].nome);
		printf("Matricula Aluno %d: ", i + 1);
		scanf("%d", &aluno[i].matricula);
		printf("Nota Aluno %d: ", i + 1);
		scanf("%f", &aluno[i].nota);
		printf("\n");	
	}

	imprimeDadosAlunos(aluno);
	
}
