#include <stdio.h>

int somaMatriz(int matriz[][3], int n)
{
    int soma = 0; /* O(1)*/

    for (int i = 0; i < n; i++) /* O(2n + 1)*/
    {
        for (int j = 0; j < n; j++) /* O(2n + 2)*/
        {
            soma += matriz[i][j];
        }
    }

    return soma; /* O(1)*/
} /* (2n + 1)(2n +2) + 1 + 1 = 4n² + 6n + 4*/

int main(void)
{
    int matriz[3][3] = {  /* O(9)*/
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int resultado = somaMatriz(matriz, 3); /* O(4n² + 6n + 4 + 1 + 3)*/

    printf("Soma = %d\n", resultado); /* O(1)*/

    return 0; /* O(1)*/
} /* O(9 + 4n² + 6n + 4 + 1 + 3 + 1 = 4n² + 6n + 18)*/