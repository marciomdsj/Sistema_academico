#include "ElAluno.h"

ElAluno::ElAluno()
{
	pAl = NULL;
	pProx = NULL;
	pAnte = NULL;
}
ElAluno::~ElAluno()
{
}
void ElAluno::setAluno(Aluno* pa)
{

}

Aluno* ElAluno::getAluno()
{
	return pAl;
}

char* ElAluno::getNome()
{
	return pAl->getNome();
}

void ElAluno::getpAnte(ElAluno* pa)
{
	pAnte = pa;
}
void ElAluno::getpProx(ElAluno* pb)
{
	pAnte = pb;
}