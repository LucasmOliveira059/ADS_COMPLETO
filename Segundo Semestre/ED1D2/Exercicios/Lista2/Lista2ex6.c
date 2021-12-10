#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//criação da struct
typedef struct cadastro{
    char nome[30];
    int idade;
    char endereco[30];
}Cadastro;

//criação das funções
Cadastro coletaDados();
Cadastro *CadastroQtd(int n);
void liberaDados(Cadastro *p );

//main
void main(){
    setlocale(LC_ALL, "Portuguese");

    int n=0;

    FILE *fp = fopen("arquivo.txt", "wb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    Cadastro *p=NULL; //ponteiro p

    printf("Digite o numero de cadastro a ser feito: " );
    scanf("%d", &n);

    //função para alocar a memoria no ponteiro
    p = CadastroQtd( n);

    printf("\n\t\t  == Ficha Cadastral  ==\n");

    for(int c=0; c<n; c++){
            p[c] = coletaDados();
    }
    printf("=-=-=-=-==-=-=-=-=-=-==-=-=-=-=-=-=-=\n");

    printf("\n\nRegistro finalizado....\n\n\n");
    fwrite(&p, sizeof(Cadastro),1, fp);
    fclose(fp);

    printf("\t\t == Relatorio do Cadastro == \n");

    fopen("arquivo.txt", "rb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    fread(&p, sizeof(Cadastro), 1, fp);
    for(int c = 0; c<n; c++){
        printf("\nNome do candidato [%d]: %s", c+1, p[c].nome);
        printf("\nIdade do candidato [%d]: %d",c+1, p[c].idade);
        printf("\nEndereco do candidato [%d]: %s\n\n",c+1, p[c].endereco);
    }

    printf("=-=-=-=-==-=-=-=-=-=-==-=-=-=-=-=-=-=\n");
    system("pause");

}

Cadastro *CadastroQtd(int n){
    int *quantidade;
    quantidade = (int*) malloc(n*sizeof(Cadastro));
    return quantidade;
}

Cadastro coletaDados(){
    Cadastro cad;
        printf("=-=-=-=-==-=-=-=-=-=-==-=-=-=-=-=-=-=\n");
        getchar();
        printf("Digite o nome: \n");
        fgets(cad.nome, 29, stdin);
        cad.nome[strlen(cad.nome) - 1] = '\0';
        printf("=-=-=-=-==-=-=-=-=-=-==-=-=-=-=-=-=-=\n");
        printf("Digite o Endereco: \n");
        fgets(cad.endereco, 29, stdin);
        cad.endereco[strlen(cad.endereco) - 1] = '\0';
        printf("=-=-=-=-==-=-=-=-=-=-==-=-=-=-=-=-=-=\n");
        printf("Digite a idade: \n");
        scanf("%d", &cad.idade);
    return cad;
}
