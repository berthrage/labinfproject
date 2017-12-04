#include <stdlib.h>
#ifndef BUSCAMES_H
#define BUSCAMES_H
#include "main.h"

void buscaMes (void){
    int i, 
        j, 
        op,
        valido,
        mesBusca,
        erroLerBusca,
        qtdEncontrados = 0;
    
    // Meses para printar na interface de busca
    char mes[12][10];
    strcpy (mes[0], "JANEIRO");
    strcpy (mes[1], "FEVEREIRO");
    strcpy (mes[2], "MARÇO");
    strcpy (mes[3], "ABRIL");
    strcpy (mes[4], "MAIO");
    strcpy (mes[5], "JUNHO");
    strcpy (mes[6], "JULHO");
    strcpy (mes[7], "AGOSTO");
    strcpy (mes[8], "SETEMBRO");
    strcpy (mes[9], "OUTUBRO");
    strcpy (mes[10], "NOVEMBRO");
    strcpy (mes[11], "DEZEMBRO");
    
    printf("*****************************************************************\n");
    printf("*\t\t\t BUSCA MÊS ANIVERSÁRIO \t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");
    
    printf ("\n\n");
    
    // Ler busca do usuário
    do{
        erroLerBusca = 0;
        
        printf ("Mês de aniversário (entre 1 e 12) da pessoa que deseja buscar: ");
        scanf ("%d", &mesBusca);
        fflush(stdin);
        
        if (!(mesBusca >= 1 && mesBusca <= 12)){
            erroLerBusca = 1;
            printf ("INVÁLIDO: Informar mês entre 1 e 12.\n\n");
        }
        
    } while (erroLerBusca == 1);
    
    printf ("\n\n");
    printf ("---ANIVERSÁRIO EM %s---", mes[mesBusca - 1]);    
  
    // Realizar a busca (por comparação)
    for (i = 0; i < qtdCadastrados; i++){
        if (mesBusca == pessoa[i].dataNiver.mes &&
            strcmp (pessoa[i].telefone.numero, "NULL") != 0){
                
            printf ("\n");
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
        printf ("\nNenhuma pessoa encontrada nesse mês.\n\n");
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
                return buscaMes();
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

#endif // BUSCAMES_H
