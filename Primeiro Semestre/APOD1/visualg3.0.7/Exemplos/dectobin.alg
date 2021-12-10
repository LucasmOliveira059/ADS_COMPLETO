Algoritmo "decpbin"
var
x : caracter
y,d : inteiro
inicio
escreva("Entre com um número inteiro :")
leia(y)
d := y
enquanto y > 0 faca
   se (y mod 2) = 0 entao
      x :=  "0" +  x
   senao
      x :=  "1" +  x
   fimse
   y := y div 2
fimenquanto

Compr(x)
        enquanto Compr(x) <= 16 faca
         x:= "0" + x
         fimenquanto
escreval("A representação binária é ", x)
fimalgoritmo


