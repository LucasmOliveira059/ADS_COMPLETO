#include<stdio.h>

void funcao_troca_inteiros(int*a,int*b){//fun��o para trocar valores, com 2 param�tros que apontam para inteiros
int *aux; // variavel do tipo int com ponteiro
aux = (int*) malloc(sizeof(int));//Vari�vel que aloca mem�ria do tamanho de INT
if (aux == NULL){// condicional para tratamento de erro em caso de falta de mem�ria
    printf("Memoria insuficiente!\n");
    exit(1);
}else {
    *aux = *a;// ponteiro de aux recebe a variavel a como ponteiro
    *a   = *b; // ponteiro de a recebe a vari�vel b como ponteiro
    *b   = *aux; // ponteiro de b recebe a vari�vel aux como ponteiro
    free(aux);//libera a mem�ria da vari�vel aux

    }
}

void main(){
char *p;//vari�vel do tipo char criada para um ponteiro p
p = (char*)malloc(4*sizeof(char));// Vari�vel que aloca 4 vezes o tamanho de um char
strcpy (p,"IFSP");//copia em p a string IFSP
p = (char*)realloc(p,15*sizeof(char));//altera o valor de 4 para 15, o tamanho da vari�vel
strcat(p,"-Guarulhos");//concatena em p -Guarulhos
printf("%s",p);//imprime o valor de P
free(p); // libera o espa�o de mem�ria em p
}
