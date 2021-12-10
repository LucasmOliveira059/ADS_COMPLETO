#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void somacem();

void main()
{
    setlocale(LC_ALL, "Portuguese");
    somacem();

}

somacem(){
    int x, y, z;
    int *p, *q, *r;
    printf("Digite 3 valores inteiros para serem armazenados: \n");
    scanf("%d %d %d", &x, &y, &z);
    system("pause");
    system("cls");
    p = &x;
    q = &y;
    r = &z;
    printf("%d\n%d\n%d\n", *p +100, *q +100, *r +100);
}
