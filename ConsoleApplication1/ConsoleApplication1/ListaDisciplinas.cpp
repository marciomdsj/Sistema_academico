#include "ListaDisciplinas.h"
ListaDisciplinas::ListaDisciplinas(int nd, const char* n)
{
	numero_disc = nd;
	cont_disc = 0;
	pElDisciplinaPrim = NULL;
	pElDisciplinaAtual = NULL;
	strcpy(nome, n);
}
ListaDisciplinas::~ListaDisciplinas()
{
	ElDisciplina* paux1, * paux2;
	paux1 = pElDisciplinaPrim;
	paux2 = paux1;
	while (paux1 != NULL)
	{
		paux2 = paux1->pProx;
		delete (paux1);
		paux1 = paux2;
	}
	pElDisciplinaPrim = NULL;
	pElDisciplinaAtual = NULL;
}
void ListaDisciplinas::setNome(char* n)
{
	strcpy(nome, n);
}
void ListaDisciplinas::incluaDisciplina(Disciplina* pdi)
{
	if (
		((cont_disc < numero_disc) && (pdi != NULL)) ||
		((numero_disc == -1) && (pdi != NULL))
		)
	{
		// Aqui é criado um ponteiro para LAluno
		ElDisciplina* paux;
		// Aqui é criado um objeto LAluno, sendo seu
		// endereço armazenado em aux
		paux = new ElDisciplina();
		// Aqui recebe uma cópia do objeto interm.
		paux->setDisciplina(pdi);
		if (pElDisciplinaPrim == NULL)
		{
			pElDisciplinaPrim = paux;
			pElDisciplinaAtual = paux;
		}
		else
		{
			pElDisciplinaAtual->pProx = paux;
			paux->pAnte = pElDisciplinaAtual;
			pElDisciplinaAtual = paux;
		}
		cont_disc++;
	}
	else
	{
		cout << " Disciplina não incluída " << " Quantia de disc. já lotada em " << numero_disc << " disciplinas." << endl;
	}
}
void ListaDisciplinas::listaDiscp()
{
	ElDisciplina* pAux;
	pAux = pElDisciplinaPrim;
	while (pAux != NULL)
	{
		cout << " Disciplina " << pAux->getNome()
			<< " do deparatamento " << nome << "." << endl;
		pAux = pAux->pProx;
	}
}
void ListaDisciplinas::listaDiscp2()
{
	ElDisciplina* pAux;
	pAux = pElDisciplinaAtual;
	while (pAux != NULL)
	{
		cout << " Disciplina " << pAux->getNome()
			<< " do Departamento " << nome << "." << endl;
		pAux = pAux->pAnte;
	}
}