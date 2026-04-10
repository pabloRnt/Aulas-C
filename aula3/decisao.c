#include <stdio.h>

int main(){
    float nota1, nota2;
    int presenca;
    /*Especificadores utilizados:
    %f <-- ponto flutuante (float)
    %lf <-- ponto flutuante longo (double ou long float)
    %d ou %i <-- inteiro (int)
    %c <-- carcteres (char)
    %s <-- string (str)*/

    printf("CALCULADORA DE MEDIA DO ALUNO \n");
    printf("Digite sua primeira nota: \n");
    scanf("%f", &nota1);
        
    printf("Digite sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite sua presenca: \n");
    scanf("%d", &presenca);

    float media = (nota1 + nota2) / 2;
    printf("A media do aluno e %.2f, o aluno esta: \n", media);

    if(presenca < 75){
        printf("Reprovado por falta");
    }else if(media>=6){
        printf("Aprovado");
    }else if(media >=4){
        printf("Recuperacao");
    }else{
        printf("Reprovado media insuficiente");
    }

    return 0;
}