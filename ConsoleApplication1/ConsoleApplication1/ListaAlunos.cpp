#include "ListaAlunos.h"
ListaAlunos::ListaAlunos(int na, const char* n) 
	{
		numero_alunos = na;
		cont_alunos = 0;
		pElAlunoPrim = NULL;
		pElAlunoAtual = NULL;
		strcpy(nome, n);
	}
ListaAlunos::~ListaAlunos() 
	{
		ElAluno* pAux1;
		ElAluno* pAux2;
		pAux1 = pElAlunoPrim;
		while (pAux1 != NULL) 
		{
			pAux2->getpProx(pAux1);
			delete(pAux1);
			pAux1 = pAux2;
		}
	pElAlunoAtual = NULL;
	pElAlunoPrim = NULL;
	}

void ListaAlunos::obtemElAlunoPrim(ElAluno* ap)
{
	pElAlunoPrim = ap;
}
void ListaAlunos::obtemElAlunoAtual(ElAluno* at)
{
	pElAlunoAtual = at;
}
void ListaAlunos::incluiAluno(Aluno* pa)
{
	ElAluno* pAux = NULL;
	pAux = new ElAluno();
	pAux->setAluno(pa);
	if (numero_alunos < cont_alunos && pa != NULL)
	{
		if (pElAlunoPrim == NULL)
		{
			pElAlunoPrim = pAux;
			pElAlunoAtual = pAux;
		}
		else
		{
			pElAlunoAtual->getpProx(pAux);
			pAux->getpAnte(pElAlunoAtual);
			pElAlunoAtual = pAux;
		}
		cont_alunos++;
	}
	else
	{
		std::cout << "Nao foi possivel adicionar o aluno. Turma ja lotada em " << numero_alunos << " alunos." << std::endl;
	}

}

void ListaAlunos::listaAlunos()
{
	ElAluno* pAux;
	pAux = pElAlunoPrim;
	while (pAux != NULL)
	{
		std::cout << "O aluno " << pAux->getNome() << " esta matriculado em: " << nome << std::endl;
		pAux->getpProx(pAux);
	}
}
void ListaAlunos::listaAlunos2()
{
	ElAluno* pAux;
	pAux = pElAlunoPrim;
	while (pAux != NULL)
	{
		std::cout << "O aluno " << pAux->getNome() << " esta matriculado em: " << nome << std::endl;
		pAux->getpAnte(pAux);
	}
}