#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef ORDEMLOCAL_H_INCLUDED
#define ORDEMLOCAL_H_INCLUDED
#include "main.h"

void ordemLocalidade(void){
    int i,
        j,
        op,
        mostrar,
        valido;

    printf("*****************************************************************\n");
    printf("*\t\t   AGENDA EM ORDEM DE LOCALIDADE   \t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");

    // Separando por estado
    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "ac";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
            if(mostrar == 0){
                printf("\n\n\n * Acre  \n");
            }

            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "al";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Alagoas  \n");
            }

            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "ap";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Amapá  \n");
            }

            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "am";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Amazonas  \n");
            }

            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "ba";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Bahia  \n");
            }

            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "ce";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Ceará  \n");
            }

            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "df";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Distrito Federal \n");
            }

            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "es";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Espírito Santo \n");
            }

            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "go";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Goiás \n");
            }

            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "ma";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Maranhão \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "mt";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Mato Grosso \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "ms";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Mato Grosso do Sul \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "mg";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Minas Gerais \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "pa";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Pará \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "pb";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Paraíba \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "pr";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Paraná \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "pe";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Pernambuco \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "pi";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Piauí \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "rj";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Rio de Janeiro \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "rn";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Rio Grande do Norte \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "rs";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Rio Grande do Sul \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "ro";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Rondônia \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "rr";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Roraima \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "sc";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Santa Catarina \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "sp";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * São Paulo \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "se";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n * Sergipe \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
        }
    }

    for(i = 0; i < TAMAGENDA; i++){
        char aux[4] = "to";

        mostrar = 0;

        if(stricmp(pessoa[i].endereco.estado, aux) == 0){
                if(mostrar == 0){
                    printf("\n\n\n * Tocantins \n");
            }
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd , pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);

            mostrar = 1;
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

#endif // ORDEMLOCAL_H_INCLUDED
