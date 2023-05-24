#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");
    int i,a[5],b[5];


    for ( i = 0; i < 5; i++)
    {
        printf("Digite o %iº valor: ",i+1);
        scanf("%i",&a[i]);
    }
    // Preenche o vetor b de acordo com as condições especificadas
    for (i = 0; i < 5; i++) {
        if (i == 0)
        {
            b[i] = a[i];
                    }else if ( i % 2 == 0){
                       b[i] = a[i]*5; 
                    }else{
                        b[i] = a[i]+5;
                    }

    }
    // Exibe o conteúdo dos vetores a e b
    printf("\nVetor A: ");
       for (i = 0; i < 5; i++) {
        printf("%.2i ", a[i]);
    }
    printf("\nVetor B: ");
    for (i = 0; i < 5; i++) {
        printf("%.2i ", b[i]);
    }
    
return 0 ;
}