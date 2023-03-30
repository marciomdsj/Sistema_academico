#pragma once
#include"Pessoa.h"
#include<list>
using namespace std;

class Departamento;
//Fazer toda universidade imprimir seus departamentos
class Universidade
{
private:
	char nome[30];
	list<Departamento*> depart;
							 
public:
	Universidade();
	~Universidade();
	void setNome(const char* n); //Definir nome da universidade --> principal.cpp
	const char* getNome(); //Pegar o nome
	void agregaUD(Departamento* uDep);
	void setDpt(Departamento* pDep);
	void getDpt();
	//void imprimeDepart();
};

