#pragma once
#include"Pessoa.h"
#include"Universidade.h"
#include"Disciplina.h"

class Principal
{
private:
	Pessoa Einstein;
	Pessoa Newton;
	Pessoa Simao;
	Pessoa Dorini;
	Universidade UTFPR;
	Universidade Princeton;
	Universidade Cambridge;
	Departamento DAINF;
	Departamento DAMAT;
	Disciplina Calculo;
	Disciplina Computacao;
	Disciplina Algoritmo;
	Disciplina Calculo2;
	Aluno Marcio;
	Aluno Lukas;

	int diaATUAL;
	int mesATUAL;
	int anoATUAL;

public:
	Principal(); // Função construtora!
	~Principal();
	void executar();
	void listDeptoUniv();
	void listDiscpDepto();
	void listAlunosDiscp();
};