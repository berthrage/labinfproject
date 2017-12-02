#include <stdlib.h>
#ifndef ORDEMALFTOTAL_H_INCLUDED
#define ORDEMALFTOTAL_H_INCLUDED
#include "main.h"

void ordemAlfabeticaT(){
    int i,
        j,
        op,
        valido;
    char aux[52];

    printf("*****************************************************************\n");
    printf("*\t\t   AGENDA EM ORDEM ALFAB�TICA   \t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");

    // Processo de ordem alfab�tica
    for(j = 0; j < TAMAGENDA; j++){
        strcpy(aux, pessoa[j].nome);
        i = j - 1;

        while(stricmp(pessoa[i].nome, aux) > 0){
            strcpy(pessoa[i + 1].nome, pessoa[i].nome);
            i--;
        }

        strcpy(pessoa[i + 1].nome, aux);
    }

    // Imprime todos os dados em ordem alfab�tica
    for(i = 0; i < TAMAGENDA; i++){
        printf("\n Nome: %s", pessoa[i].nome);
        printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
        printf("\n E-mail: %s", pessoa[i].email);
        printf("\n Endere�o: \n\t");
        printf("\n Rua: %s   N�: %d", pessoa[i].endereco.rua, pessoa[i].endereco.numero);
        printf("\n Complemento: %s", pessoa[i].endereco.complemento);
        printf("\n Bairro: %s  CEP: %s", pessoa[i].endereco.bairro , pessoa[i].endereco.cep);
        printf("\n Cidade: %s   Estado: %s   Pa�s: %s", pessoa[i].endereco.cidade , pessoa[i].endereco.estado , pessoa[i].endereco.pais);
        printf("\n Data de anivers�rio: %d / %d / %d", pessoa[i].dataNiver.dia , pessoa[i].dataNiver.mes , pessoa[i].dataNiver.ano);
        printf("\n Observa��es: %s", pessoa[i].obs);
    }

    // Voltar ao menu ou finalizar a execu��o
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
                printf("Op��o Inv�lida! \n");
                valido = 0;
                break;
        }

    }while(valido == 0);
}

#endif // ORDEMALFTOTAL_H_INCLUDED
