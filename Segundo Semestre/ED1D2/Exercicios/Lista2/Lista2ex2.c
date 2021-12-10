#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

typedef struct{
	float x;
	float y;
} PONTO;

typedef struct{
	 PONTO pontoSup; //chamada da sutruct ponto (x, y) superior
	 PONTO pontoInf;
} RETANGULO;

int main() {
	setlocale(LC_ALL, "Portuguese");

	float a, b;
	float area, peri, diag;
	RETANGULO retan;
	printf("Digite a Coordenada Superior para x: \n");
	scanf("%f", &retan.pontoSup.x);
	printf("Digite a Coordenada Superior para y: \n");
	scanf("%f", &retan.pontoSup.y);
	printf("Digite a Coordenada inferior para x: \n");
	scanf("%f", &retan.pontoInf.x);
	printf("Digite a Coordenada inferior para y: \n");
	scanf("%f", &retan.pontoInf.y);

	a = retan.pontoInf.x - retan.pontoSup.x;
	b = retan.pontoSup.y - retan.pontoInf.y;

	area = a * b;
	peri = 2 * (a + b);
	diag = sqrt(pow(a, 2) + pow(b, 2));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Area: %.2f\n", area);
	printf("Perimetro: %.2f\n", peri);
	printf("Diagonal: %.2f\n", diag);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	return 0;
}
