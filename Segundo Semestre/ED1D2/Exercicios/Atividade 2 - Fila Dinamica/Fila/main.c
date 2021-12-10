#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Fila.h"

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int x, mat=110, posicao=1;
    struct aluno al, dados_aluno;

    Fila *fi;
    fi = cria_fila();
    x = tamanho_fila(fi);
    printf("\nO tamanho da fila �: %d", x);

    al.matricula = 100;
    al.n1 = 5.8;
    al.n2 = 7.2;
    al.n3 = 6.4;

    x = fila_cheia(fi);
    if(x)
    {
        printf("\nA fila est� cheia!");
    }
    else
    {
        printf("\nA fila n�o est� cheia.");
    }

    x = fila_vazia(fi);
    if(x)
    {
        printf("\nA fila est� vazia!");
    }
    else
    {
        printf("\nA fila n�o est� vazia.");
    }

    x = insere_fila(fi, al);
    if(x)
    {
        printf("\nElemento inserido com sucesso!");
    }
    else
    {
        printf("\nErro, o elemento n�o foi inserido.");
    }


    x = consulta_fila(fi, &al);
    if(x)
    {
        printf("\n-----------------------------------\n");
        printf("\nConsulta realizada com sucesso:");
        printf("\nMatr�cula: %d", al.matricula);
        printf("\nNota 1:  %.1f", al.n1);
        printf("\nNota 2:  %.1f", al.n2);
        printf("\nNota 3:  %.1f", al.n3);
        printf("\n-----------------------------------");
    }
    else
    {
        printf("\nErro, a consulta n�o foi realizada.");
    }

    x = remove_fila(fi);
    if(x)
    {
        printf("\nElemento removido com sucesso!");
    }
    else
    {
        printf("\nErro, o elemento n�o foi removido.");
    }


    destroi_fila(fi);
}
