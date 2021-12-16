#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include "listaLigada.h"

typedef struct elemento ELEM;

Lista *criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL; //se alocação ok, preenche conteudo com null
    }
    return li;
}

void apagaLista(Lista *li){ //passa o endereço da inteira que se quer liberar
    if(li != NULL){   //Lista é valida se for diferente de NULL
        ELEM *no; //enquanto o primeiro elemento da lista fo direfente
        while((*li) != NULL){
            no = *li;                   //while: enquanto não estiver numa lista vazia, executa esse conjunto de instruções, até que a lista esteja vazia e apontando para nulo

            *li = (*li)->prox;   //inicio da lista aponta para o prox da lista
            free(no);
        }
        free(li); //ao final, libera a cabeça da lista
    }
}

int menuInit(){
    int menu;
   printf("\t|-=-=-=-=-=-=-=-=-=-=-Menu-=-=-=-=-=-=-=-=-==-=-=-|\n\n");
    printf("\t\t=-=-=-DIGITE : \n");
    printf("[1] Adicionar funcionário \n[2] Excluir funcionário \n[3] Editar funcionário ");
    printf("\n[4] Buscar funcionário por ID \n[5] Exibir funcionário ordenados por ID ");
    printf("\n[6] Exibir uma lista de funcionários por faixa salarial. \n[0] Sair e Salvar.\n");
    printf("\t|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-|\n\n");
    scanf("%d", &menu);
    return menu;
}

FUNCIONARIO coletaDados(){
    FUNCIONARIO func;
         printf("Digite o ID do funcionário: \n");
         scanf("%d", &func.id);
         printf("Digite a idade da pessoa:\n");
         scanf("%d", &func.idade);
         printf("Digite o nome da pessoa:\n");
         fflush(stdin);
         fgets(func.nome, 40, stdin);
         func.nome[strlen(func.nome) - 1] = '\0';
         printf("Digite o endereco da pessoa:\n");
         fflush(stdin);
         fgets(func.endereco, 30, stdin);
         func.endereco[strlen(func.endereco) - 1] = '\0';
         printf("Digite o Cargo da Pessoa:\n");
         fflush(stdin);
         fgets(func.cargo, 30, stdin);
         func.cargo[strlen(func.cargo) -1] = '\0';
         printf("Digite o valor do Salário: \n");
         scanf("%f", &func.salario);
         fflush(stdin);
         system("pause");
         system("cls");
    return func;
}

int listaVazia(Lista *li){
    if(li == NULL){
        return 1;
    }
    if(*li == NULL){
        return 1;
    }
    return 0;
}

int tamLista(Lista *li){
    if(li==NULL){
        return 0;
    }
    int acum=0;
    ELEM *no = *li;
    while(no != NULL){
        acum++;
        no = no->prox;
    }
    return acum;
}


int insere_lista_ordenada(Lista *li, FUNCIONARIO dados_func){
    if(li == NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc (sizeof(ELEM));
    if(no==NULL){
        return 0;
    }
    no->dados = dados_func;
    if(listaVazia(li)){
        no->prox = (*li);
        *li = no;
        return 1;
    }else{
        ELEM *ant, *atual = *li;
        while(atual != NULL && atual ->dados.id < dados_func.id){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li){
                no->prox=(*li);
                    *li = no;
           }else{
                no->prox = ant->prox;
                ant->prox=no;
           }
           return 1;
    }
}

int remove_lista(Lista *li, int identificador){
    if(li == NULL){
        return 0;
    }
    ELEM *ant, *no = *li;
    while(no != NULL && no->dados.id != identificador){
        ant = no;
        no = no->prox;
    }
    if(no ==NULL){
        return 0;
    }
    if(no == *li){
        *li = no->prox;
    }else{
    ant->prox = no->prox;
    }

    free(no);
    return 1;
}

int consulta_lista_id(Lista *li, int identificador, FUNCIONARIO *dados_func){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    while (no != NULL && no->dados.id != identificador){
        no = no->prox;
    }
    if(no ==NULL){
        return 0;
    }else{
        *dados_func = no->dados;
        return 1;
    }
}


realoca(FUNCIONARIO *cad, int n){// realoca 1 posição a mais a cada leitura no arquivo
 cad = (FUNCIONARIO*) realloc(cad, n * sizeof(FUNCIONARIO) + sizeof(FUNCIONARIO));
 return cad;
 }

aloca(int n){
 int i;
 FUNCIONARIO *cad = (FUNCIONARIO*) malloc(n * sizeof(FUNCIONARIO));
 return cad;
 }

 int imprimeUm(FUNCIONARIO *dados_func, int n, Lista *li){
     ELEM *aux = li;
     printf("ID: %d\n", aux->dados.id);
     printf("Idade : %d\n", aux->dados.idade);
     printf("Nome: %s\n", aux->dados.nome);
     printf("Endereco: %s\n", aux->dados.endereco);
     printf("Cargo: %s\n", aux->dados.cargo);
     printf("Salário: %.2f", aux->dados.salario);

 printf("******************************\n\n");

 }
