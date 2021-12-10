#include<stdio.h>
#include <locale.h>

int main(){

    int contador, maior, menor, soma, produto, vetor[20];
    float media;

    setlocale(LC_ALL,"Portuguese");
    soma=0;
    produto=0;

    for (int contador = 0; contador < 20; ++contador) {
        printf(" vetor[%d]: ", contador);
        scanf("%d", &vetor[contador]);
    }

    for(contador=0; contador<20; contador++){
        soma=soma+vetor[contador];
        media = soma/20;
        produto =(produto *vetor[contador]);
  }

    maior = vetor[0];
    menor = vetor[0];

    for (int contador = 0; contador < 20; ++contador) {
        if (vetor[contador] > maior) maior = vetor[contador];
        if (vetor[contador] < menor) menor = vetor[contador];
    }

    for(contador=0; contador < 20; contador++)
        printf("\n%d ", vetor[contador]);

    printf("\n\nMaior: %d\n", maior);
    printf("Menor: %d", menor);
  	printf("\nProduto: %d\n",produto);
  	printf("\nMédia: %.2f", media);
   }
