#include <stdio.h>

int main(){

    int d;

    printf("Insira um valor de 1 a 7: \n");
    scanf("%d", &d);

    switch(d){

        case 1: 
        printf("domingo");

        break;

        case 2:
        printf("segunda-feira");

        break;

        case 3:
        printf("terça-feira");

        break;

        case 4:
        printf("quarta-feira");

        break;

        case 5:
        printf("quinta-feira");

        break;

        case 6:
        printf("sexta-feira");

        break;

        case 7: 
        printf("sabado");

        break;

        default:
        printf("Valor errado");
        
        break;
        
    }
}