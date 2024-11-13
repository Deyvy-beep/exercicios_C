#include <stdio.h>

int main(){

    int senha;

    printf("senha: ");
    scanf("%d", &senha);

    if(senha == 123){

        printf("seja bem-vindo!");
    }else{

        printf("Senha errada");
    }
}
