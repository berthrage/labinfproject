#include <stdlib.h>
#ifndef BUSCANOME_H
#define BUSCANOME_H
#include "main.h"

void buscaNome(void){
    int i, 
        j, 
        op,
        valido,
        possuiEspaco,
        comprPrimeiroNome,
        erroLerBusca,
        qtdEncontrados = 0;
        
    
    char nomeBusca[52], 
        auxPrimeiroNome[TAMAGENDA][52];
    
    printf("*****************************************************************\n");
    printf("*\t\t\t BUSCA PRIMEIRO NOME \t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");
    
    printf ("\n\n");
    
    // Ler busca do usuário
    do{
        erroLerBusca = 0;
        
        printf ("Primeiro nome da pessoa que deseja buscar: ");
        fgets (nomeBusca, 52, stdin);
        nomeBusca[strlen (nomeBusca) - 1] = '\0';
        fflush(stdin);
        
        for (i = 0; i < strlen(nomeBusca); i++){
            if (nomeBusca[i] == ' '){
                erroLerBusca = 1;
            }
        }
        
        if (erroLerBusca == 1){
            printf ("INVÁLIDO: Informar apenas primeiro nome.\n\n");
        }
        
        
    } while (erroLerBusca == 1);
    
    
    
    // Separar primeiros nomes em vetor auxiliar para comparação
    for (i = 0; i < TAMAGENDA; i++){
        comprPrimeiroNome = 0;
        possuiEspaco = 0;
        
        for (j = 0; j < strlen(pessoa[i].nome); j++){
            if (pessoa[i].nome[j] == ' '){
                possuiEspaco = 1;
            }
        }
        
        if (possuiEspaco == 1){
            for (j = 0; pessoa[i].nome[j] != ' '; j++){
                comprPrimeiroNome++;
            }        
            
            strncpy (auxPrimeiroNome[i], pessoa[i].nome, comprPrimeiroNome);
            auxPrimeiroNome[i][comprPrimeiroNome] = '\0';
        
        } else if (possuiEspaco == 0){
            
            strcpy (auxPrimeiroNome[i], pessoa[i].nome);
        }
        
    }
    
    // Realizar a busca (por comparação)
    for (i = 0; i < TAMAGENDA; i++){
        if (stricmp (nomeBusca, auxPrimeiroNome[i]) == 0 && 
            strcmp (pessoa[i].telefone.numero, "NULL") != 0){
            
            printf ("\n\n");
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd, pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
            printf("\n Rua: %s   Nº: %d", pessoa[i].endereco.rua, pessoa[i].endereco.numero);
            printf("\n Complemento: %s", pessoa[i].endereco.complemento);
            printf("\n Bairro: %s  CEP: %s", pessoa[i].endereco.bairro, pessoa[i].endereco.cep);
            printf("\n Cidade: %s   Estado: %s   País: %s", pessoa[i].endereco.cidade, pessoa[i].endereco.estado, pessoa[i].endereco.pais);
            printf("\n Data de aniversário: %d / %d / %d", pessoa[i].dataNiver.dia, pessoa[i].dataNiver.mes, pessoa[i].dataNiver.ano);
            printf("\n Observações: %s", pessoa[i].obs);
            qtdEncontrados++;
        }
    }
    
    if (qtdEncontrados == 0){
        printf ("\nNenhuma pessoa encontrada.\n\n");
    }
    
    // Repetir operação, voltar ao menu ou finalizar a execução
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
                return buscaNome();
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
                printf ("Opção Inválida! \n");
                break;
        }
    } while (valido == 0);



}


#endif // BUSCANOME_H
