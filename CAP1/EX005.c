#include <stdio.h>

int main(){

    int numero, i = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    do{
        if(i % 2 == 0)

            printf("%d \n", i);

            i++;
            sleep(1);

    }while(i <= numero);

}