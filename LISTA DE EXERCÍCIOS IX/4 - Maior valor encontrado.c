#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int i, numero[10], maior;
//escrevendo os vetores com seus indicie e solicitando ao usuário os valores
    for(i=0;i < 10; i++){
        printf("numero[%i] = ",i);
        scanf("%i",&numero[i]);

    }
    //procurando o maior valor
    maior = numero[0];
    for(i=1;i < 10; i++){
        if(numero[i] > maior){
            maior = numero[i];
        } 
    }
    //escrevendo o maior valor encotrado
printf("O maior valor: %i",maior);
    
    return 0;
}