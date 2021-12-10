Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/05/2021
Var


n, cont,t,media, maior,x, menor : inteiro
  
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

          Escreval("Quantos competidores vão nadar? ")
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
          Escreval("O tempo médio dos competidores foi: ", media)
          Escreval("O menor tempo foi: ", menor)
          Escreval("O maior tempo foi: ", maior)

Fimalgoritmo