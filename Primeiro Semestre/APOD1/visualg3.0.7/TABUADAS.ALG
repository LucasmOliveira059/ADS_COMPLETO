Algoritmo "Tabuadas"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2021
Var
// Seção de Declarações das variáveis 
cont, x: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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
                Escreval("Caso sim, digite o valor, do contrário digite -1")
                leia(x)
                limpatela
        fimenquanto
Fimalgoritmo