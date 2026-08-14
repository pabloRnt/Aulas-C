
#include <stdio.h>

void imprimirTriangulo(int n)
{
    for (int i = 0; i < n; i++) /* O(2n + 1)*/
    {
        for (int j = 0; j <= i; j++) /* 2n + 2*/
        {
            printf("* ");
        }

        printf("\n"); /*O(1)*/
    }
} /* O((2n+1+1)(2n+2) = 4n² + 8n + 4) 
*/

int main(void)
{
    imprimirTriangulo(5); /*O (4n² + 8n + 4 + 5)*/
    return 0; /*O (1)*/
} /*O (4n² + 8n + 10)*/
