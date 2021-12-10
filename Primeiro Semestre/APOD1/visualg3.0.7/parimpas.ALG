Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2021
Var
// Seção de Declarações das variáveis 
x, sompa, somimpar, qntpar, qntimpar, maiorpar, menorimpar: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

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
escreval("Escolha um número: ")
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
escreval("A média dos pares é: ", sompa div qntpar)
escreval("A média dos ímpares é: ", somimpar div qntimpar)
escreval("O maio par digitado é : ", maiorpar)
Escreval("O menor impar é : ", menorimpar)

Fimalgoritmo