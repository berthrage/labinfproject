#ifndef SOBRE_H
#define SOBRE_H

void sobre(void){
    int op,
        valido;
    
    printf("*****************************************************************\n");
    printf("*\t\t\t SOBRE \t\t\t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");
    
    printf ("\n\n");
    printf ("Feito por: \n\t");
    printf (" Leandro Bertoldo // Berth \n\t");
    printf (" Nicole Beatriz // Nih \n");
    printf ("\n\nProjeto de Laboratório de Informática - 2017/2");
    
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


#endif // SOBRE_H
