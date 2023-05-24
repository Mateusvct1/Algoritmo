#include <stdio.h>
#include <locale.h>


int fatorial(int n);

int main() {
    
    int tamanho = 5, v1[tamanho],v2[tamanho],i;
     

    // solicitando e armazenando os valores em v1
    for (i = 0; i < tamanho; i++) {
        printf("Digite o %iº número inteiro: ", i+1);
        scanf("%i", &v1[i]);
    }

    // calculando os fatoriais e armazenando em v2
    for (i = 0; i < tamanho; i++) {
        v2[i] = fatorial(v1[i]);
    }

    // exibindo os vetores
    printf("\nVetor v1:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%i ", v1[i]);
    }

    printf("\n\nVetor v2:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", v2[i]);
    }

    return 0;
}
int fatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * fatorial(n-1);
    }

}

