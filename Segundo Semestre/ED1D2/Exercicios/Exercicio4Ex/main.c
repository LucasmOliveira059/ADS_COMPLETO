#include<stdio.h>

void funcao_troca_inteiros(int*a,int*b){//função para trocar valores, com 2 paramêtros que apontam para inteiros
int *aux; // variavel do tipo int com ponteiro
aux = (int*) malloc(sizeof(int));//Variável que aloca memória do tamanho de INT
if (aux == NULL){// condicional para tratamento de erro em caso de falta de memória
    printf("Memoria insuficiente!\n");
    exit(1);
}else {
    *aux = *a;// ponteiro de aux recebe a variavel a como ponteiro
    *a   = *b; // ponteiro de a recebe a variável b como ponteiro
    *b   = *aux; // ponteiro de b recebe a variável aux como ponteiro
    free(aux);//libera a memória da variável aux

    }
}

void main(){
char *p;//variável do tipo char criada para um ponteiro p
p = (char*)malloc(4*sizeof(char));// Variável que aloca 4 vezes o tamanho de um char
strcpy (p,"IFSP");//copia em p a string IFSP
p = (char*)realloc(p,15*sizeof(char));//altera o valor de 4 para 15, o tamanho da variável
strcat(p,"-Guarulhos");//concatena em p -Guarulhos
printf("%s",p);//imprime o valor de P
free(p); // libera o espaço de memória em p
}
