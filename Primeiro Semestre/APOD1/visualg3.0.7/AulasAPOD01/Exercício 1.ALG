Algoritmo "Exercício 3"
// Disciplina   : [APOD1]
// Professor   : Márcia
// Descrição   : Soma e troca
// Autor(a)    : Lucas Morais de Oliveira
// Data atual  : 16/04/2021

Var
// Seção de Declarações das variáveis 
KWh, LA, LH, potencia, y: real
x, h, w, d : inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 


Escreval ("Digite o número da sua conta: ")
Leia (x)
Escreval ("Digite o número da sua penúltima leitura em Kwh: ")
Leia (LA)
Escreval ("Digite o número da sua útima leitura: ")
Leia (LH)


potencia := (LH *30) / 1000
KWh := 0.20725
y :=  (Kwh * LH)

Escreval("O número de sua conta é ", x, " O valor a ser pago em reais é: ", y:10:2)
Escreval ("Seu consumo de Luz desse mês foi de: ", potencia:10:2)
Fimalgoritmo