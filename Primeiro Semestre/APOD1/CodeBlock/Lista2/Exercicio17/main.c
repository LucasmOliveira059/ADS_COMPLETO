#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int temp[20], A, temp_m, maior_temp, menor_temp = 3000;

        for(int i = 0; i<20;i++){
            printf("Digite a temperatura: \n");
            scanf("%d", &temp[A]);
            temp_m+=temp[A];
            if(temp[A] > maior_temp){
                maior_temp = temp[A];
            }
            if(temp[A] < menor_temp){
                menor_temp = temp[A];
            }
        }
    temp_m = temp_m/20;

    printf("A média da temperatura foi %d. A maior %d e a menor %d", temp_m, maior_temp, menor_temp);
}
