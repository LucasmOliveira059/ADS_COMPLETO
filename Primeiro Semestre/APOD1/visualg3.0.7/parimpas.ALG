Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2021
Var
// Se��o de Declara��es das vari�veis 
x, sompa, somimpar, qntpar, qntimpar, maiorpar, menorimpar: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

Escreval("--------------------------------------------------------")
Escreval("----------------Programa Maluko-------------------------")
Escreval("--------------------------------------------------------")

x:=0
sompa:=0
qntpar:=0
qntimpar:=0
maiorpar:=0
menorimpar:= 1000000000
repita
escreval("Escolha um n�mero: ")
leia(x)

       se (x >0) entao

          se (x %2 = 0) entao
           sompa:= sompa + x
           qntpar:= qntpar +1
                    se (x > maiorpar) entao
                       maiorpar := x
                         fimse
           fimse
           se (x%2 =1) entao
            somimpar:= somimpar + x
            qntimpar:= qntimpar + 1
             se (x < menorimpar ) entao
                 menorimpar:= x
                fimse
            fimse
       fimse
ate x < 0
escreval("A m�dia dos pares �: ", sompa div qntpar)
escreval("A m�dia dos �mpares �: ", somimpar div qntimpar)
escreval("O maio par digitado � : ", maiorpar)
Escreval("O menor impar � : ", menorimpar)

Fimalgoritmo