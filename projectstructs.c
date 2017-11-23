#include <stdio.h>
#include <string.h>

struct Endereco{
	char rua[151];
	int numero;
	char complemento[21];
	char bairro[51];
	char cep[9];
	char cidade[51];
	char estado[3];
	char pais[51];
};

struct Telefone{
	char ddd[3];
	char numero[10];
};

struct DataNiver{
	int dia;
	int mes;
	int ano;
};

struct Pessoa{
	char nome[51];
	char email[255];
	struct Endereco endereco;
	struct Telefone telefone;
	struct DataNiver dataNiver;
	char Obs[301];
};

int main(){
	
}