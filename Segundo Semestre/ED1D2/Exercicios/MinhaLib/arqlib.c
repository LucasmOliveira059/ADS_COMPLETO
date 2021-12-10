#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "arqlib.h" //inclusão dos protótipos

struct ponto{
    float x;
    float y;
};

//função para alocar e retornar os pontos da coordenada x,y
Ponto *pt_cria(float x, float y){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    if(p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

void pt_free(Ponto *p){
    free(p);
}

void pt_acesso(Ponto *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

void pt_atribui(Ponto *p, float x, float y){
    p->x = x;
    p->y = y;
}

float pt_calcDist( Ponto *p1, Ponto *p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy*dy);
}
