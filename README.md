# labinfproject

Agenda Telefônica

Fazer um programa para simular uma agenda de telefones.
Cada pessoa da agenda deve ter os seguintes dados:
• Nome
• E-mail
• Endereço (contendo campos para Rua, número, complemento, bairro, cep, cidade, estado, paı́s).
• Telefone (contendo campo para DDD e número)
• Data de aniversário (contendo campo para dia, mês, ano).
• Observações: uma linha (string) para alguma observação especial.

===============================
Leandro
(a) Definir as estruturas acima.
(b) Declarar a variável agenda (vetor) com capacidade de agendar até 100 nomes.
(c) Criar uma função de busca por primeiro nome: Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
(d) Criar uma função de busca por mês de aniversário: Imprime os dados de todas as pessoas que fazem aniversário nesse mês.
(e) Criar uma função de busca por número de telefone: Imprime os dado da pessoa com esse respectivo número.
(i) Criar funções de validação para, no mínimo (dia, mês e ano; telefone; email; cep; estado).

================================

===============================
Nicole
(f) Criar uma função para listar pessoas - por ordem alfabética de nome.
(g) Criar uma função para excluir pessoas - retira todos os dados dessa pessoa e readeque o vetor de pessoas.
(h) Criar uma função para imprimir a agenda com as opções:
      • Imprime nome, telefone e e-mail (ordem alfabética de nome).
      • Imprime nome, telefone e e-mail (separado por localidade).
      • Imprime todos os dados (ordem alfabética de nome).
(j) O programa deve ter um menu principal oferecendo as opções acima.
===============================

Validações

Validar data: dias entre 1 e 30 (inclusive); mês entre 1 e 12 (inclusive); anos entre 1900 e data corrente;
Validar telefone: 2 dígitos numéricos entre parênteses (significa o DDD); 4 ou 5 dígitos numéricos; um tracinho; 4 dígitos numéricos.
Validar email: sequencia > 2 dígitos; um @; sequencia > 2 dígitos; um ponto; sufixo COM (tudo em minúsculo)
Validar CEP: 5 dígitos numéricos; um tracinho; 3 dígitos numéricos.
Validar estado: somente uma das 27 siglas dos estados brasileiros (tudo em maiúsculo).
