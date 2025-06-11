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


void lerDadosAlunos(){
	
	struct Aluno aluno[QNT_ALUNOS];
	int i;
	FILE *dados = fopen("C:\\temp\\dadosalunos.txt", "r");
	
	if(dados == NULL){
		printf("Erro ao ler arquivo\n");
		return;
	}
	
	for (i = 0; i < QNT_ALUNOS; i++){
		fscanf(dados, "\nNOME: %s\nMATRICULA: %d\nNOTA: %f\n", &aluno[i].nome, &aluno[i].matricula, &aluno[i].nota);
	}
	
	fclose(dados);
	
	imprimeDadosAlunos(aluno);
	
}

int main(){
	
	lerDadosAlunos();
	
	return 0;
}
