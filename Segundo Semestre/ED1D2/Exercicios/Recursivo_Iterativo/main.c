#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "arqlib.h"

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n,i;

	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("\nVersao Iterativa\n");
    func_it(n);
    printf("\n\n");
    printf("\nVersao Recursiva\n");
    i = func_rec(n);
    printf("\n\n");
    system("pause");
}
