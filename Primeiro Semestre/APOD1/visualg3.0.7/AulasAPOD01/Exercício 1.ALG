Algoritmo "Exerc�cio 3"
// Disciplina   : [APOD1]
// Professor   : M�rcia
// Descri��o   : Soma e troca
// Autor(a)    : Lucas Morais de Oliveira
// Data atual  : 16/04/2021

Var
// Se��o de Declara��es das vari�veis 
KWh, LA, LH, potencia, y: real
x, h, w, d : inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 


Escreval ("Digite o n�mero da sua conta: ")
Leia (x)
Escreval ("Digite o n�mero da sua pen�ltima leitura em Kwh: ")
Leia (LA)
Escreval ("Digite o n�mero da sua �tima leitura: ")
Leia (LH)


potencia := (LH *30) / 1000
KWh := 0.20725
y :=  (Kwh * LH)

Escreval("O n�mero de sua conta � ", x, " O valor a ser pago em reais �: ", y:10:2)
Escreval ("Seu consumo de Luz desse m�s foi de: ", potencia:10:2)
Fimalgoritmo