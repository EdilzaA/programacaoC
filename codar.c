#include <stdio.h>

int main(){
    
int nota1, nota2, nota3;
int media;

printf(“Programa de Cálculo de Média\n”);
printf(“Digite a sua primeira nota: \n”);
scanf(“%d”, &nota1);

printf(“Digite a sua segunda nota: \n”);
scanf(“%d”, &nota2);

printf(“Digite a sua terceita nota: \n”);
scanf(“%d”, &nota3);

media = (nota1 + nota2 + nota3) / 3;

return 0;

}