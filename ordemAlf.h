#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef ORDEMALF_H_INCLUDED
#define ORDEMALF_H_INCLUDED
#include "main.h"

void ordemAlfabetica(){
    int i,
        j,
        op,
        valido;
    char auxNome[52],
         auxTelDdd[7],
         auxTelNum[13],
         auxEmail[256];

    printf("*****************************************************************\n");
    printf("*\t\t   AGENDA EM ORDEM ALFABÉTICA   \t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");

    // Processo de ordem alfabética
    for (j = 1; j < TAMAGENDA; j++){
         if (strcmp(pessoa[j - 1].nome, pessoa[j].nome) > 0) {
             strcpy(auxNome, pessoa[j].nome);
             strcpy(auxTelDdd, pessoa[j].telefone.ddd);
             strcpy(auxTelNum, pessoa[j].telefone.numero);
             strcpy(auxEmail, pessoa[j].email);

             strcpy(pessoa[j].nome, pessoa[j - 1].nome);
             strcpy(pessoa[j].telefone.ddd, pessoa[j - 1].telefone.ddd);
             strcpy(pessoa[j].telefone.numero, pessoa[j - 1].telefone.numero);
             strcpy(pessoa[j].email, pessoa[j - 1].email);

             strcpy(pessoa[j - 1].nome, auxNome);
             strcpy(pessoa[j - 1].telefone.ddd, auxTelDdd);
             strcpy(pessoa[j - 1].telefone.numero, auxTelNum);
             strcpy(pessoa[j - 1].email, auxEmail);
        }
    }

    // Imprime os dados em ordem alfabética
    for(i = 0; i < TAMAGENDA; i++){
        if (strcmp (pessoa[i].telefone.numero, "NULL") != 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }


    // Voltar ao menu ou finalizar a execução
    printf("\n\n 1. Voltar ao menu");
    printf("\n 2. Sair \n");

    do{
        scanf("%d", &op);
        fflush (stdin);

        switch(op){
            case 1:
                system("cls");
                return menu();
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
