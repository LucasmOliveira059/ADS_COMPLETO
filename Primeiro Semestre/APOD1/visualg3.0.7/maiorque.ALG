Algoritmo "Ru%"

Var

y, cont, a, b, c : real

Inicio
    cont := 0
    y :=0
    Escreval("Digite os valores que deseja ou um numero negativo para encerrar")
    repita
            escreval("Quantas vezes usastes o R.U no �ltimo m�s?")
            leia(y)
            cont := cont +1
                 se (y>=0) e (y < 10) entao
                  a:= a+1
                 fimse
                 se (y >= 10) e (y <= 15) entao
                    b:= b+1
                 fimse
                 se (y >15) entao
                    c:= c+1
                 fimse
    ate y < 0
cont:= cont-1
Escreval("A porcentagem de Alunos que comeu menos de 10 vezes �: ")
Escreval( (a*100) / cont, "%")
Escreval("A porcentagem de Alunos que comeu entre 10 e 15 vezes �: ")
Escreval( (b*100) / cont, "%")
Escreval("A porcentagem de Alunos que comeu mais de 15 vezes �: ")
Escreval( (c*100) / cont, "%")


Fimalgoritmo