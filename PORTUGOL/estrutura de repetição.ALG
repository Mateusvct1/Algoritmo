// Escreva um algoritmo para exibir o nome e a m�dia harm�nica de 10 alunos.
// Para cada um dos alunos, o algoritmo deve solicitar e ler o nome e
// as notas das tr�s
//provas e calcular a m�dia harm�nica das suas provas.
// A m�dia harm�nica de tr�s
//notas, a, b e c, � dada pela seguinte f�rmula:
algoritmo "estrutura de repeti��o"
var
   nome: caractere
   media: real
   a,b,c:real
   x:inteiro
inicio
       media <-0
   para x de 1 ate 10 passo 1 faca
      escreval (" Digite o nome do aluno ")
      leia(nome)
      escreval ("Qual a primeira nota do aluno?")
      leia(a)
      escreval ("Qual a segunda nota do aluno?")
      leia(b)
      escreval ("Qual a terceira nota do aluno?")
      leia(c)
      media<- 3/(1/a+1/b+1/c)
      escreval("A m�dia desse aluno �: ", media:2:2)
      fimpara
      
fimalgoritmo