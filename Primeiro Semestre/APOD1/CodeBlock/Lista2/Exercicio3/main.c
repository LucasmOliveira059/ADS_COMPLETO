#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;
    printf("Digite: \n 1 - A\n 2 - B\n 3 - C\n 4 - D\n");
    scanf("%d", &x);

    if(x == 1){
        printf("A\n");
    } else if(x == 2){
        printf("B\n");
    } else if(x == 3){
        printf("C\n");
    } else if(x==4){
        printf("D\n");
    } else {
        printf("0\n");
    }

}
