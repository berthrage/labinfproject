#include <stdlib.h>
#ifndef ORDEMALF_H_INCLUDED
#define ORDEMALF_H_INCLUDED
#include "main.h"

void ordemAlfabetica(){
    int i,
        j,
        op,
        valido;
    char aux[52];

    printf("*****************************************************************\n");
    printf("*\t\t   AGENDA EM ORDEM ALFABÉTICA   \t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");

    // Processo de ordem alfabética
    for(j = 0; j < TAMAGENDA; j++){
        strcpy(aux, pessoa[j].nome);
        i = j - 1;

        while(stricmp(pessoa[i].nome, aux) > 0){
            strcpy(pessoa[i + 1].nome, pessoa[i].nome);
            i--;
        }

        strcpy(pessoa[i + 1].nome, aux);
    }

    // Imprime os dados em ordem alfabética
    for(i = 0; i < TAMAGENDA; i++){
        printf("\n\n\n Nome: %s", pessoa[i].nome);
        printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
        printf("\n E-mail: %s", pessoa[i].email);
    }

    // Voltar ao menu ou finalizar a execução
    printf("\n\n 1. Voltar ao menu");
    printf("\n 2. Sair \n");

    do{
        scanf("%d", &op);

        switch(op){
            case 1:
                system("cls");
                return main();
                valido = 1;
                break;

            case 2:
                system("cls");
                exit(0);
                valido = 1;
                break;

            default:
                printf("Opção Inválida! \n");
                valido = 0;
                break;
        }
    }while(valido == 0);
}

#endif // ORDEMALF_H_INCLUDED
