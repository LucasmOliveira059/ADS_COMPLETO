#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct strc_aluno{
    int id;
    char nome[30];
    float p1;
    float p2;
    float p3;
    float media;
} Aluno;

Aluno ColetaDados();
void imprimeDados(Aluno *alunos, int n);
void imprimeMaior(Aluno *alunos, int n);


main(){
    setlocale(LC_ALL, "Portuguese");
    int n=3;
    Aluno alunos[n];
    for (int i = 0; i < n; ++i){
       alunos[i] = ColetaDados();
    }
    printf("--------------------------------------------------------\n\n");
    printf("Aluno(a) com a Maior Média: \n");
       imprimeDados(alunos, n);

}

Aluno ColetaDados() {
    Aluno alunos ;

        printf("Digite o ID do aluno: ");
            scanf("%d",&alunos.id);
            getchar();
        printf("Digite o nome do aluno: ");
            fgets(alunos.nome,30,stdin);
        printf("Digite a nota da P 1: ");
            scanf("%f",&alunos.p1);
        printf("Digite a nota da P 2: ");
            scanf("%f",&alunos.p2);
        printf("Digite a nota da P 3: ");
            scanf("%f",&alunos.p3);
        printf("\n");
        alunos.media = (alunos.p1+alunos.p2+alunos.p3)/3;

        return alunos;
}

void imprimeDados(Aluno *alunos, int n){
    float maior=0;
    int x;
     for (int i = 0; i < n; ++i){
        if(alunos[i].media > maior){
            maior = alunos[i].media;
            x = i;
        }
     }
        printf("\n\nID do aluno: %d",alunos[x].id);
        printf("\nnome do aluno: %s",alunos[x].nome);
        printf("nota da Prova 1: %0.2f",alunos[x].p1);
        printf("\nnota da Prova 2: %0.2f",alunos[x].p2);
        printf("\nnota da Prova 3: %0.2f",alunos[x].p3);
        printf("\n\nMedia do aluno: %0.2f\n\n",alunos[x].media);
}
