#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

int main()
{
    int x;
    Lista *li;
    li = cria_lista();

    int  mat = 100, posicao = 1;

    struct aluno al, al2, al3, dados_aluno;

    al.matricula = 110;
    al.n1 = 6.3;
    al.n2 = 5.9;
    al.n3 = 8.4;

    al2.matricula = 90;
    al2.n1 = 6;
    al2.n2 = 3.9;
    al2.n3 = 7.4;

    al3.matricula = 120;
    al3.n1 = 3.3;
    al3.n2 = 1.9;
    al3.n3 = 2.4;

    x = insere_lista_inicio(li, al);
    if(x){
        printf("\nAluno inserido com sucesso!");
    }else{
        printf("\nErro aluno nao inserido!");
    }

    printf("\n");

    x = insere_lista_final(li, al2);
    if(x){
        printf("\nAluno inserido com sucesso!");
    }else{
        printf("\nErro aluno nao inserido!");
    }

    printf("\n");

    x = tamanho_lista(li);
    printf("\nTamanho da lista e: %d", x);

    printf("\n");

    x = lista_cheia(li);
    if(x){
        printf("\nLista cheia!");
    }else{
        printf("\nLista nao esta cheia!");
    }

    printf("\n");

    x = lista_vazia(li);
    if(x){
        printf("\nLista esta vazia!");
    }else{
        printf("\nLista nao esta vazia!");
    }

    printf("\n");

    x = insere_lista_ordenada(li, al3);
    if(x){
        printf("\nAluno inserido na posicao com sucesso!");
    }else{
        printf("\nErro aluno nao inserido!");
    }

    printf("\n");

    x = consulta_lista_pos(li, posicao, &dados_aluno);
    if(x){
        printf("\nConsulta por posicao realizada com sucesso!");
        printf("\nMatricula: %d", dados_aluno.matricula);
        printf("\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    }else{
        printf("\nNao foi possivel consultar posicao especifica!");
    }

    printf("\n");

    x = consulta_lista_mat(li, mat, &dados_aluno);
    if(x){
        printf("\nConsulta realizada com sucesso!");
        printf("\nMatricula: %d", dados_aluno.matricula);
        printf("\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    }else{
        printf("\nNao foi possivel consultar posicao especifica!");
    }

    printf("\n");

    x = remove_lista_inicio(li);
    if(x){
        printf("\nAluno removido com sucesso!");
    }else{
        printf("\nErro. aluno nao removido!");
    }

    printf("\n");

    x = remove_lista(li, mat);
    if(x){
        printf("\nAluno removido na posicao especifica com sucesso!");
    }else{
        printf("\nErro aluno nao removido na posicao especifica!");
    }

    printf("\n");

    libera_lista(li);
}
