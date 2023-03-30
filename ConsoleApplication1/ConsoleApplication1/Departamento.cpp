#include"Departamento.h"
#include"Universidade.h"
#include"Disciplina.h"

Departamento::Departamento()
{
	pDiscpAtual = NULL;
	pDiscpPrim = NULL;
	strcpy_s(nomeDepartamento, "");
	pUniv = NULL;
	pObjLDisciplinas = new ListaDisciplinas(-1, "");
}

Departamento::~Departamento()
{
	if (pObjLDisciplinas)
		delete pObjLDisciplinas;
	pDiscpAtual = NULL;
	pDiscpPrim = NULL;
}

void Departamento::setNomeDepart(char const* n)
{
	strcpy_s(nomeDepartamento, n);
	pObjLDisciplinas->setNomeDepart(n);
}

const char* Departamento::getNomeDepart()
{
	return nomeDepartamento;
}

void Departamento::setUniversidade(Universidade* univ)
{
	pUniv = univ;
}

Universidade* Departamento::getUniversidade()
{
	return pUniv;
}
void Departamento::incluiDiscp(Disciplina* dp)
{
	/*if (pDiscpPrim == NULL)
	{
		pDiscpPrim = dp;
		pDiscpAtual = dp;
	}
	else
	{
		pDiscpAtual->obtemProxDiscp(dp);
		dp->obtemAnteDiscp(pDiscpAtual);
		pDiscpAtual = dp;
	}
	*/
	pObjLDisciplinas->incluiDiscp(dp);
}

void Departamento::listaDiscp()
{
	/*Disciplina* pAux;
	pAux = pDiscpAtual;//Atual ou prim?

	while (pAux != NULL)
	{
		std::cout << "A disciplina " << pAux->getNome() << " pertence ao departamento: " << nomeDepartamento << std::endl;
		pAux->obtemProxDiscp(pAux);
	}
	*/
	pObjLDisciplinas->listaDiscp();
}

void Departamento::listaDiscp2()
{
	/*Disciplina* pAux;
	pAux = pDiscpAtual;
	while (pAux != NULL)
	{
		std::cout << "A disciplina " << pAux->getNome() << " pertence ao departamento: " << nomeDepartamento << std::endl;
		pAux->obtemAnteDiscp(pAux);
	}
	*/
	pObjLDisciplinas->listaDiscp2();
}	