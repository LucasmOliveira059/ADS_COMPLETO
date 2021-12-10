#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int altura = 4;
    printf("A altura do cilindro eh: 4");
    int raio = 2;
    printf("\nO raio do cilindro eh: 2");
    float volume = 3.14 * (raio*raio) * altura;
    printf("\nO volume do cilindro eh: %.2f" , volume);
    printf("\n\n");
    system("pause");
    return 0;
}
