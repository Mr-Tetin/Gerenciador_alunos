#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int matricula;
    float nota;
    int idade;
}tipo_aluno;

void imprime(int qtdalunos, tipo_aluno alunos[]){

    printf("+-----------------*TABELA DOS ALUNOS*-----------------+\n");
    printf("|  %-10s  |  %-10s  |  %-6s  |  %-6s  |\n","NOME", "MATRICULA", "NOTA", "IDADE");
    printf("+-----------------------------------------------------+");
    for(int i = 0; i < qtdalunos; i++){
        printf("\n|  %-10s  |  %-10d  |  %-6.2f  |  %-6d  |",
               alunos[i].nome, alunos[i].matricula, alunos[i].nota, alunos[i].idade);
    }
    printf("\n+-----------------------------------------------------+");
}
int main(){

    int qtdalunos;


    printf("Quantos alunos deseja cadastrar: ");
    scanf("%d", &qtdalunos);

    tipo_aluno alunos[qtdalunos];

    for(int i = 0; i < qtdalunos; i++){

        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Digite a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);
        printf("Digite a nota do aluno: ");
        scanf("%f", &alunos[i].nota);
        printf("Digite a idade do aluno: ");
        scanf("%d", &alunos[i].idade);
    }

    imprime(qtdalunos, alunos);

}
