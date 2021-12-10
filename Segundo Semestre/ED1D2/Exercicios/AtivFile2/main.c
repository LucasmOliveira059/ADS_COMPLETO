#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
    int id;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

FUNCIONARIO coletaDados();

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int i = 0;
    FILE *f1;
    f1 = fopen("Tabela.txt", "wb");
while(i < 5){
    if(f1 == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    FUNCIONARIO cadfun;
    cadfun = coletaDados();
    fwrite(&cadfun, sizeof(FUNCIONARIO), 1, f1);

    i++;}
    fclose(f1);

    f1 = fopen("Tabela.txt", "rb");
    if(f1 == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    FUNCIONARIO cadfun;
    fseek(f1, 2*sizeof(FUNCIONARIO), SEEK_SET);
    fread(&cadfun, sizeof(FUNCIONARIO), 1, f1);
    printf("ID: %d\nNome: %s\nIdade: %d\nSalário: %.2f\n", cadfun.id, cadfun.nome, cadfun.idade, cadfun.salario);
    system("pause");
    return 0;

}


FUNCIONARIO coletaDados(){
    FUNCIONARIO f;
    printf("Digite o id: ");
    scanf(" %d", &f.id);
    getchar();
    printf("Digite o nome:");
    fgets(f.nome, 29, stdin);
    f.nome[strlen(f.nome) - 1] = '\0';
    printf("Digite a idade");
    scanf(" %d", &f.idade);
    printf("Digite o salario");
    scanf(" %f", &f.salario);
    return f;
}
