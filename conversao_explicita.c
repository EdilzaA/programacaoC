#include <stdio.h>

int main(){
    int a = 10;
    float b = 3;
    float quociente = (float) a / b; //a é explicitamente convertido em float, esse float entre parênteses é o casting

    printf("Quociente: %.2f\n", quociente);
    


    return 0;

}