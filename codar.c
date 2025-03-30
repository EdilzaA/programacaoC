#include <stdio.h>

int main(){
    
    int nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Média ***\n"); //banner pra começar o programa

    printf("Digite a sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a sua terceita nota: \n");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3; //conversão exlícita casting - forçando p/ que tudo seja tratado como float

    printf("A média é: %.1f\n\n", media); //impressão da média

    return 0;

}