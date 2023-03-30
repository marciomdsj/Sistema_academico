#pragma once
#include"Aluno.h"


class ElAluno
{
private:
	Aluno* pAl;
	ElAluno* pProx;
	ElAluno* pAnte;
public:
	ElAluno();
	~ElAluno();
	void setAluno(Aluno* pa);
	Aluno* getAluno();
	char* getNome();
	void getpProx(ElAluno* pa);
	void getpAnte(ElAluno* pb);

};

