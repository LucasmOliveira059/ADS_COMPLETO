#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matricula;
    printf("Digite o numero de matricula: ");
    scanf("%d", &matricula);
    float n1, n2, n3, mediaponderada;
    printf("\nNota 1: ");
    scanf("%f", &n1);
    printf("\nNota 2: ");
    scanf("%f", &n2);
    printf("\nNota 3: ");
    scanf("%f", &n3);
    mediaponderada = ((n1*1) + (n2 *1) + (n3 * 2))/4;
    if (mediaponderada >=6){
        printf("\nAluno: %d" , matricula);
        printf("\nNota: %.2f" , mediaponderada);
        printf("\nVoce foi aprovado, parabens!");
    } else {
        printf("\nAluno: %d" , matricula);
        printf("\nNota: %.2f" , mediaponderada);
        printf("\nVoce foi reprovado, estude mais um pouco!");
    }
    printf("\n");
    system("pause");
    return 0;
}
