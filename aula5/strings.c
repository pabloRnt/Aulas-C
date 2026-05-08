#include <stdio.h>
#include <string.h>

int main(){
    //char valor = 'c';
    //char palavra[5] = {'c', 'a', 's', 'a'};
    //printf("%s", palavra);

    char user_name[30] = "Pablo Renato";
    char padrao[20] = "admin";
    printf("Digite seu usuario: ");
    //scanf("%s", nome);
    fgets(user_name, 30, stdin);

    if(strcmp(user_name, padrao)){
        printf("Acesso liberado!");
    } else {
        printf("Acesso negado!");
    }

    return 0;
}