#include <stdio.h>

int main(){

    int num;

    printf("Qual seu numero? ");
    scanf("%d", &num); /*Como o valor da variavel é inteiro, é necessario colocar _&_ antes do nome da variavel*/
    printf("O seu numero foi %d\n",num);
}