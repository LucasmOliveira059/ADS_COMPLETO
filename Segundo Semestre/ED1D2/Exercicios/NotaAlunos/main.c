#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Alunos = 0;
    float notas = 0, media = 0;
    float *vet = NULL;

    printf("Quantos Alunos formam esta turma? \n");
    scanf("%d", &Alunos);

    vet = (float*)malloc(Alunos *sizeof(float));

    for(int i = 0; i <  Alunos; i++){
        vet[i] = i *(1);
         printf("Digite a note do [%d] Estudante: \n", i+1);
         scanf("%f", &vet[i]);
         notas += vet[i];
    }
    media = notas / Alunos;

    printf("\nA nota média desta turma foi de [%.2f]", media);

    free(vet);

}
