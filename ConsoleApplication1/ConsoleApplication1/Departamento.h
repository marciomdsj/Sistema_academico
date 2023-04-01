#pragma once
#include "Universidade.h"

class ListaDisciplinas;
class Disciplina;
class Departamento
{
private:
	char nomeDepartamento[30];
	Universidade* pUniv;
	Disciplina* pDiscpAtual;
	Disciplina* pDiscpPrim;
	Disciplina* discp;

	ListaDisciplinas* pObjLDisciplinas;

public:
	Departamento();
	~Departamento();
	void setNomeDepart(const char* n);
	const char* getNomeDepart();
	void setUniversidade(Universidade* univ);
	Universidade* getUniversidade();
	void incluiDiscp(Disciplina* pd);
	void listaDiscp();
	void listaDiscp2();
};

