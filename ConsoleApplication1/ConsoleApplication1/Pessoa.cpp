#include "Pessoa.h"

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome)
{
	inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa()
{
	inicializa(0, 0, 0, "");
}
Pessoa::~Pessoa()
{
}


void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome)
{
	idade = 0;
	mes = mesNa;
	dia = diaNa;
	ano = anoNa;
	strcpy_s(nomeP, nome);
}

void Pessoa::calcula_imprime(int diaAT, int mesAT, int anoAT)
{
	idade = anoAT - ano;
	if (mes > mesAT)
		idade = idade - 1;
	else
	{
		if (mes == mesAT)
			if (dia > diaAT)
				idade = idade - 1;
	}
	std::cout << "A idade do " << nomeP << " eh / seria: " << idade << std::endl;
}

int Pessoa::retorna_idade()
{
	return idade;
}
void Pessoa::associaPU(Universidade* univ)
{
	pUnivFiliado = univ;
}
void Pessoa::agregaDepart(Departamento* pDep)
{
	pDepartFiliado = pDep;
}
void Pessoa::agregaUD(Universidade* uDep)
{
	uDepartFiliado = uDep;
}

void Pessoa::onde_trabalha()
{
	std::cout << nomeP << "trabalha para a: " << pUnivFiliado->getNome() << std::endl;
}
void Pessoa::departamento_trabalha()
{
	if (pDepartFiliado)
		std::cout << nomeP << " trabalha para a: " << pDepartFiliado->getNomeDepart() << std::endl;
	else
		std::cout << nomeP << " nao possui nenhum departamento filiado" << std::endl;
	
}