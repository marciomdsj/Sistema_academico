#include"Universidade.h"

Universidade::Universidade()
{
	strcpy_s(nome, "");
	Departamento* pDep = NULL;
	list<Departamento*>::iterator iterador;
	for (iterador = depart.begin();iterador != depart.end(); iterador++)
		*iterador = nullptr;
}
Universidade::~Universidade()
{
}

void Universidade::setNome(const char* n)
{
	strcpy_s(nome, n);
}

const char* Universidade::getNome()
{
	return nome;
}

void Universidade::agregaUD(Departamento* uDep)
{
	depart.push_back(uDep);
}


void Universidade::setDpt(Departamento* pDep)
{
	if(pDep != NULL)
		depart.push_back(pDep);
}

void Universidade::getDpt()
{
	Departamento* pDep = NULL;
	list<Departamento*>::iterator iterador;
	for (iterador = depart.begin(); iterador!=depart.end();iterador++)
	{
		pDep = *iterador;
		if (pDep != NULL)
			std::cout << pDep->getNomeDepart() << std::endl;
	}
}