#include <stdlib.h>
#ifndef BUSCATELEFONE_H
#define BUSCATELEFONE_H
#include "main.h"

void buscaTelefone(void){
    int i, 
        j, 
        op,
        valido,
        mesBusca,
        erroLerBuscaDdd,
        erroLerBuscaTelefone,
        flagValidNum,
        qtdEncontrados = 0;
        
    char dddBusca[7],
        numeroBusca[13],
        numerocompletoBusca[21];
    
    printf("*****************************************************************\n");
    printf("*\t\t\t BUSCA TELEFONE \t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");
    
    printf ("\n\n");
    
    // Ler DDD do usu�rio
    do{
        erroLerBuscaDdd = 0;
        
        printf ("DDD da pessoa que deseja buscar: ");
        fgets (dddBusca, 7, stdin);
        dddBusca[strlen (dddBusca) - 1] = '\0';
        fflush(stdin);
        
        if (!(dddBusca[0] == 40 && 
            dddBusca[1] >= 48 && dddBusca[1] <= 57 &&
            dddBusca[2] >= 48 && dddBusca[2] <= 57 && 
            dddBusca[3] == 41)){
                
            printf ("INV�LIDO: Informar DDD apenas com 2 d�gitos entre par�nteses.\n\n");
            erroLerBuscaDdd = 1;
            
        } else if (strlen (dddBusca) > 4){
            printf ("INV�LIDO: Informar DDD apenas com 2 d�gitos entre par�nteses (4 caracteres m�x).\n\n");
            erroLerBuscaDdd = 1;
        }
    
    } while (erroLerBuscaDdd == 1);
    
    // Ler Numero do usu�rio
    do{
        erroLerBuscaTelefone = 0;
        flagValidNum = 0;
        
        printf ("N�mero de Telefone da pessoa que deseja buscar: ");
        fgets (numeroBusca, 13, stdin);
        numeroBusca[strlen (numeroBusca) - 1] = '\0';
        fflush(stdin);
        
            for (i = 0; i < 4; i++){
                if (!(numeroBusca[i] >= 48 && numeroBusca[i] <= 57)){
                    flagValidNum = 1;
                }
            }
            
            if (strlen(numeroBusca) == 9){ //Caso formato seja '9999-9999'
                if (numeroBusca[4] != 45){
                    flagValidNum = 1;
                } 
                for (i = 5; i < 9; i++){
                    if (!(numeroBusca[i] >= 48 && numeroBusca[i] <= 57)){
                        flagValidNum = 1;
                    }
                }
            } else if (strlen(numeroBusca) == 10){ //Caso formato seja '99999-9999'
                if (numeroBusca[5] != 45){
                    flagValidNum = 1;
                } 
                for (i = 6; i < 10; i++){
                    if (!(numeroBusca[i] >= 48 && numeroBusca[i] <= 57)){
                        flagValidNum = 1;
                    }
                }
            }
            
            if (flagValidNum == 1){
                printf ("INV�LIDO: Apenas d�gitos num�ricos e '-' (4 ou 5 digitos + '-' + 4 digitos).\n\n");
                erroLerBuscaTelefone = 1;
            
            } else if (strlen(numeroBusca) > 10 || strlen (numeroBusca) < 9){
                printf ("INV�LIDO: Apenas d�gitos num�ricos e '-' (10 caracteres m�x).\n\n");
                erroLerBuscaTelefone = 1;
            }
    
    } while (erroLerBuscaTelefone == 1);
    
    // Concatenar DDD e Numero para facilitar busca
    strcpy (numerocompletoBusca, dddBusca);
    strcat (numerocompletoBusca, numeroBusca);
    

    
    
    
    // Realizar a busca (por compara��o)
    for (i = 0; i < TAMAGENDA; i++){
        if (strcmp(numerocompletoBusca, pessoa[i].telefone.numerocompleto) == 0){
            printf ("\n\n");
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd, pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
            printf("\n Rua: %s   N�: %d", pessoa[i].endereco.rua, pessoa[i].endereco.numero);
            printf("\n Complemento: %s", pessoa[i].endereco.complemento);
            printf("\n Bairro: %s  CEP: %s", pessoa[i].endereco.bairro, pessoa[i].endereco.cep);
            printf("\n Cidade: %s   Estado: %s   Pa�s: %s", pessoa[i].endereco.cidade, pessoa[i].endereco.estado, pessoa[i].endereco.pais);
            printf("\n Data de anivers�rio: %d / %d / %d", pessoa[i].dataNiver.dia, pessoa[i].dataNiver.mes, pessoa[i].dataNiver.ano);
            printf("\n Observa��es: %s", pessoa[i].obs);
            qtdEncontrados++;
        }
    }
    
    if (qtdEncontrados == 0){
        printf ("\nNenhuma pessoa encontrada com este n�mero.\n\n");
    }
    
    // Repetir opera��o, voltar ao menu ou finalizar a execu��o
    printf("\n\n 1. Realizar busca novamente");
    printf("\n 2. Voltar ao menu");
    printf("\n 3. Sair \n");
    
    do{
    scanf ("%d", &op);
    fflush (stdin);
    valido = 1;
    
        switch (op){
            case 1: 
                system ("cls");
                return buscaTelefone();
                break;
            
            case 2:
                system ("cls");
                return menu();
                break;
            
            case 3:
                exit(0);
                break;
            
            default:
                valido = 0;
                printf ("Op��o Inv�lida! \n");
                break;
        }
    } while (valido == 0);


}

#endif // BUSCATELEFONE_H
