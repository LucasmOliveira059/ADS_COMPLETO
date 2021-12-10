Algoritmo "semnome"
// Disciplina   : [APOD1]
// Professor   : Márcia
// Descrição   : Exercício 8
// Autor(a)    : Lucas morais de oliveira
// Data atual  : 10/05/2021
Var
// Seção de Declarações das variáveis 
     x1, x2, cont : inteiro

Inicio

x1:= 0
Escreval("______________________________________________________")
Escreval("---------Escolha um número inteiro: ------------------")
leia(x1)
Escreval("------------------------------------------------------")

   cont := 1
   x2 := 0
   enquanto cont < x1 faca

            se (x1% cont = 0) entao
              Escreval(cont)
              x2 := x2 + cont

              fimse
              cont := cont +1
  fimenquanto
             Escreval("A soma de todos os divisores é: ",x2)

Fimalgoritmo