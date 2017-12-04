#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef EXCLUIRAGENDA_H_INCLUDED
#define EXCLUIRAGENDA_H_INCLUDED
#include "main.h"


void excluirAgenda(void){
    int i, 
        j,
        iExcl = -1, 
        op,
        op2,
        valido,
        possuiEspaco,
        comprPrimeiroNome,
        qtdEncontrados = 0;
        
    
    char nomeBusca[52];

    
    printf("*****************************************************************\n");
    printf("*\t\t\t EXCLUIR AGENDA \t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");
    
    printf ("\n\n");
    
    // Ler busca do usuário
    printf ("Nome da pessoa que deseja excluir: ");
    fgets (nomeBusca, 52, stdin);
    nomeBusca[strlen (nomeBusca) - 1] = '\0';
    fflush(stdin);


    
    // Realizar a busca da pessoa que deve ser excluida 
    for (i = 0; i < TAMAGENDA; i++){
        if (stricmp (nomeBusca, pessoa[i].nome) == 0 && 
            strcmp (pessoa[i].telefone.numero, "NULL") != 0){
            
            printf ("\n\n");
            printf("\n Nome: %s", pessoa[i].nome);
            printf("\n Telefone: %s %s", pessoa[i].telefone.ddd, pessoa[i].telefone.numero);
            printf("\n E-mail: %s", pessoa[i].email);
            
            printf("\n\nDeseja excluir esse contato? \n\t 1. Sim \n\t 2. Não \n");
            
            do{
                scanf("%d", &op);
                fflush(stdin);
                valido = 1;
                switch(op){
                    case 1:
                        iExcl = i; // Índice de posição de pessoa que deve ser escluída
                        break;

                    case 2:
                        continue;

                    default:
                        printf("Opção inválida! \n");
                        valido = 0;
                        break;
                }
            } while (valido == 0);

            qtdEncontrados++;
        }
    }
    
    
    if (qtdEncontrados == 0){
        printf ("\nNenhuma pessoa encontrada.\n\n");
    }
    
    // Usar o iExcl para excluir
    if (iExcl != -1){ 
        printf ("\n'%s' excluído(a) com sucesso.\n\n", pessoa[iExcl].nome);
        
        strcpy (pessoa[iExcl].nome, "");
        strcpy (pessoa[iExcl].email, "");
        strcpy (pessoa[iExcl].endereco.rua, "");
        strcpy (pessoa[iExcl].endereco.complemento, "");
        strcpy (pessoa[iExcl].endereco.bairro, "");
        strcpy (pessoa[iExcl].endereco.cep, "");
        strcpy (pessoa[iExcl].endereco.pais, "");
        strcpy (pessoa[iExcl].endereco.estado, "");
        strcpy (pessoa[iExcl].endereco.cidade, "");
        strcpy (pessoa[iExcl].telefone.ddd, "");
        strcpy (pessoa[iExcl].obs, "");
        strcpy (pessoa[iExcl].telefone.numero, "NULL"); // IMPORTANTE: Definir como vazio
        pessoa[iExcl].endereco.numero = 0;
        pessoa[iExcl].dataNiver.dia = 0;
        pessoa[iExcl].dataNiver.mes = 0;
        pessoa[iExcl].dataNiver.ano = 0;
        
        qtdCadastrados--;
    }
    
    
    
    // Repetir operação, voltar ao menu ou finalizar a execução
    printf("\n\n 1. Realizar outra exclusão");
    printf("\n 2. Voltar ao menu");
    printf("\n 3. Sair \n");
    
    do{
    scanf ("%d", &op2);
    fflush (stdin);
    valido = 1;
    
        switch (op2){
            case 1: 
                system ("cls");
                return excluirAgenda();
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



#endif // EXCLUIRAGENDA_H_INCLUDED
