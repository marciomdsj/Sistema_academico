#include"Pessoa.h"

class Departamento;
class Aluno : public Pessoa
{
private:
	int RA;
	char nomeAluno[150];


public:
	Aluno* pProx; 
	Aluno* pAnte;
	Aluno(int dia, int mes, int ano, const char* nome);
	Aluno();
	~Aluno();
	void setRA(int ra);
	int getRA();
	char* getNome();
};