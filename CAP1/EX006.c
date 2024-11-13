#include <stdio.h>

int main(){

    int num, multi;

    printf("Diga qual numero para tabuada: ");
    scanf("%d", &num);

    for(multi = 1 ; multi <= 10; multi++){

        printf("%d x %d = %d \n", num, multi, num*multi);

        sleep(0.5);
    }
}