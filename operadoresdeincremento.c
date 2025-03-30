#include <stdio.h>

int main(){
    /*
    Pré-Incremento ++a a--
    Pós-Incremento a++
    Decremento(--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d \n", numero1); //antes de realizar o incremento
    // numero1 = numero1 +1;
    //numero1 += 1;
    //Pós incremento:
     //resultado - numero1; - primeito etribui
     //numero1++; depois incrementei

     resultado = numero1++; //o operador fica depois do número
     //printf("Após o pre-incremento: %d\n", numero1);
     printf("Após Pós-incremento - Numero 1: %d  - Resultado: %d\n", numero1, resultado); //após realizar o incremento
     numero1++; 

     resultado = numero1++; //o operador fica antes do número
     //printf("Após o pre-incremento: %d\n", numero1);
     printf("Após Pre-incremento - Numero 1: %d  - Resultado: %d\n", numero1, resultado); //após realizar o incremento
     numero1++; 

     
     //resultado = ++numero1; //o operador fica antes do número
    //printf("Após o pre-incremento: %d\n", numero1);
    //após realizar o incremento
    //++numero1;

     //numero1 = numero1 - 1;
     //numero1-= 1;
     //numero1--;
     //printf('Apos decremento: %d\n", numero1)

     resultado = numero1--;
     printf("Após Pos-decremento - Numero 1: %d  - Resultado: %d\n", numero1, resultado);
     numero1--;

     resultado = --numero1;
     printf("Após Pré-decremento - Numero 1: %d  - Resultado: %d\n", numero1, resultado);
     --numero1;



 
    
    return 0;

    
  
}
    

