#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Pilha.h"

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int x, mat=110, posicao=1;
    struct aluno al, dados_aluno;

    Pilha *pi;
    pi = cria_pilha();
    x = tamanho_pilha(pi);
    printf("\nO tamanho da pilha é: %d", x);

    al.matricula = 110;
    al.n1 = 5.7;
    al.n2 = 7.9;
    al.n3 = 8.2;

    x = pilha_cheia(pi);
    if(x)
    {
        printf("\nA pilha está cheia!");
    }
    else
    {
        printf("\nA pilha não está cheia.");
    }

    x = pilha_vazia(pi);
    if(x)
    {
        printf("\nA pilha está vazia!");
    }
    else
    {
        printf("\nA pilha não está vazia.");
    }

     x = insere_pilha(pi, al);
    if(x)
    {
        printf("\nElemento inserido com sucesso!");
    }
    else
    {
        printf("\nErro, o elemento não foi inserido.");
    }

    x = consulta_pilha(pi, &al);
    if(x)
    {
        printf("\n------------------------------------\n");
        printf("\nConsulta realizada com sucesso:");
        printf("\nMatrícula: %d", al.matricula);
        printf("\nNota 1:  %.1f", al.n1);
        printf("\nNota 2:  %.1f", al.n2);
        printf("\nNota 3:  %.1f", al.n3);
        printf("\n------------------------------------");
    }
    else
    {
        printf("\nErro, a consulta não foi realizada.");
    }

    x = remove_pilha(pi);
    if(x)
    {
        printf("\nElemento foi removido com sucesso!");
    }
    else
    {
        printf("\nErro, elemento não foi removido.");
    }

    destroi_pilha(pi);
}
