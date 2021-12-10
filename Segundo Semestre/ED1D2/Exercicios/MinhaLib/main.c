#include <locale.h>
#include "arqlib.h"

int main(int argc, char *argv[])
{
   setlocale(LC_ALL, "Portuguese");

   float d;
   Ponto *p, *q;
   p = pt_cria(10, 21);
   q = pt_cria(7, 25);
   d = pt_calcDist(p, q);
   printf("Distancia entre os pontos é [%.2f] \n", d);
   pt_free(p);
   pt_free(q);
   system("pause");
   return 0;
}
