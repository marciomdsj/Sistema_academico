#pragma once
#include"Disciplina.h"
#include"ElDisciplina.h"
class ListaDisciplinas
{

private:
	int cont_disc;
	int numero_disc;
	char nome[150];
	ElDisciplina* pElDisciplinaPrim;
	ElDisciplina* pElDisciplinaAtual;
public:
	ListaDisciplinas(int nd, const char* n);
	~ListaDisciplinas();
	void setNome(char* n);
	void incluaDisciplina(Disciplina* pdi);
	void listaDiscp();
	void listaDiscp2();
};


