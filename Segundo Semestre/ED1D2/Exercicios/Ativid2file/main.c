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

    FILE *f1;
        FUNCIONARIO cad;
        cad = coletaDados();
        f1 = fopen("Tabela.txt", "wb");

    if(f1 == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    fwrite(&cad, sizeof(FUNCIONARIO), 1, f1);


        fclose(f1);

     f1 = fopen("Tabela.txt", "rb");
    if(f1 == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    fread(&cad, sizeof(FUNCIONARIO), 1, f1);
    printf("%d \n%s \n%d\n%.2f", cad.id, cad.nome, cad.idade, cad.salario);
    printf("\n\n");
    fclose(f1);
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
