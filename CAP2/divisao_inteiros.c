#include <stdio.h>

int main(){

    int n1, n2;

    printf("Escrevas os 2 numeros: ");
    scanf("%d%d", &n1, &n2);

    printf("resultado: %d \n", (n1/n2)); /* o simbolo / vai mostrar o resultado da divisão -> inteira <- por exemplo 21/4 por resultado vai ser 5 ao inves de 5,25*/
    printf("sobra: %d", (n1%n2)); /*o simbolo % na equação signfica que ele vai calcular a divisão e mostrar a sobra da divisão (o resto)*/ 

}