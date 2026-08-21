#include <stdio.h>
#include <string.h>

// typedef (unsigned int) (uint)
typedef unsigned int uint; // semelhante ao python --> import numpy as np

// typedef int inteiro;
// typedef double doisfloat;
typedef struct
{
    char rua[50];
    uint numero;
    char bairro[50];
    char cidade[50];
} Endereco;

typedef struct
{
    uint rm;
    char nome[50];
    float nota[10];
    // endereço --> rua (char[]), numero (int) - bairro (char[]) - cidade ...
    Endereco endereco;
    // email, data de nascimento, turma...
} Aluno;

int main()
{
    Aluno aluno[3];
    printf("%d\n", aluno[0].rm);
    strcpy(aluno[0].nome, "João Gonçalves Silva");
    printf("Nome Completo: %s\n", aluno[0].nome);
    aluno[0].nota[0] = 8; // aluno[0].nota = {8, 10, 0};
    aluno[0].nota[1] = 10;
    // sizeof: ele pega o tamanho em bytes do elemento ou tipo de dado
    // int -> 4bytes
    // char -> 1byte
    // 2 valores no vetor nota, então 2 * 4 bytes = 8 bytes -> sizeof(aluno[0].nota)
    printf("%d\n", sizeof(aluno[0].nota) / sizeof(aluno[0].nota[0]));

    int tam_vetor = sizeof(aluno[0].nota) / sizeof(aluno[0].nota[0]);

    float media = (aluno[0].nota[0] + aluno[0].nota[1]) / tam_vetor;

    printf("A nota do aluno(a): %f\n", media);

    // Exibir Rua, numero - Bairro - Cidade
    strcpy(aluno[0].endereco.rua, "Rua São Joaquim"); // string
    aluno[0].endereco.numero = 23;                    // numero
    strcpy(aluno[0].endereco.bairro, "Liberdade");    // string
    strcpy(aluno[0].endereco.cidade, "São Paulo");    // string
    printf("%s, %d - %s - %s\n", aluno[0].endereco.rua, aluno[0].endereco.numero, aluno[0].endereco.bairro, aluno[0].endereco.cidade);
    return 0;
}