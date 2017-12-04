// PROJETO AGENDA TELEFONICA - labinf 2017-2
// Membros do grupo: Leandro Bertoldo e Nicole Beatriz
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "main.h"
#include "menu.h"
#include "cadastrarAgenda.h"
#include "buscarAgenda.h"
#include "buscaNome.h"
#include "buscaMes.h"
#include "buscaTelefone.h"
#include "excluirAgenda.h"
#include "listarAgenda.h"
#include "ordemAlfTotal.h"
#include "ordemAlf.h"
#include "ordemLocal.h"
#include "sobre.h"


int main(){
    int auxnulo;
    // Permite usar acentuaçao
    setlocale(LC_ALL, "Portuguese");

    // Mudar cor da fonte
    system("color B");

    //Classificar todo o vetor das pessoas da agenda como vazio
    for (auxnulo = 0; auxnulo < TAMAGENDA; auxnulo++){
        strcpy(pessoa[auxnulo].telefone.numero, "NULL");
    }

  
    menu();

    getch();
    return 0;
}
