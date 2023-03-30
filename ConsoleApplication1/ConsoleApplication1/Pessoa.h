#pragma once
#include<iostream>
#include<string.h>
#include"Universidade.h"
#include"Departamento.h"

class Universidade;
class Departamento;
class Principal;
class Pessoa 
{
protected:
	int dia;
	int mes;
	int ano;
	int idade;
	char nomeP[30];
	Universidade* pUnivFiliado;
	Departamento* pDepartFiliado;
	Universidade* uDepartFiliado;

public:
	Pessoa(int diaNa, int mesNa, int anoNa, const char* nome);
	Pessoa();
	~Pessoa();
	void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);
	void calcula_imprime(int diaAT, int mesAT, int anoAT);
	int retorna_idade();
	void associaPU(Universidade* univ); //Associa pessoa à universidade
	void agregaDepart(Departamento* pDep); //Associa pessoa a departamento ;
	void agregaUD(Universidade* uDep);
	void onde_trabalha();
	void departamento_trabalha();
};