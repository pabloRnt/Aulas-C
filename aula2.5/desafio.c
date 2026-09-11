#include <stdio.h>

long long fibonacci(int n)
{

    // Condição base
    if (n <= 1)
    {
        return n;
    }

    printf("fibonacci(n - 1) --> %d\n", fibonacci(n - 1));
    printf("fibonacci(n - 2) --> %d\n", fibonacci(n - 2));
    // Condição Recursvia
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// PARA CASA: Função Interativo do Fibonacci --> Utilizar Loop For ou While

int main () {

    // Declaraçaõ de variáveis
    printf("Digite um numero para saber o n-enesimo termo da seq. de Fibonacci: ");
    long long n = 1;

    scanf("%d", &n);

    printf("%lld", fibonacci(n));

    return 0;
}