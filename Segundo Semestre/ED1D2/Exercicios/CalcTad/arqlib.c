#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "arqlib.h"

float soma(){
    float x, y, resultado;
    float *p, *q;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &x);
    printf("Digite o segundo valor: \n");
    scanf("%f", &y);
    p = &x;
    q = &y;
    resultado = (*p + *q);
    return resultado;
}
float subatrai(){
    float x, y, resultado;
    float *p, *q;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &x);
    printf("Digite o segundo valor: \n");
    scanf("%f", &y);
    p = &x;
    q = &y;
    resultado = (*p - *q);
    return resultado;
}
float multiplica(){
    float x, y, resultado;
    float *p, *q;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &x);
    printf("Digite o segundo valor: \n");
    scanf("%f", &y);
    p = &x;
    q = &y;
    resultado = (*p * *q);
    return resultado;
}
float divide(){
    float x, y, resultado;
    float *p, *q;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &x);
    printf("Digite o segundo valor: \n");
    scanf("%f", &y);
    p = &x;
    q = &y;
    resultado = (*p / *q);
    return resultado;
}
