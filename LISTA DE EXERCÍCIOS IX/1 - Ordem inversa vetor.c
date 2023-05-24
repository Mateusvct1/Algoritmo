/*
Escreva um programa que solicita e armazena oito valores inteiros em um vetor,
denominado de A, e exibe os valores armazenados, porém na ordem inversa
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	int i, A[8];
	
	printf("digite 8 valores inteiro:\n");
	
	for( i=0; i< 8;i++ ){
		
		scanf("%i",&A[i]);
	}
	
	for(i = 7 ; i>0;i--){
		
		printf("|A[%i]",A[i]);
	}
	return 0;
}