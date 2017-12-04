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
    strcpy (mes[2], "MAR�O");
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
    printf("*\t\t\t BUSCA M�S ANIVERS�RIO \t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");
    
    printf ("\n\n");
    
    // Ler busca do usu�rio
    do{
        erroLerBusca = 0;
        
        printf ("M�s de anivers�rio (entre 1 e 12) da pessoa que deseja buscar: ");
        scanf ("%d", &mesBusca);
        fflush(stdin);
        
        if (!(mesBusca >= 1 && mesBusca <= 12)){
            erroLerBusca = 1;
            printf ("INV�LIDO: Informar m�s entre 1 e 12.\n\n");
        }
        
    } while (erroLerBusca == 1);
    
    printf ("\n\n");
    printf ("---ANIVERS�RIO EM %s---", mes[mesBusca - 1]);    
  
    // Realizar a busca (por compara��o)
    for (i = 0; i < qtdCadastrados; i++){
        if (mesBusca == pessoa[i].dataNiver.mes &&
            strcmp (pessoa[i].telefone.numero, "NULL") != 0){
                
            printf ("\n");
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
        printf ("\nNenhuma pessoa encontrada nesse m�s.\n\n");
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
                printf ("Op��o Inv�lida! \n");
                break;
        }
    } while (valido == 0);


}

#endif // BUSCAMES_H
