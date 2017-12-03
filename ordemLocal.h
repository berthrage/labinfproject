#include <stdlib.h>
#ifndef ORDEMLOCAL_H_INCLUDED
#define ORDEMLOCAL_H_INCLUDED
#include "main.h"

void ordemLocalidade(){
    int i,
        j,
        op,
        valido;

    printf("*****************************************************************\n");
    printf("*\t\t   AGENDA EM ORDEM DE LOCALIDADE   \t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");

    printf(" * Acre  \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "AC";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Alagoas  \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "AL";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Amapá  \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "AP";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Amazonas  \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "AM";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Bahia  \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "BA";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Ceará  \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "CE";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Distrito Federal \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "DF";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Espírito Santo \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "ES";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Goiás \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "GO";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Maranhão \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "MA";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Mato Grosso \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "MT";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Mato Grosso do Sul \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "MS";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Minas Gerais \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "MG";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Pará \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "PA";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Paraíba \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "PB";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Paraná \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "PR";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Pernambuco \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "PE";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Piauí \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "PI";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Rio de Janeiro \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "RJ";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Rio Grande do Norte \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "RN";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Rio Grande do Sul \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "RS";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Rondônia \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "RO";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Roraima \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "RR";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Santa Catarina \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "SC";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * São Paulo \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "SP";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Sergipe \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "SE";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            printf("\n\n\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
        }
    }

    printf(" * Tocantins \n\n");
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "TO";

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
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

#endif // ORDEMLOCAL_H_INCLUDED
