/*Crie uma função que receba o endereço de um
Produto e aplique uma porcentagem de desconto no
seu preço.
*/

#include <stdio.h>

typedef struct{
    int id;
    char nome[50];
    float preco;
} Produto;

// Esqueleto da Atividade
void aplicarDesconto(Produto* p, float desc) {
// Calcule e atualize o preço aqui
    p->preco = (p->preco)-(p->preco)*desc/100;
}
int main() {
    Produto prod = {1, "Teclado", 150.0};
    printf("%f \n", prod.preco);
    // Chame a função passando o endereço
    aplicarDesconto(&prod, 10.0);
    printf("%f", prod.preco);
    return 0;
}
