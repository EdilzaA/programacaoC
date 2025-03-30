#include <stdio.h>

int main(){
    /*
    atribuição Simples(+)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com Divisão (/=)
    */

    //Entrando com as variáveis
    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado); //É como sairá o resultado na tela

     //usando os operadores de atribuição

    //resultado = resultado + 20
    resultado += 20;
    printf("Resultado: %d\n", resultado); //faz a soma e depois atribuirá o valor

     //resultado = resultado - numero1
    resultado -= numero1;
    printf("Resultado: %d\n", resultado); //faz a subtração e depois atribuirá o valor
    
     //resultado - resultado *5
    resultado *= 5;
    printf("Resultado: %d\n", resultado); 

     //resultado = resultado /2
    resultado /= 2;
    printf("Resultado: %d\n", resultado); 


    return 0;



}





    
    