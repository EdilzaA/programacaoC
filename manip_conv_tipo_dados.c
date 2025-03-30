#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    float quociente = a /b; //Note que a divisão de inteitos resulta em um númeo inteiro

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Quociente: %.2f\n", quociente);


    return 0;

}