#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
   int idade, ano_atual, ano_nasc;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Insira em que ano estamos: ");
    scanf("%d", &ano_atual);
    ano_nasc = ano_atual - idade;
    printf("Voce nasceu em: %d", ano_nasc);
    printf("\n");
    system("pause");
    return 0;
}
