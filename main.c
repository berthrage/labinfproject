#include <stdio.h>
#include <string.h>
#include "main.h"
#include "menu.h"
#include "funcoes1.h"
#include "listarAgenda.h"
#include "ordemAlfTotal.h"
#include "ordemAlf.h"
#include "ordemLocal.h"
#include "excluirContato.h"

int main(){
  int auxnulo;

  // Permite usar acentua��o
  setlocale(LC_ALL, "Portuguese");

  // Mudar cor da fonte
  system("color B");

	//Classificar todo o vetor das pessoas da agenda como vazio
	for (auxnulo = 2; auxnulo < TAMAGENDA; auxnulo++){
		strcpy(pessoa[auxnulo].telefone.numero, "NULL");
	}
  
  menu();

	getch();
	return 0;
}
