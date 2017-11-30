#include <stdio.h>
#include <string.h>
#include "main.h"
#ifndef FUNCOES1_H
#define FUNCOES1_H


void cadastrarAgenda(void){
	int i = 0, iNull = -1, erroCadastrarAgenda, erroRepetirOperacao, erroDia, erroMes, erroAno, erroDdd, erroNumero;
	char repetirOperacao;

    do{
        erroCadastrarAgenda = 0;

        //Checar vetor das pessoas para encontrar vetor vazio
        for (i = 0; i < TAMAGENDA; i++){
            if (strcmp (pessoa[i].telefone.numero, "NULL") == 0){
                iNull = i;
                break;
           }
        }

        if (iNull == -1){
            printf ("ERRO: Agenda cheia.\n");
            break;
        }
        printf ("== CADASTRAR PESSOA ==\n\n");
        
        //DADOS BASICOS
        printf ("\n--Dados Basicos--\n");
        printf ("Nome: ");
        fgets (pessoa[iNull].nome, 52, stdin);
        pessoa[iNull].nome[strlen (pessoa[iNull].nome) - 1] = '\0';
        fflush (stdin);

        printf ("Email: ");
        fgets (pessoa[iNull].email, 256, stdin);
        pessoa[iNull].email[strlen (pessoa[iNull].email) - 1] = '\0';
        fflush (stdin);

        printf ("\n--Endereco--\n");
        printf ("Rua: ");
        fgets (pessoa[iNull].endereco.rua, 152, stdin);
        pessoa[iNull].nome[strlen (pessoa[iNull].endereco.estado) - 1] = '\0';
        fflush (stdin);

        printf ("Numero: ");
        scanf ("%d", &pessoa[iNull].endereco.numero);
        fflush (stdin);

        printf ("Complemento: ");
        fgets (pessoa[iNull].endereco.complemento, 22, stdin);
        pessoa[iNull].endereco.complemento[strlen (pessoa[iNull].endereco.complemento) - 1] = '\0';
        fflush (stdin);

        printf ("Bairro: ");
        fgets (pessoa[iNull].endereco.bairro, 52, stdin);
        pessoa[iNull].endereco.bairro[strlen (pessoa[iNull].endereco.bairro) - 1] = '\0';
        fflush (stdin);

        printf ("CEP: ");
        fgets (pessoa[iNull].endereco.cep, 12, stdin);
        pessoa[iNull].endereco.cep[strlen (pessoa[iNull].endereco.cep) - 1] = '\0';
        fflush (stdin);

        printf ("Cidade: ");
        fgets (pessoa[iNull].endereco.cidade, 52, stdin);
        pessoa[iNull].endereco.cidade[strlen (pessoa[iNull].endereco.cidade) - 1] = '\0';
        fflush (stdin);

        printf ("Estado: ");
        fgets (pessoa[iNull].endereco.estado, 4, stdin);
        pessoa[iNull].endereco.estado[strlen (pessoa[iNull].endereco.estado) - 1] = '\0';
        fflush (stdin);
        
        printf ("\n%s\n", pessoa[iNull].endereco.estado);

        printf ("Pais: ");
        fgets (pessoa[iNull].endereco.pais, 50, stdin);
        pessoa[iNull].endereco.pais[strlen (pessoa[iNull].endereco.pais) - 1] = '\0';
        fflush (stdin);

        //TELEFONE
        printf ("\n--Telefone--\n");
        do{
            erroDdd = 0;
            printf ("DDD (2 digitos entre parenteses): ");
            fgets (pessoa[iNull].telefone.ddd, 7, stdin);
            pessoa[iNull].telefone.ddd[strlen (pessoa[iNull].telefone.ddd) - 1] = '\0';
            fflush (stdin);
            
            if (!(pessoa[iNull].telefone.ddd[0] == 40 && 
                pessoa[iNull].telefone.ddd[1] >= 48 && pessoa[iNull].telefone.ddd[1] <= 57 &&
                pessoa[iNull].telefone.ddd[2] >= 48 && pessoa[iNull].telefone.ddd[2] <= 57 && 
                pessoa[iNull].telefone.ddd[3] == 41)){
                
                printf ("INVALIDO: Informar DDD apenas com 2 digitos entre parenteses.\n");
                erroDdd = 1;
            
            }
            
            if (strlen (pessoa[iNull].telefone.ddd) > 4){
                printf ("INVALIDO: Informar DDD apenas com 2 digitos entre parenteses (4 caracteres max).\n");
                erroDdd = 1;
            }
            
        } while (erroDdd == 1);

        do{
            erroNumero = 0;
            printf ("Numero (4 ou 5 digitos + '-' + 4 digitos): ");
            fgets (pessoa[iNull].telefone.numero, 13, stdin);
            pessoa[iNull].telefone.numero[strlen (pessoa[iNull].telefone.numero) - 1] = '\0';
            fflush (stdin);
            
            for (i = 0; i < 4; i++){
                if (!(pessoa[iNull].telefone.numero[i] >= 48 && pessoa[iNull].telefone.numero[i] <= 57)){
                    printf ("ERRO1: Apenas caracteres numericos e '-'.\n");
                    erroNumero = 1;
                    break;
                }
            }
            
            if (strlen(pessoa[iNull].telefone.numero) == 9  && erroNumero == 0){
                if ((pessoa[iNull].telefone.numero[4] != 45)){
                    printf ("ERRO2: Apenas caracteres numericos e '-'.\n");
                    erroNumero = 1;
                } 
                for (i = 5; i < 9; i++){
                    if (!(pessoa[iNull].telefone.numero[i] >= 48 && pessoa[iNull].telefone.numero[i] <= 57)){
                        printf ("ERRO3: Apenas caracteres numericos e '-'.\n");
                        erroNumero = 1;
                        break;
                    }
                }
            } else if (strlen(pessoa[iNull].telefone.numero) == 10 && erroNumero == 0){
                if ((pessoa[iNull].telefone.numero[5] != 45)){
                    printf ("ERRO2: Apenas caracteres numericos e '-'.\n");
                    erroNumero = 1;
                } 
                for (i = 6; i < 10; i++){
                    if (!(pessoa[iNull].telefone.numero[i] >= 48 && pessoa[iNull].telefone.numero[i] <= 57)){
                        printf ("ERRO3: Apenas caracteres numericos e '-'.\n");
                        erroNumero = 1;
                        break;
                    }
                }
                
            } else if (strlen(pessoa[iNull].telefone.numero) > 10 && erroNumero == 0){
                printf ("INVALIDO: Apenas caracteres numericos e '-' (10 caracteres max).\n");
                erroNumero = 1;
            }
            
        }while (erroNumero == 1);

        //DATA DE ANIVERSARIO
        printf ("\n--Data de Aniversario--\n");
        do{
            erroDia = 0;

            printf ("Dia: ");
            scanf ("%d", &pessoa[iNull].dataNiver.dia);
            fflush (stdin);

            if (!(pessoa[iNull].dataNiver.dia >= 1 && pessoa[iNull].dataNiver.dia <= 30)){
                printf ("INVALIDO: Informar dia entre 1 e 30.\n");
                erroDia = 1;
            }
        }while (erroDia == 1);


        do{
            erroMes = 0;
            printf ("Mes: ");
            scanf ("%d", &pessoa[iNull].dataNiver.mes);
            fflush (stdin);
            if (!(pessoa[iNull].dataNiver.mes >= 1  && pessoa[iNull].dataNiver.mes <= 12)){
                printf ("INVALIDO: Informar mes entre 1 e 12.\n");
                erroMes = 1;
            }
        }while (erroMes == 1);


        do{
            erroAno = 0;
            printf ("Ano: ");
            scanf ("%d", &pessoa[iNull].dataNiver.ano);
            fflush (stdin);

            if (pessoa[iNull].dataNiver.ano < 1900){
                printf ("INVALIDO: Informar ano a partir de 1900.\n");
                erroAno = 1;
            }
        } while (erroAno == 1);
        
        //OBSERVACOES
        printf ("\nObservacoes (conter no max. 300 caracteres): ");
        fgets (pessoa[iNull].obs, 300, stdin);
        pessoa[iNull].obs[strlen (pessoa[iNull].obs) - 1] = '\0';
        fflush (stdin);

        //REPETIR OPERACAO DE CADASTRO
        do{
            erroRepetirOperacao = 0;
            printf ("\n\nDeseja cadastrar outra pessoa na agenda? ('s' ou 'n'): ");
            scanf ("%c", &repetirOperacao);
            fflush (stdin);

            if (repetirOperacao == 's'){
                erroCadastrarAgenda = 1;
            } else if (repetirOperacao == 'n'){
                erroCadastrarAgenda = 0;
            } else{
                printf ("ERRO: Informar 's' ou 'n'.\n");
                erroRepetirOperacao = 1;
            }
        }while (erroRepetirOperacao == 1);

    }while (erroCadastrarAgenda == 1);

}

#endif //FUNCOES1_H
