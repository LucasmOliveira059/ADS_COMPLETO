#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial_recursivo(int n);

int main()
{   setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Escolha um número para fatorar: \n");
    scanf("%d", &n);
    n = fatorial_recursivo(n);
    printf(" o valor é : [%d]", n);

}


int fatorial_recursivo(int n){
    int f, t;
    if(n == 0 || n == 1){
        return 1;
        }
        f = n * fatorial_recursivo(n -1);
        return f;
    }
