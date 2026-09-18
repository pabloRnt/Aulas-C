#include <stdio.h>

void contagem(int n){

    //Caso Base
    if (n == 0) {
        printf("Fim");
        return;
    }

    //Caso recursivo
    contagem(n-1);
    printf("%d\n", n);
}

int main(){

    int n = 5;
    contagem(n);

    return 0;
}