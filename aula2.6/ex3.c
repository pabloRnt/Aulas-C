#include <stdio.h>
#include <math.h>

int potencia(int base, int exp)
{

    // Caso Base
    if (exp == 0)
        return 1;

    // Caso recursivo
    return pow(base, exp) * potencia(base, exp-1);
}

int main()
{

    printf("%d\n", potencia(4, 3));

    return 0;
}