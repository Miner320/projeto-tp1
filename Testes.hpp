
#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;

//Teste da classe Percentual

class TUPercentual {

private: 
    const static int ValorValido = 20;
    const static int ValorInvalido = -10;
    Percentual *percentual;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

//Teste da classe Estado

class TUEstado {

private: 
    inline const static string ValorValido = "Previsto";
    inline const static string ValorInvalido = "Random";
    Estado *estado;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

//Teste da classe Dinheiro

class TUDinheiro {

private: 
    const static int ValorValido = 5000;
    const static int ValorInvalido = -10;
    Dinheiro *dinheiro;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

//Teste da classe Setor

class TUSetor {

private: 
    inline const static string ValorValido = "Energia";
    inline const static string ValorInvalido = "Random";
    Setor *setor;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

//Teste da classe CodigoPagamento

class TUCodigoPagamento {

private: 
    inline const static string ValorValido = "12345678";
    inline const static string ValorInvalido = "02345678";
    CodigoPagamento *codigo;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

//Teste da classe Nome

class TUNome {

private: 
    inline const static string ValorValido = "John Travolta";
    inline const static string ValorInvalido = "An00";
    Nome *nome;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

//Teste da classe CodigoTitulo

class TUCodigoTitulo {

private: 
    inline const static string ValorValido = "CDB12345678";
    inline const static string ValorInvalido = "CDB123456";
    CodigoTitulo *codigo;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

//Teste da classe Data

class TUData {

private: 
    inline const static string ValorValido = "15-05-2006";
    inline const static string ValorInvalido = "31-04-2003";
    Data *data;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

//Teste da classe CPF

class TUCPF {

private: 
    inline const static string ValorValido = "111.444.777-35";
    inline const static string ValorInvalido = "000.000.123-99";
    CPF *cpf;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

//Teste da classe Senha

class TUSenha {

private: 
    inline const static string ValorValido = "178653";
    inline const static string ValorInvalido = "115902";
    Senha *senha;
    int Validade;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int Sucesso = 1;
    const static int Falha = 0;
    int run();
};

#endif