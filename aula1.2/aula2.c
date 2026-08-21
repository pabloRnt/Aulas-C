#include<stdio.h>

int main(){
    int valor_1 = 10;
    float valor_2 = 3;

    printf("O resultado da soma é: %.1f", valor_1 + valor_2);
    printf("\nO resultado da subtração é: %.2f", valor_1 - valor_2);
    printf("\nO resultado da multiplicação é: %.3f", valor_1 * valor_2);
    printf("\nO resultado da divisão é: %.4f", valor_1 / valor_2);
    printf("\nO resto da divisão é: %d", valor_1 % (int)valor_2);

    return 0;
}