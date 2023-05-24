algoritmo "cardapio"
var
   i, q: inteiro
inicio
   escreval("----------------------------------------")
   escreval("codigo de item especificado pelo cliente")
   escreval(" 100        cachorro quente      R$ 7,00")
   escreval(" 101           Bauru             R$ 8,00")
   escreval(" 102           X-Salada          R$ 9,00")
   escreval(" 103          Hamburguer        R$ 10,00")
   escreval(" 104          Refigerante        R$ 3,00")
   escreval("----------------------------------------")
   escreval("Digite o código desejado")
   leia(i)
   escreval("Digite a quantidade")
   leia(q)
   escolha(i)
   caso 100
      escreva(">> Total: ", q* 7:2:2)
   caso 101
      escreva(">> Total: ", q* 8:2:2)
   caso 102
      escreva(">> Total: ", q* 9:2:2)
   caso 103
      escreva(">> Total: ", q* 10:2:2)
   caso 104
      escreva(">> Total: ", q* 3:2:2)
   outrocaso
      escreva("Não tem intem Otário")
   fimescolha
fimalgoritmo