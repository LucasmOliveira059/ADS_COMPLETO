#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "arqlib.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 0;
    float resultado;
    do{
        printf("\nEscolha um valor: \n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\n1-) SOMA\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\n2-) SUBTRAI\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\n3-) MULTIPLICA\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\n4-) DIVIDE\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\nOu digite 0 para sair\n");
        scanf("%d", &i);

            switch(i){
        case 1:
            resultado = soma();
            printf("\nO resultado desta soma �: [%.2f]\n", resultado);
            system("pause");
            system("cls");
            break;
        case 2:
            resultado = subatrai();
            printf("\nO resultado desta subtra��o �: [%.2f]", resultado);
            system("pause");
            system("cls");
            break;
        case 3:
            resultado = multiplica();
            printf("\nO resultado desta multiplica��o �: [%.2f]", resultado);
            system("pause");
            system("cls");
            break;
        case 4:
            resultado = divide();
            printf("\nO resultado desta divis�o �: [%.2f]", resultado);
            system("pause");
            system("cls");
            break;
        case 0:
            continue;
        default:
            printf("\nValor inv�lido, digite novamente. \n");
            }

    }while(i != 0);
    system("pause");
}
