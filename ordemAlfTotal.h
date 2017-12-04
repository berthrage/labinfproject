#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef ORDEMALFTOTAL_H_INCLUDED
#define ORDEMALFTOTAL_H_INCLUDED
#include "main.h"

void ordemAlfabeticaT(){
    int i,
        j,
        op,
        auxNum = 0,
        auxNiverDia = 0,
        auxNiverMes = 0,
        auxNiverAno = 0,
        valido;
    char auxNome[52],
         auxTelDdd[7],
         auxTelNum[13],
         auxEmail[256],
         auxRua[152],
         auxCompl[22],
         auxBairro[52],
         auxCep[12],
         auxCidade[52],
         auxEstado[5],
         auxPais[52],
         auxObs[302];

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
             strcpy(auxRua, pessoa[j].endereco.rua);
             auxNum = pessoa[j].endereco.numero;
             strcpy(auxCompl, pessoa[j].endereco.complemento);
             strcpy(auxBairro, pessoa[j].endereco.bairro);
             strcpy(auxCep, pessoa[j].endereco.cep);
             strcpy(auxCidade, pessoa[j].endereco.cidade);
             strcpy(auxEstado, pessoa[j].endereco.estado);
             strcpy(auxPais, pessoa[j].endereco.pais);
             auxNiverDia = pessoa[j].dataNiver.dia;
             auxNiverMes = pessoa[j].dataNiver.mes;
             auxNiverAno = pessoa[j].dataNiver.ano;
             strcpy(auxObs, pessoa[j].obs);

             strcpy(pessoa[j].nome, pessoa[j - 1].nome);
             strcpy(pessoa[j].telefone.ddd, pessoa[j - 1].telefone.ddd);
             strcpy(pessoa[j].telefone.numero, pessoa[j - 1].telefone.numero);
             strcpy(pessoa[j].email, pessoa[j - 1].email);
             strcpy(pessoa[j].endereco.rua, pessoa[j - 1].endereco.rua);
             pessoa[j].endereco.numero = pessoa[j - 1].endereco.numero;
             strcpy(pessoa[j].endereco.complemento, pessoa[j - 1].endereco.complemento);
             strcpy(pessoa[j].endereco.bairro, pessoa[j - 1].endereco.bairro);
             strcpy(pessoa[j].endereco.cep, pessoa[j - 1].endereco.cep);
             strcpy(pessoa[j].endereco.cidade, pessoa[j - 1].endereco.cidade);
             strcpy(pessoa[j].endereco.estado, pessoa[j - 1].endereco.estado);
             strcpy(pessoa[j].endereco.pais, pessoa[j - 1].endereco.pais);
             pessoa[j].dataNiver.dia = pessoa[j - 1].dataNiver.dia;
             pessoa[j].dataNiver.mes = pessoa[j - 1].dataNiver.mes;
             pessoa[j].dataNiver.ano = pessoa[j - 1].dataNiver.ano;
             strcpy(pessoa[j].obs, pessoa[j - 1].obs);

             strcpy(pessoa[j - 1].nome, auxNome);
             strcpy(pessoa[j - 1].telefone.ddd, auxTelDdd);
             strcpy(pessoa[j - 1].telefone.numero, auxTelNum);
             strcpy(pessoa[j - 1].email, auxEmail);
             strcpy(pessoa[j - 1].endereco.rua, auxRua);
             pessoa[j - 1].endereco.numero = auxNum;
             strcpy(pessoa[j - 1].endereco.complemento, auxCompl);
             strcpy(pessoa[j - 1].endereco.bairro, auxBairro);
             strcpy(pessoa[j - 1].endereco.cep, auxCep);
             strcpy(pessoa[j - 1].endereco.cidade, auxCidade);
             strcpy(pessoa[j - 1].endereco.estado, auxEstado);
             strcpy(pessoa[j - 1].endereco.pais, auxPais);
             pessoa[j - 1].dataNiver.dia = auxNiverDia;
             pessoa[j - 1].dataNiver.mes = auxNiverMes;
             pessoa[j - 1].dataNiver.ano = auxNiverAno;
             strcpy(pessoa[j - 1].obs, auxObs);
        }
    }


    // Imprime todos os dados em ordem alfabética
    for(i = 0; i < TAMAGENDA; i++){
        if (strcmp (pessoa[i].telefone.numero, "NULL") != 0){
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
            printf("\n Endereço: ");
            printf("\n Rua: %s  Nº: %d", pessoa[i].endereco.rua, pessoa[i].endereco.numero);
            printf("\n Complemento: %s", pessoa[i].endereco.complemento);
            printf("\n Bairro: %s  CEP: %s", pessoa[i].endereco.bairro , pessoa[i].endereco.cep);
            printf("\n Cidade: %s  Estado: %s   País: %s", pessoa[i].endereco.cidade , pessoa[i].endereco.estado , pessoa[i].endereco.pais);
            printf("\n Data de aniversário: %d / %d / %d", pessoa[i].dataNiver.dia , pessoa[i].dataNiver.mes , pessoa[i].dataNiver.ano);
            printf("\n Observações: %s", pessoa[i].obs);
            printf ("\n\n");
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

#endif // ORDEMALFTOTAL_H_INCLUDED
