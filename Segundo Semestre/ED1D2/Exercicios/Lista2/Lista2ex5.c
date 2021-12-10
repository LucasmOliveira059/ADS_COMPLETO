#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char nome[30];
    int idade;
    char endereco[30];
}CADASTRO;

CADASTRO entraDados();
CadastroTam(int n);

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 0, n, *p=NULL;

    printf("Digite um inteiro n: " );
    scanf("%d", &n);

    //função para alocar a memoria no ponteiro
    p = CadastroTam(n);

    printf("-=-=-=-=-==-=-=-=-==-=-=-=-=-=-=-=-=-=-=\n");
    printf("-=-=-=-=-=-=-Ficha Cadastral-=-=-=-=-=-=-\n");
    CADASTRO cad[n];
    for (int i;i <n; i++){
        cad[i] = entraDados();
    }
    i = 0;
    printf("-=-=-=-=-==-=-=-=-==-=-=-=-=-=-=-=-=-=-=\n");
    printf("Registro finalizado...\n\n\n");
    system("pause");
    system("cls");
    printf("=-=--==-=-= Relatorio do Cadastro =-=-=-=-=-\n");

    for(int i; i < n; i++){
    printf("\nNome: %s", cad[i].nome);
    printf("\nIdade: %d", cad[i].idade);
    printf("\nEndereco: %s\n\n", cad[i].endereco);
    }
    system("pause");

}

CadastroTam(int n){
    int *cadTam;
    cadTam = (int*) malloc(n*sizeof(CADASTRO));
    return cadTam;
}

CADASTRO entraDados(){
    CADASTRO cad;
        printf("-=-=-=-=-==-=-=-=-==-=-=-=-=-=-=-=-=-=-=\n");
        getchar();
        printf("Digite o nome: \n");
        fgets(cad.nome, 29, stdin);
        cad.nome[strlen(cad.nome) - 1] = '\0';
        printf("-=-=-=-=-==-=-=-=-==-=-=-=-=-=-=-=-=-=-=\n");
        printf("Digite o Endereço: \n");
        fgets(cad.endereco, 29, stdin);
        cad.endereco[strlen(cad.endereco) - 1] = '\0';
        printf("-=-=-=-=-==-=-=-=-==-=-=-=-=-=-=-=-=-=-=\n");
        printf("Digite a idade: \n");
        scanf("%d", &cad.idade);
    return cad;
}
