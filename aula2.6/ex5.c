#include <stdio.h>

int maior(int n, int v[])
{

    // Caso Base
    if (n == 1)
        return v[0];

    // Caso recursivo
    int anterior = maior(n-1, v);

    if (v[n-1] > anterior) return v[n-1];

    return anterior;
}

int main()
{

    int v[] = {10, 20, 70, 30, 40, 50};
    int n = sizeof(v) / sizeof(v[0]);
    printf("%d\n", maior(n, v));

    return 0;
}