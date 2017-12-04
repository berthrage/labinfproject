#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

void menu(){
    int op,
        valido;

    printf("*****************************************************************\n");
    printf("*\t\t\t AGENDA TELEF�NICA \t\t\t*\n");
    printf("*\t\t\t\t\t\t\t\t*");
    printf("\n*****************************************************************\n");
    printf("Escolha uma op��o: \n\t");
    printf(" 1. Cadastrar \n\t");
    printf(" 2. Excluir \n\t");
    printf(" 3. Op��es de busca \n\t");
    printf(" 4. Op��es de listagem \n");

    do{
        scanf("%d", &op);
        fflush (stdin);

        switch(op){
            case 1:
                system("cls");
                cadastrarAgenda();
                valido = 1;
                break;

            case 2:
                system("cls");
                //excluirContato();
                valido = 1;
                break;

            case 3:
                system("cls");
                buscarAgenda();
                valido = 1;
                break;

            case 4:
                system("cls");
                listarAgenda();
                valido = 1;
                break;

            default:
                printf("Op��o Inv�lida! \n");
                valido = 0;
                break;
        }
    }while(valido == 0);
}

#endif // MENU_H_INCLUDED
