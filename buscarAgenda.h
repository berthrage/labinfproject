#ifndef BUSCARAGENDA_H
#define BUSCARAGENDA_H

void buscarAgenda(){
    int op,
        valido;

    printf("*****************************************************************\n");
    printf("* \t\t\t BUSCAR AGENDA \t\t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");
    printf("Escolha uma opção: \n\t");
    printf(" 1. Buscar pessoa por primeiro nome \n\t");
    printf(" 2. Buscar por mês de aniversário \n\t");
    printf(" 3. Buscar por número de telefone \n\t");
    printf(" 4. Voltar ao menu \n");

    do{
        valido = 1;
        scanf("%d", &op);
        fflush (stdin);

        switch(op){
            case 1:
                system("cls");
                buscaNome();
                break;

            case 2:
                system("cls");
                buscaMes();
                break;

            case 3:
                system("cls");
                buscaTelefone();
                break;

            case 4:
                system("cls");
                return menu();
                break;

            default:
                printf ("Opção Inválida! \n");
                valido = 0;
                break;
        }
    }while(valido == 0);

}


#endif //BUSCARAGENDA_H
