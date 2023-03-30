#include "Aluno.h"

Aluno::Aluno(int dia, int mes, int ano, const char* nome):Pessoa(dia, mes, ano, nome)
{
	strcpy_s(nomeAluno,nome);
}

Aluno::Aluno() :Pessoa()
{
	RA = NULL;
}

Aluno::~Aluno()
{
}

void Aluno::setRA(int ra)
{
	RA = ra;
}

int Aluno::getRA()
{
	return RA;
}

char* Aluno::getNome()
{
	return nomeAluno;
}