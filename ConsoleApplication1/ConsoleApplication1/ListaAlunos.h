#pragma once
#include"Aluno.h"
#include"ElAluno.h"
class ListaAlunos
{
private:
	int cont_alunos;
	int numero_alunos;
	char nome[150];
	ElAluno* pElAlunoPrim;
	ElAluno* pElAlunoAtual;
public:
	ListaAlunos(int na, const char* n);
	~ListaAlunos();
	void incluiAluno(Aluno* pa);
	void obtemElAlunoPrim(ElAluno* ap);
	void obtemElAlunoAtual(ElAluno* ap);
	void listaAlunos();
	void listaAlunos2();
};

