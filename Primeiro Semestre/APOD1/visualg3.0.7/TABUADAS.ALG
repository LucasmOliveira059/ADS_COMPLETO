Algoritmo "Tabuadas"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2021
Var
// Se��o de Declara��es das vari�veis 
cont, x: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
       cont:= 0

        Escreval("Escolha um valor para a tabuada: ")
        leia(x)
         enquanto (x <> -1) faca
                cont :=1
                enquanto (cont <= 10) faca
                Escreval(cont, " x ", x, " = ", cont *x)
                cont := cont+1
                 fimenquanto
                Escreval("Deseja fazer uma nova Tabuada?")
                Escreval("Caso sim, digite o valor, do contr�rio digite -1")
                leia(x)
                limpatela
        fimenquanto
Fimalgoritmo