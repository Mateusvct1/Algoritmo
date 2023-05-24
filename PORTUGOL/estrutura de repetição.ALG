// Escreva um algoritmo para exibir o nome e a média harmônica de 10 alunos.
// Para cada um dos alunos, o algoritmo deve solicitar e ler o nome e
// as notas das três
//provas e calcular a média harmônica das suas provas.
// A média harmônica de três
//notas, a, b e c, é dada pela seguinte fórmula:
algoritmo "estrutura de repetição"
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
      escreval("A média desse aluno é: ", media:2:2)
      fimpara
      
fimalgoritmo