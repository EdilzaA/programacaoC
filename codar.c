#include <stdio.h>

int main(){
    
    int nota1, nota2, nota3;
    int media;

    printf("*** Programa de Cálculo de Média ***\n"); //banner pra começar o programa

    printf("Digite a sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a sua terceita nota: \n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3; //clculo da média

    printf("A média é: %d\n\n", media); //impressão da média

    return 0;

}