#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef EXCLUIRAGENDA_H_INCLUDED
#define EXCLUIRAGENDA_H_INCLUDED
#include "main.h"

void excluirAgenda(){
    int i,
        j,
        op,
        op2,
        valido,
        valido2;
    char nome[52];

    printf("*****************************************************************\n");
    printf("*\t\t\t EXCLUIR AGENDA \t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");

    printf("Informe o nome do contato para exclus�o: \n");
    fgets(nome, 52, stdin);
    fflush(stdin);

    char aux[52];
    strcpy(aux, nome);

    for(i = 0; i < TAMAGENDA; i++){
        if(strcpy(pessoa[i].nome, aux) == 0){
                printf("%s", &nome);
                printf("\n\n %s", pessoa[i].nome);
        }
    }
           /*printf("\n\n\n Nome: %s", pessoa[i].nome);
           printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
           printf("\n E-mail: %s", pessoa[i].email);

           printf("Deseja excluir esse contato? \n\t 1. Sim \n\t 2. N�o \n");

           do{
                scanf("%d", &op);
                fflush(stdin);

                switch(op){
                    case 1:
                        for(j = i; j < TAMAGENDA; j++){
                            pessoa[j] = pessoa[j + 1];
                        }

                        printf("Contato Exclu�do!");

                        valido = 1;
                        break;

                    case 2:
                        system("cls");
                        continue;
                        valido = 1;
                        break;

                        default:
                        printf("Op��o inv�lida!");
                        valido = 0;
                        break;
                }
            }while(valido == 0);
        }
    }

    // Voltar ao menu ou finalizar a execu��o
    printf("\n\n 1. Voltar ao menu");
    printf("\n 2. Sair \n");

    do{
        scanf("%d", &op2);
        fflush(stdin);

        switch(op2){
            case 1:
                system("cls");
                return menu();
                valido2 = 1;
                break;

            case 2:
                system("cls");
                exit(0);
                valido2 = 1;
                break;

            default:
                printf("Op��o Inv�lida! \n");
                valido2 = 0;
                break;
        }

    }while(valido2 == 0);*/
}

#endif // EXCLUIRAGENDA_H_INCLUDED
