// Arqlib.h protótipos das funções

typedef struct ponto Ponto;

Ponto *pt_cria(float x, float y); // cria um novo ponto (somente ponteiro)

void pt_free(Ponto *p); //libera um ponto

void pt_acesso(Ponto *p, float *x, float *y); // Acessa valores de x e y num ponto

void pt_atribui(Ponto *p, float x, float y); // Atribui valor para x e y num ponto

float pt_calcDist(Ponto *p1, Ponto *p2); // calcula a distancia entre os pontos

