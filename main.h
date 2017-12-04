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
	char estado[5];
	char pais[52];
};

struct Telefone{
	char ddd[7];
	char numero[13];
	char numerocompleto[21];
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
int qtdCadastrados = 0;

//Funções
void cadastrarAgenda(void);
void buscarAgenda(void);
void buscaNome(void);
void buscaMes(void);
void buscaTelefone(void);
void excluirAgenda(void);
void listarAgenda(void);
void ordemAlfabeticaT(void);
void ordemAlfabetica(void);
void ordemLocalidade(void);
void sobre(void);


#endif //MAIN_H
