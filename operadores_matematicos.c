#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subracao(-)
    Multiplicacao(*)
    Divisao(/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero 1: \n)");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n)");
    scanf("%d", &numero2);
    scanf("d", &numero2); //Ler o número 2

     //operação soma
    soma = numero1 + numero2;

     //operação subtração
    subtracao = numero1 - numero2;

     //operação multiplicação
    multiplicacao = numero1 * numero2;

     //operação divisão
    divisao = numero1 / numero2;

    printf("A Soma é: d\n", soma); //exibir o resultdo da soma na tela
    printf("A Subração é: d\n", subtracao); //exibir o resultdo da subtração na tela
    printf("A Multiplicação é: d\n", multiplicacao); //exibir o resultdo da multiplicação na tela
    printf("A Divisão é: d\n", divisao); //exibir o resultdo da divisão na tela

    return 0;




}