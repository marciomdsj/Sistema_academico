#include "Principal.h"

Principal::Principal() :
    DAINF(), UTFPR(),Princeton(), Cambridge(), Einstein(), Newton(), Simao()
{
    /*
    Einstein.inicializa(10, 10, 2000, "Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");
    Simao.inicializa(16, 10, 2002, "Simao");//Não sei as datas
    Dorini.inicializa(10, 12, 1975, "Dorini");//Não sei as datas

    UTFPR.setNome("UTFPR");
    Simao.associaPU(&UTFPR);

    //Inicializar disciplinas
    Calculo.setDepartamento(&DAMAT);
    Computacao.setDepartamento(&DAINF);
    Calculo2.setDepartamento(&DAMAT);
    Algoritmo.setDepartamento(&DAINF);
    

    //Inicializar departamentos
    DAMAT.setNomeDepart("Matematica");
    DAINF.setNomeDepart("Informatica");

    /* DAMAT.incluiDiscp(&Calculo);
    DAMAT.incluiDiscp(&Calculo2);
    DAINF.incluiDiscp(&Computacao);
    DAINF.incluiDiscp(&Algoritmo);
    

    Inicializar alunos
    Marcio.setRA(2505622);
    Calculo.incluiAluno(&Marcio);
    Calculo.incluiAluno(&Lukas);
    Computacao.incluiAluno(&Marcio);
    Computacao.incluiAluno(&Lukas);

    UTFPR.agregaUD(&DAINF);
    Simao.agregaDepart(&DAINF);

    Princeton.setNome("Princeton");
    Einstein.associaPU(&Princeton);

    Cambridge.setNome("Cambridge");
    Newton.associaPU(&Cambridge);

    std::cout << "Digite o dia, mes e ano de hoje: " << std::endl;
    std::cin >> diaATUAL >> mesATUAL >> anoATUAL;

    executar();
    */
}
Principal::~Principal()
{
}

void Principal::listDeptoUniv()
{
    DAINF.listaDiscp();
    
    std::cout << std::endl;

    DAMAT.listaDiscp();

    std::cout << std::endl;
}

void Principal::listAlunosDiscp()
{
    Calculo.listaAlunos();
    std::cout << endl;
    Calculo.listaAlunos2();
    std::cout << endl;

    Computacao.listaAlunos();
    std::cout << endl;
    Computacao.listaAlunos2();
    std::cout << endl;

}
void Principal::executar()
{
	Simao.calcula_imprime(diaATUAL, mesATUAL, anoATUAL);
	Newton.calcula_imprime(diaATUAL, mesATUAL, anoATUAL);
	Simao.onde_trabalha();
	Einstein.onde_trabalha();
	Newton.onde_trabalha();
	Simao.departamento_trabalha();
    listAlunosDiscp();
}

