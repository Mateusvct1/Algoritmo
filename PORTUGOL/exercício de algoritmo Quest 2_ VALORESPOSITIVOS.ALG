algoritmo "valorespositivos"
var
   cont: inteiro
   num1, num2, somaposit, somanegat:real
inicio
   cont<-1
   somaposit<-0
   somanegat<-0
   escreva(" escreva um n�mero: ")
   leia(num1)
   enquanto cont<=num1 faca

      escreval ("Digite",cont,"Numero da sequencia")
      leia (num2)
     
      se( num2>=0) entao
         somaposit <- somaposit+num2
      senao
         somanegat <- somanegat+num2
      fimse
      cont <- cont+1
   fimenquanto
   escreval(" A soma dos n�mero positivo �: ", somaposit)
   escreval(" A quantidade de valores negativos �: ", somanegat)
fimalgoritmo