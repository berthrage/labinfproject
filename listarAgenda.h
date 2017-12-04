#ifndef LISTARAGENDA_H_INCLUDED
#define LISTARAGENDA_H_INCLUDED

void listarAgenda(void){
    int op,
        valido;

    printf("*****************************************************************\n");
    printf("* \t\t\t LISTAR AGENDA \t\t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");
    printf("Escolha uma opção: \n\t");
    printf(" 1. Imprime todos os dados (ordem alfabética de nome) \n\t");
    printf(" 2. Imprime nome, telefone e e-mail (ordem alfabética de nome) \n\t");
    printf(" 3. Imprime nome, telefone e e-mail (separado por localidade) \n\t");
    printf(" 4. Voltar ao menu \n");

    do{
        scanf("%d", &op);
        fflush (stdin);

        switch(op){
            case 1:
                system("cls");
                ordemAlfabeticaT();
                valido = 1;
                break;

            case 2:
                system("cls");
                ordemAlfabetica();
                valido = 1;
                break;

            case 3:
                system("cls");
                ordemLocalidade();
                valido = 1;
                break;

            case 4:
                system("cls");
                return menu();
                valido = 1;
                break;

            default:
                printf("Opção Inválida! \n");
                valido = 0;
                break;
        }
    }while(valido == 0);

}



#endif // LISTARAGENDA_H_INCLUDED
