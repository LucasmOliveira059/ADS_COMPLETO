Algoritmo "semnome"
// Disciplina   : [APOD1]
// Professor   : M�rcia
// Descri��o   : Exerc�cio 8
// Autor(a)    : Lucas morais de oliveira
// Data atual  : 10/05/2021
Var
// Se��o de Declara��es das vari�veis 
     x1, x2, cont : inteiro

Inicio

x1:= 0
Escreval("______________________________________________________")
Escreval("---------Escolha um n�mero inteiro: ------------------")
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
             Escreval("A soma de todos os divisores �: ",x2)

Fimalgoritmo