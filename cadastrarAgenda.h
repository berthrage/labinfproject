#include <stdio.h>
#include <string.h>
#include "main.h"
#ifndef CADASTRARAGENDA_H
#define CADASTRARAGENDA_H


void cadastrarAgenda(void){
	int i = 0, 
        iNull = -1, 
        erroCadastrarAgenda, 
        erroRepetirOperacao, 
        erroDia, 
        erroMes, 
        erroAno, 
        erroDdd, 
        erroNumero, 
        erroEmail,
        erroCep, 
        erroEstado,
        contValidEmail,
        contValidEmail2,
        containAt,
        posAt,
        flagValidCep,
        flagValidCep2,
        flagValidEstado,
        flagValidNum,
        op,
        valido;
	
	char repetirOperacao;
	
	// Estados Brasileiros para validação de Estado
	char estadosBr [27][3];
    strcpy (estadosBr[0], "AC");
    strcpy (estadosBr[1], "AL");
    strcpy (estadosBr[2], "AP");
    strcpy (estadosBr[3], "AM");
    strcpy (estadosBr[4], "BA");
    strcpy (estadosBr[5], "CE");
    strcpy (estadosBr[6], "DF");
    strcpy (estadosBr[7], "ES");
    strcpy (estadosBr[8], "GO");
    strcpy (estadosBr[9], "MA");
    strcpy (estadosBr[10], "MT");
    strcpy (estadosBr[11], "MS");
    strcpy (estadosBr[12], "MG");
    strcpy (estadosBr[13], "PA");
    strcpy (estadosBr[14], "PB");
    strcpy (estadosBr[15], "PR");
    strcpy (estadosBr[16], "PE");
    strcpy (estadosBr[17], "PI");
    strcpy (estadosBr[18], "RJ");
    strcpy (estadosBr[19], "RN");
    strcpy (estadosBr[20], "RS");
    strcpy (estadosBr[21], "RO");
    strcpy (estadosBr[22], "RR");
    strcpy (estadosBr[23], "SC");
    strcpy (estadosBr[24], "SP");
    strcpy (estadosBr[25], "SE");
    strcpy (estadosBr[26], "TO");


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
            printf ("ERRO: Agenda cheia.\n\n");
            break;
        }
        printf("*****************************************************************\n");
        printf("*\t\t\t CADASTRAR AGENDA \t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t*");
        printf("\n*****************************************************************\n");
        
        //DADOS BASICOS
        printf ("\n--Dados Básicos--\n");
        printf ("Nome: ");
        fgets (pessoa[iNull].nome, 52, stdin);
        pessoa[iNull].nome[strlen (pessoa[iNull].nome) - 1] = '\0';
        fflush (stdin);
        
        // Email, validaçao
        do{ 
            erroEmail = 0;
            contValidEmail = 0;
            contValidEmail2 = 0;
            containAt = 0;
            
            printf ("Email: ");
            fgets (pessoa[iNull].email, 256, stdin);
            pessoa[iNull].email[strlen (pessoa[iNull].email) - 1] = '\0';
            fflush (stdin);
            
            for (i = 0; i < strlen (pessoa[iNull].email); i++){
                if (pessoa[iNull].email[i] == '@'){
                    containAt = 1;
                }
            }
            
            if (containAt == 1){
                for (i = 0; pessoa[iNull].email[i] != '@'; i++){
                    contValidEmail++;
                }
                
                for (i = 0; i < strlen (pessoa[iNull].email); i++){
                    if (pessoa[iNull].email[i] == '@'){
                        posAt = i;
                    }
                }
                
                for (i = posAt + 1; pessoa[iNull].email[i] != '.'; i++){
                    contValidEmail2++;
                }
                
                if (contValidEmail <= 2){
                    erroEmail = 1;
                    printf ("INVÁLIDO: Email deve conter mais de 2 caracteres antes de '@'.\n\n");
                    
                } else if (contValidEmail2 <= 2){
                    erroEmail = 1;
                    printf ("INVÁLIDO: Email deve conter mais de 2 caracteres depois de '@'.\n\n");
                
                } else if (!(pessoa[iNull].email[strlen (pessoa[iNull].email) - 1] == 'm' &&
                    pessoa[iNull].email[strlen (pessoa[iNull].email) - 2] == 'o' && 
                    pessoa[iNull].email[strlen (pessoa[iNull].email) - 3] == 'c' &&
                    pessoa[iNull].email[strlen (pessoa[iNull].email) - 4] == '.')){
                    
                    erroEmail = 1;
                    printf ("INVÁLIDO: Email deve conter '.com' no final.\n\n");
                }                
            
            } else{
                erroEmail = 1;
                printf ("INVÁLIDO: Email deve conter '@'.\n\n");
            }

        
        }while (erroEmail == 1);
        
        
        
        //ENDEREÇO
        printf ("\n--Endereço--\n");
        printf ("Rua: ");
        fgets (pessoa[iNull].endereco.rua, 152, stdin);
        pessoa[iNull].endereco.rua[strlen (pessoa[iNull].endereco.rua) - 1] = '\0';
        fflush (stdin);

        printf ("Número: ");
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
        
        //CEP, validaçao
        do{
            erroCep = 0;
            flagValidCep = 0;
            flagValidCep2 = 0;
            
            printf ("CEP: ");
            fgets (pessoa[iNull].endereco.cep, 12, stdin);
            pessoa[iNull].endereco.cep[strlen (pessoa[iNull].endereco.cep) - 1] = '\0';
            fflush (stdin);
            
            for (i = 0; i < 5; i++){
                if (!(pessoa[iNull].endereco.cep[i] >= 48 && pessoa[iNull].endereco.cep[i] <= 57)){
                    flagValidCep = 1;
                }
            }
            
            for (i = 6; i < 9; i++){
                if (!(pessoa[iNull].endereco.cep[i] >= 48 && pessoa[iNull].endereco.cep[i] <= 57)){
                    flagValidCep2 = 1;
                }
            }
            
            if (pessoa[iNull].endereco.cep[5] != '-' || 
                strlen(pessoa[iNull].endereco.cep) > 9 ||
                strlen(pessoa[iNull].endereco.cep) < 9){
                
                erroCep = 1;
                printf ("INVÁLIDO: CEP deve conter 5 dígitos numéricos + '-' + 3 dígitos numéricos.\n\n");
            } else if (flagValidCep == 1 || flagValidCep2 == 1){
                erroCep = 1;
                printf ("INVÁLIDO: CEP deve conter apenas dígitos numéricos.\n\n");
            }
            
        }while (erroCep == 1);
        
        printf ("País: ");
        fgets (pessoa[iNull].endereco.pais, 50, stdin);
        pessoa[iNull].endereco.pais[strlen (pessoa[iNull].endereco.pais) - 1] = '\0';
        fflush (stdin);
        
        //Estado, validaçao
        do{
            erroEstado = 0;
            flagValidEstado = 0;
            
            printf ("Estado: ");
            fgets (pessoa[iNull].endereco.estado, 5, stdin);
            pessoa[iNull].endereco.estado[strlen (pessoa[iNull].endereco.estado) - 1] = '\0';
            fflush (stdin);
            
            
            for (i = 0; i < 27; i++){
                if (strcmp(pessoa[iNull].endereco.estado, estadosBr[i]) == 0){
                    flagValidEstado = 1;
                }
            }
                
            if (flagValidEstado != 1 || strlen (pessoa[iNull].endereco.estado) > 2){
                erroEstado = 1;
                printf ("INVÁLIDO: Estado informado não existe.\n\n");
            } 
            
        } while (erroEstado == 1);        
        
        
        printf ("Cidade: ");
        fgets (pessoa[iNull].endereco.cidade, 52, stdin);
        pessoa[iNull].endereco.cidade[strlen (pessoa[iNull].endereco.cidade) - 1] = '\0';
        fflush (stdin);


        
        //TELEFONE
        printf ("\n--Telefone--\n");
        //DDD, validacao
        do{
            erroDdd = 0;
            printf ("DDD (2 dígitos entre parênteses): ");
            fgets (pessoa[iNull].telefone.ddd, 7, stdin);
            pessoa[iNull].telefone.ddd[strlen (pessoa[iNull].telefone.ddd) - 1] = '\0';
            fflush (stdin);
            
            if (!(pessoa[iNull].telefone.ddd[0] == 40 && 
                pessoa[iNull].telefone.ddd[1] >= 48 && pessoa[iNull].telefone.ddd[1] <= 57 &&
                pessoa[iNull].telefone.ddd[2] >= 48 && pessoa[iNull].telefone.ddd[2] <= 57 && 
                pessoa[iNull].telefone.ddd[3] == 41)){
                
                printf ("INVÁLIDO: Informar DDD apenas com 2 dígitos entre parênteses.\n\n");
                erroDdd = 1;
            
            } else if (strlen (pessoa[iNull].telefone.ddd) > 4){
                printf ("INVÁLIDO: Informar DDD apenas com 2 dígitos entre parênteses (4 caracteres máx).\n\n");
                erroDdd = 1;
            }
            
        } while (erroDdd == 1);

        // Numero telefone, validacao
        do{
            erroNumero = 0;
            flagValidNum = 0;
            
            printf ("Numero: ");
            fgets (pessoa[iNull].telefone.numero, 13, stdin);
            pessoa[iNull].telefone.numero[strlen (pessoa[iNull].telefone.numero) - 1] = '\0';
            fflush (stdin);
            
            for (i = 0; i < 4; i++){
                if (!(pessoa[iNull].telefone.numero[i] >= 48 && pessoa[iNull].telefone.numero[i] <= 57)){
                    flagValidNum = 1;
                }
            }
            
            if (strlen(pessoa[iNull].telefone.numero) == 9){ //Caso formato seja '9999-9999'
                if ((pessoa[iNull].telefone.numero[4] != 45)){
                    flagValidNum = 1;
                } 
                for (i = 5; i < 9; i++){
                    if (!(pessoa[iNull].telefone.numero[i] >= 48 && pessoa[iNull].telefone.numero[i] <= 57)){
                        flagValidNum = 1;
                    }
                }
            } else if (strlen(pessoa[iNull].telefone.numero) == 10){ //Caso formato seja '99999-9999'
                if ((pessoa[iNull].telefone.numero[5] != 45)){
                    flagValidNum = 1;
                } 
                for (i = 6; i < 10; i++){
                    if (!(pessoa[iNull].telefone.numero[i] >= 48 && pessoa[iNull].telefone.numero[i] <= 57)){
                        flagValidNum = 1;
                    }
                }
            }
            
            if (flagValidNum == 1){
                printf ("INVÁLIDO: Apenas dígitos numéricos e '-' (4 ou 5 digitos + '-' + 4 digitos).\n\n");
                erroNumero = 1;
            
            } else if (strlen(pessoa[iNull].telefone.numero) > 10 || strlen (pessoa[iNull].telefone.numero) < 9){
                printf ("INVÁLIDO: Apenas dígitos numéricos e '-' (10 caracteres máx).\n\n");
                erroNumero = 1;
            }
            
        }while (erroNumero == 1);
        
        // Concatenar DDD e Numero para facilitar busca
        strcpy (pessoa[iNull].telefone.numerocompleto, pessoa[iNull].telefone.ddd);
        strcat (pessoa[iNull].telefone.numerocompleto, pessoa[iNull].telefone.numero);
      
        
        
        //DATA DE ANIVERSARIO
        printf ("\n--Data de Aniversario--\n");
        //Dia, validaçao
        do{
            erroDia = 0;

            printf ("Dia: ");
            scanf ("%d", &pessoa[iNull].dataNiver.dia);
            fflush (stdin);

            if (!(pessoa[iNull].dataNiver.dia >= 1 && pessoa[iNull].dataNiver.dia <= 30)){
                printf ("INVÁLIDO: Informar dia entre 1 e 30.\n\n");
                erroDia = 1;
            }
        }while (erroDia == 1);

        //Mes, validaçao
        do{
            erroMes = 0;
            printf ("Mes: ");
            scanf ("%d", &pessoa[iNull].dataNiver.mes);
            fflush (stdin);
            if (!(pessoa[iNull].dataNiver.mes >= 1  && pessoa[iNull].dataNiver.mes <= 12)){
                printf ("INVÁLIDO: Informar mes entre 1 e 12.\n\n");
                erroMes = 1;
            }
        }while (erroMes == 1);

        //Ano, validaçao
        do{
            erroAno = 0;
            printf ("Ano: ");
            scanf ("%d", &pessoa[iNull].dataNiver.ano);
            fflush (stdin);

            if (pessoa[iNull].dataNiver.ano < 1900){
                printf ("INVÁLIDO: Informar ano a partir de 1900.\n\n");
                erroAno = 1;
            }
        } while (erroAno == 1);
        
        
        
        //OBSERVACOES
        printf ("\nObservações (conter no máx. 300 caracteres): ");
        fgets (pessoa[iNull].obs, 300, stdin);
        pessoa[iNull].obs[strlen (pessoa[iNull].obs) - 1] = '\0';
        fflush (stdin);

        //Contagem de quantas pessoas cadastradas existem na agenda
        qtdCadastrados++;
        
        printf ("\n\n'%s' cadastrado(a) com sucesso.\n", pessoa[iNull].nome);
        
        // Repetir operação, voltar ao menu ou finalizar a execução
        printf("\n\n 1. Realizar outro cadastro");
        printf("\n 2. Voltar ao menu");
        printf("\n 3. Sair \n");
        do{
            valido = 1;
            scanf ("%d", &op);
            fflush (stdin);

            switch(op){
                case 1:
                    system ("cls");
                    erroCadastrarAgenda = 1;
                    continue;
                
                case 2:
                    system ("cls");
                    return menu();
                    break;
                
                case 3:
                    exit (0);
                    break;
                
                default:
                    printf ("Operação Inválida! \n");
            
            }
            
        }while (valido == 0);

    }while (erroCadastrarAgenda == 1);
    
    system("cls");
    return menu ();
}

#endif //CADASTRARAGENDA_H
