/*Faça um programa que solicita e armazena cinco números inteiros em um vetor. Em
seguida, o programa deve percorrer o vetor e somar todos os seus valores. Ao final,
o programa deve exibir o resultado da soma.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n[5],soma=0;
	
	for( i = 0; i < 5; i++ ){
		
		printf("Digite o %iº número: \n", i+1);
		scanf("%i", &n[i]);
	}
	
	for( i = 0; i < 5; i++ ){
		
		soma= soma + n[i];
	}
	printf("Soma = %i", soma);
	return 0;
}
