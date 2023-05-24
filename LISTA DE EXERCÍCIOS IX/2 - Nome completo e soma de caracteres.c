/*
Crie um programa que solicita e armazena o nome completo de um usuário em um
vetor, e informa a quantidade de caracteres que foi inserida.
Obs.: considere o ‘\0’ na contagem e não utilize a função strlen
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portugues");
	char n[30];
	int soma = 0;

	printf("digite o nome completo. \n");
	gets(n);

	while( n[soma] != '\0')
	{
		soma++;
	}

	printf("A soma total de caracteres é de: %i\n", soma);
	printf("O Nome completo é: %s", n);

	return 0;
}
