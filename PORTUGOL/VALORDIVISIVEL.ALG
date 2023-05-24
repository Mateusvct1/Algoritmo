algoritmo "valordivisivel"
var
   n, d: inteiro

inicio
   escreva("Informe um número inteiro: ")
   leia(n)
   escreva("Informe o denominador: ")
   leia(d)
   Se (d=0) entao
      escreval("Valor indefinida")
   senao
      se  (n%d=0) entao
         escreva("É divisivel")
      senao
         escreval("não é divisivel")
      fimse
   fimse
fimalgoritmo