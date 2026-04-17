#include <stdio.h>

/*FUNÇÕES*/

void menu(){
    printf("--- MENU ---\n");
    printf("1- CALCULADORA DE MEDIA; \n");
    printf("2- VERIFICADOR DE PRESENCA; \n");
}

int main(){
    /*
    Criar uma interface com o usuário, onde terá duas opções:
    1- Média do aluno --> (nota 1 + nota 2) / 2 
    2- Verificação de presença --> presença >= 75 -> presença adequada
                                            <= 75 -> atentar com a presença
    */

    //Declaração das variáveis
    int opcao, presenca;
    float nota1, nota2, media;
    
    //MENU

    menu();

    printf("Digite sua opcao:");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: /*Lógica*/
        printf("--- CALCULADORA DE MEDIA --- \n");

        printf("Digite sua primeira nota: ");
        scanf("%f", &nota1);
        if(nota1<0 || nota1>10)
            printf("Digite uma nota valida: ");
            scanf("%f", &nota1);

        printf("Digite sua segunda nota: ");
        scanf("%f", &nota2);
        if (nota2>10 || nota2 <0){
            printf("Digite uma nota valida: ");
            scanf("%f", &nota2);
        }

        media = (nota1 + nota2) / 2;
        printf("A media do aluno e: %.2f", media);
        break;

        case 2:
        printf("--- VERIFICADOR DE PRESENCA --- \n");
        printf("Digite o percentual de presenca: ");
        scanf("%d", &presenca);   
        if (presenca >= 75 && presenca <=100) {
            printf("Aluno sem pendencia na presenca. A frequencia e de %i%%", presenca);
        } else if (presenca >=0 && presenca<75){
            printf("Sua presenca foi %i%% - Pendencia na presenca\n", presenca);
        } else{
            printf("Valor de presenca invalido");
        }
        break;

        default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}