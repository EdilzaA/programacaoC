#include <stdio.h>

int main(){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; //a é convetido implicitamente para float, 10+3.5, variáveis inteira e de ponto flutuante

    printf("Resultado: %.2f\n", resultado);
    


    return 0;

}