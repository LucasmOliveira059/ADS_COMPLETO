Algoritmo "CalculoMedia"

var

   Nota1, Nota2, Nota3, Nota4: Inteiro
   Media: Real

Inicio
// Seção dos Comandos

   Escreval ("Digite a Primeira nota: ")
   Leia (Nota1)
   Escreval ("Digite a Segunda nota : ")
   Leia (Nota2)
   Escreval ("Digite a Terceira nota: ")
   Leia (Nota3)
   Escreval ("Digite a nota média das atividades  : ")
   Leia (Nota4)

   Media := (Nota1 + (Nota2*2) + (Nota3*3) + Nota4)/7
   Escreval (" ===================== ")

   Se Media >= 9 entao
      Escreval(" O Conceito foi A")
   fimse
   Se (Media >=7.5) e (Media < 9) entao
      Escreval("O conceito foi B")
   fimse
   se (Media >= 6) e (Media < 7.5) entao
      Escreval("O conceito foi C")
   fimse
   se Media < 6 entao
      Escreval("O conceito foi D")
   fimse
Fimalgoritmo
