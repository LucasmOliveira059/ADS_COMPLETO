#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N  25

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *vet = NULL;
    vet = (int*) malloc(N * sizeof(int));

    if(vet == NULL){
        printf("ERRO: Falta de memória\n");
        exit(1);
    }

    for(int i =0; i<N; i++){
        vet[i]=i*(1);
        if(vet[i] % 2==1){
             printf("vet[%d] num = %d\n",i,vet[i]);
        }
    }
    free(vet);
}
