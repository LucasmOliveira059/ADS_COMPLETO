Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/05/2021
Var


n, cont,t,media, maior,x, menor : inteiro
  
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

          Escreval("Quantos competidores v�o nadar? ")
          leia(n)
          cont :=0
          maior := 0
          x:= 0
          menor := 3000
          t := 0
                 enquanto  (cont < n) faca
                 Escreval("Qual o tempo, em segundos, deste competidor?")
                 leia(t)
                 cont := cont +1
                      se (t > maior) entao
                      maior := t
                      fimse
                      se (t < menor) entao
                      menor := t
                      fimse
                 x:= x + t
                 fimenquanto
          media := (x div n)
          Escreval("O tempo m�dio dos competidores foi: ", media)
          Escreval("O menor tempo foi: ", menor)
          Escreval("O maior tempo foi: ", maior)

Fimalgoritmo