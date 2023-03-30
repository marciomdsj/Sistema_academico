#pragma once
#include"Departamento.h"
#include"ListaAlunos.h"
#include"Aluno.h"

class Disciplina
{
private:
	char nomeDiscp[150];
	int id;
	Departamento* pDeptoAssociado;
	char areaConhec[150];
	Disciplina* pProx;
	Disciplina* pAnte;
	int numero_alunos;
	int cont_alunos;
	/*ElAluno* pElAlunoPrim;
	ElAluno* pElAlunoAtual;
	*/
	ListaAlunos ObjLAlunos;
		 
public:
	Disciplina(int na, const char* nome);//nome da area de conhecimento
	Disciplina();
	~Disciplina();
	void setId(int n);
	int getId();
	void setNome(const char* n);//nome da disciplina
	char* getNome();
	void setDepartamento(Departamento* pDpto);
	Departamento* getDepartamento();
	void incluiAluno(Aluno* pa);
	void obtemProxDiscp(Disciplina* p);
	void obtemAnteDiscp(Disciplina* pA);
	void listaAlunos();
	void listaAlunos2();
};

