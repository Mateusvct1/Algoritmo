//Faça um programa em C que exiba na tela os números ímpares entre 100 e 300. 

#include <stdio.h>

int main()
{

    int n;
    
    
    for (n=100; n<=300; n++){
       if (n%2!=0){
           
       
        printf("%d\n",n);
       }
    }
    return 0;
}
