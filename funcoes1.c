#include <stdio.h>

void cadastrarAgenda(void){
	printf ("== CADASTRAR PESSOA ==\n\n");
	int i = 0, indiceVazio;
	   
	//Checar vetor das pessoas para encontrar vetor vazio
	for (i = 0; i < TAMAGENDA; i++){
		if (strcmp(pessoa[i].telefone.numero, "NULL") == 0){
			indiceVazio = i;
			break;
  	   }
	}
	
	if (indiceVazio == 0)
	printf ("Nome: );
	   
	   	
}