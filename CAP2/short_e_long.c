#include <stdio.h>

int main(){

short int idade; //short garante que a variavel int continue usando apenas 2 bytes (podia ser so "short idade;")
int montante;
long int n_conta; //long faz com que a variavel inteira use mais bytes de 2 vai para 4

 printf("Qual a sua idade: \n");
 scanf("%hd", &idade); //a letra "h" entre o %d informa que a variavel "int" é short = h

 printf("Qual o montante a depositar: \n");
 scanf("%d", &montante);

 printf("Qual o numero da conta: \n");
 scanf("%ld", &n_conta);

 printf("Uma pessoa de %hd anos depositou R$%d na conta %ld\n", idade, montante, n_conta);

}