/*Crie um mini-sistema de biblioteca que utilize umas truct Livro. 
Use typedef struct para os dados do livro. 
Crie uma função que receba um ponteiro para o livro.
A função deve alterar o status de "disponível" para "emprestado".*/

/*Crie um mini-sistema de biblioteca que utilize umas truct Livro. 
Use typedef struct para os dados do livro. 
Crie uma função que receba um ponteiro para o livro.
A função deve alterar o status de "disponível" para "emprestado".*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[50];
    char autor[60];
    char genero[100];
    char status[20];
}Livro;

void AlterarStatusLivro (Livro* p_livro){
    strcpy(p_livro -> status, "emprestado");
}

void main() {
    Livro Romeu_e_Julieta = {"Romeu e Julieta", "William Shakespere", "Dramático/Tragédia Romantica", "disponível"};
    Livro *ptr_livro = &Romeu_e_Julieta;

    printf("%s \n", ptr_livro->status);
    AlterarStatusLivro(&Romeu_e_Julieta);
    printf("%s", ptr_livro->status);
}