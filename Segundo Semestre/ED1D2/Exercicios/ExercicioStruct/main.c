#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
    int ID;
    char nome[30];
    int idade;
    float Salario;
}FUNCIONARIO;

float rel_salario_corrigido(float *sal);

void main()
{
    setlocale(LC_ALL, "Portuguese");

    FUNCIONARIO func[5];

    for (int i = 0; i <5; i++){
        printf("\nDigite o código: ");
        scanf("%d", &func[i].ID);
        getchar();
        printf("\nDigite o nome: ");
        fgets(func[i].nome, 29, stdin);
        printf("\nDigite a idade: ");
        scanf("%d", &func[i].idade);
        printf("\nDigite o salário: ");
        scanf("%f", &func[i].Salario);
    }

    for(int i = 0; i<5;i++){
        printf("Pessoa %d\) \n\tID: %d\nNome: %s\n\tIdade: %d\n\tSalário: %.2f \n",i+1, func[i].ID, func[i].nome, func[i].idade, func[i].Salario);
    }
    for (int i = 0; i < 5; i++){
        float sal = func[i].Salario;
        func[i].Salario = rel_salario_corrigido(&sal);
    }

    for (int i =0; i<5; i++){
        printf("O funcionario %s\t Teve um aumento no salario \n Agora ganha %.2f\n", func[i].nome, func[i].Salario);
    }
}

float rel_salario_corrigido(float *sal){
    FUNCIONARIO func;
    return (((*sal * 10) / 100) + *sal);
}
