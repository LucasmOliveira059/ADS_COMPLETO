Algoritmo "Caclulasalario"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Márcia
// Descrição   : Calcula Salário
// Autor(a)    : LucasMorais
// Data atual  : 23/05/2021
Var
// Seção de Declarações das variáveis 
sem1, sem2, sem3, sem4, he1, he2, he3: real
he4, sal, vh, het1, het2, het3, het4, saltotal: real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

     Escreval("Digite o salário base: ")
     leia(sal)
     Escreval("O numero de horas trabalhadas nesse mês foi de : ")
     vh:=   (sal / 4) / 40
     
     Escreval("Qual o número de horas trabalhadas na primeira semana? ")
     leia(sem1)
               se (sem1 > 40) entao
                   he1:= sem1 - 40
                   het1:= (vh + (vh *50 /100)) * he1
               fimse
     Escreval("Qual o número de horas trabalhadas na segunda semana? ")
     leia(sem2)
               se (sem2 > 40) entao
                   he2:= sem2 - 40
                   het2:= (vh + (vh *50 /100)) * he2
               fimse

     Escreval("Qual o número de horas trabalhadas na terceira semana? ")
     leia(sem3)
               se (sem3 > 40) entao
                   he3:= sem3 - 40
                   het3:= (vh + (vh *50 /100)) * he3
               fimse
     Escreval("Qual o número de horas trabalhadas na última semana? ")
     leia(sem4)
               se (sem4 > 40) entao
                   he4:= sem4 - 40
                   het4:= (vh + (vh *50 /100)) * he4
               fimse
       saltotal:= sal+het1+het2+het3+het4
       
Escreval("O número de horas trabalhadas neste mês foi : ")
Escreval(sem1+sem2+sem3+sem4)
Escreval("O valor da hora paga deste funcionário é de :")
Escreval ("R$", vh.:2:2)
Escreval("Este cooperado receberá o valor de: ")
Escreval("R$", saltotal.:4:2)

Fimalgoritmo