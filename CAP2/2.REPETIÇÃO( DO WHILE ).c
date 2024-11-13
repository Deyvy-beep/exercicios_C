#include <stdio.h>

int main(){

    int i = 1;

    do{ 
        printf("%d ", i);

        i++;
        sleep(1); //serve para informar o computador a seguir o codigo depois de certos segundos

    }while(i <= 10);
}