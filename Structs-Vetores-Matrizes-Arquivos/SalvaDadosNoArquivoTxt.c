#include <stdio.h>

#define QNT_ALUNOS 3

struct Aluno {
	char nome[50];
	int matricula;
	float nota;	
};

void imprimeDadosAlunos(struct Aluno aluno[QNT_ALUNOS]){
	
	int i;
	
	printf("\nDADOS:\n");
	for (i = 0; i < QNT_ALUNOS; i++){
		printf("\nNOME: %s\nMATRICULA: %d\nNOTA: %.1f\n", aluno[i].nome, aluno[i].matricula, aluno[i].nota);
	}
	
}

void salvarDados (struct Aluno aluno[QNT_ALUNOS]){
	
	int i;

	FILE *dadosalunos = fopen("dadosalunos.txt", "w");
	
	if(dadosalunos == NULL){
		printf("Erro ao criar arquivo\n");
		return;
	}
	
	for (i = 0; i < QNT_ALUNOS; i++){
		fprintf(dadosalunos,"NOME: %s\nMATRICULA: %d\nNOTA: %.1f\n\n", aluno[i].nome, aluno[i].matricula, aluno[i].nota);
	}
	
	fclose(dadosalunos);
	
}

int main(){
	
	struct Aluno aluno[QNT_ALUNOS];
	int i;
	
	printf("Digite os dados dos alunos:\n");
	for (i = 0; i < QNT_ALUNOS; i++){
		printf("Nome Aluno %d: ", i + 1);
		scanf("%s", &aluno[i].nome);
		printf("Matricula Aluno %d: ", i + 1);
		scanf("%d", &aluno[i].matricula);
		printf("Nota Aluno %d: ", i + 1);
		scanf("%f", &aluno[i].nota);
		printf("\n");	
	}

	imprimeDadosAlunos(aluno);
	salvarDados(aluno);
	
}
