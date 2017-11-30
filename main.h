#ifndef MAIN_H
#define MAIN_H
#define TAMAGENDA (100)

struct Endereco{
	char rua[152];
	int numero;
	char complemento[22];
	char bairro[52];
	char cep[12];
	char cidade[52];
	char estado[4];
	char pais[52];
};

struct Telefone{
	char ddd[7];
	char numero[13];
};

struct DataNiver{
	int dia;
	int mes;
	int ano;
};

struct Pessoa{
	char nome[52];
	char email[256];
	struct Endereco endereco;
	struct Telefone telefone;
	struct DataNiver dataNiver;
	char obs[302];
};

struct Pessoa pessoa[100];

#endif
