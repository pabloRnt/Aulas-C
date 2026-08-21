#include <stdio.h>

int main(){
    int n;
    float notas[100];
    float soma = 0.0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++) {
        printf("Digite sua nota %d: ", i+1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }
    
    printf("\n");
    // Calcular a média das duas notas - Manual
    printf("A media das duas notas e: %.2f", soma/n);
    return 0;
}