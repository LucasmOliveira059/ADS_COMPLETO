#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 20
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int conjunto[TAM], linha,i=0, maior_num =0, menor_num=5000, multi_num=1, media_num=0;

    for(linha=0; linha<TAM; linha++){
        printf("Digite o valor %d: \n", linha);
        scanf("%d", &conjunto[linha]);
        if(conjunto[linha] > maior_num){
            maior_num = conjunto[linha];
        }
        if(conjunto[linha] < menor_num){
            menor_num = conjunto[linha];
        }
        media_num+=conjunto[linha];
        multi_num*=conjunto[linha];
    }
    i = media_num / 20;

    printf(" A média dos números é %4d \n O maior número digitado foi %4d \n O menor foi %4d \n e os produtos dos valores é : %d", i, maior_num, menor_num, multi_num);
}
