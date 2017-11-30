#include <stdio.h>
#include <string.h>
#include "funcoes1.h"
#include "main.h"

int main(){
	int auxnulo;

	//Classificar todo o vetor das pessoas da agenda como vazio
	for (auxnulo = 2; auxnulo < TAMAGENDA; auxnulo++){
		strcpy(pessoa[auxnulo].telefone.numero, "NULL");
	}

	cadastrarAgenda ();

	getch();
	return 0;
}
