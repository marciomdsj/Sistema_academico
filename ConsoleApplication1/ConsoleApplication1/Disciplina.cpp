#include "Disciplina.h"

Disciplina::Disciplina(int na, const char* n)
{
	na = 45;
	strcpy_s(nomeDiscp, "");
	strcpy_s(areaConhec, n);
	pProx = NULL;
	pAnte = NULL;
	id = NULL;
	pDeptoAssociado = NULL;
	pElAlunoAtual = NULL;
	pElAlunoPrim = NULL;
	cont_alunos = 0;
	numero_alunos = na;
}

Disciplina::Disciplina()
{
}

Disciplina::~Disciplina()
{
	pProx = NULL;
	pAnte = NULL;
	pDeptoAssociado = NULL;
	
}

void Disciplina::setId(int n)
{
	id = n;
}

int Disciplina::getId()
{
	return id;
}

void Disciplina::setNome(const char* n)
{
	strcpy_s(nomeDiscp, n);
}

char* Disciplina::getNome()
{
	return nomeDiscp;
}

void Disciplina::setDepartamento(Departamento* pDpto)
{
	pDeptoAssociado = pDpto;
	pDpto->incluiDiscp(this);
}

Departamento* Disciplina::getDepartamento()
{
	return pDeptoAssociado;
}
void Disciplina::obtemProxDiscp(Disciplina* p)
{
	pProx = p;
}

void Disciplina::obtemAnteDiscp(Disciplina* pA)
{
	pAnte = pA;
}

void Disciplina::incluiAluno(Aluno* pa)
{
	ObjLAlunos.incluiAluno(pa);
}
void Disciplina::listaAlunos()
{
	ObjLAlunos.listaAlunos();
}
void Disciplina::listaAlunos2()
{
	ObjLAlunos.listaAlunos2();
}