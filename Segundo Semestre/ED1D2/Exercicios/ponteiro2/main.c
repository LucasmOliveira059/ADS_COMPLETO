#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portugese");
    int x, y;
    printf("Digite dois valores inteiros para compararmos: \n");
    scanf("%d %d", &x, &y);

    printf("%d\n%d\n", &x, &y);
    system("pause");
    system("cls");
    if( &x > &y){
        printf("%d\t\n %d", &x, x);
    } else{
    printf("%d\t\n %d", &y, y);
    }
}
