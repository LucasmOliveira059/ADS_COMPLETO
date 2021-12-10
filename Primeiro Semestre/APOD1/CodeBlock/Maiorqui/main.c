#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int A,B;
    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);

    if(A>B){
        printf("O maior valor é %d \n", A);
        printf("O menor valor é %d \n", B);
    } else{
        printf("O maior valor é %d \n", B);
        printf("O menor valor é %d \n", A);
    }
    return 0;
}
