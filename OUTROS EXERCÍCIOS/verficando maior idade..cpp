//Fa�a um programa em C que receba a idade de 10 pessoas e mostre quantas s�o maiores que 18 anos

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
	int idade, contador = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        
        if (idade > 18) {
            contador++;
        }
    }
    
    printf("O n�mero de pessoas maiores de 18 anos �: %d\n", contador);
    
    return 0;
}

