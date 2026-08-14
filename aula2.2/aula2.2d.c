#include <stdio.h>

void mostrarDobros(int n)
{

    for (int i = 1; i < n; i *= 2) /* O(1 + n -1 + n-1)*/
    {
        printf("%d\n", i); /* O(1)*/
    } /* O(1 + n)*/
}

int main(void)
{
    mostrarDobros(32); 
    /*
    
    Nesse caso, o número de iterações (k) da função mostrarDobro é definida por 2^(n - 1), 
    pois i está sendo multiplicado por 2 ao invés de incrementado. Note que 1 está
    sendo subtraído de n porque i começa em 1, não em 0.

    logo, para saber o valor de n, fazemos log2 (k), pois 2^n = k

    Agora, como a função recebe como argumento 32, basta encairxar o 32 no log para 
    descovbrir n, resultando em 5

    */
    return 0;
}
