algoritmo "valordivisivel"
var
   n, d: inteiro

inicio
   escreva("Informe um n�mero inteiro: ")
   leia(n)
   escreva("Informe o denominador: ")
   leia(d)
   Se (d=0) entao
      escreval("Valor indefinida")
   senao
      se  (n%d=0) entao
         escreva("� divisivel")
      senao
         escreval("n�o � divisivel")
      fimse
   fimse
fimalgoritmo