#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.hpp"


using namespace std;

class Conta{
    private:
        CPF Cpf;
        Nome Name;
        
    public:
        void setCpf(CPF);
        CPF getCpf() const;
        void setNome(Nome);
        Nome getNome() const;
};

class Titulo{
    private:
        CodigoTitulo Codigo;
        Nome Emissor;
        Setor Sector;
        Data Emissao;
        Data Vencimento;
        Dinheiro Valor;
    public:
        void setCodigoTitulo(CodigoTitulo);
        CodigoTitulo getCodigoTitulo() const;

        void setEmissor(Nome);
        Nome getEmissor() const;

        void setSetor(Setor);
        Setor getSetor() const;

        void setEmissao(Data);
        Data getEmissao() const;

        void setVencimento(Data);
        Data getVencimento() const;

        void setValor(Dinheiro);
        Dinheiro getValor() const;
};

class Pagamento{
    private:
        CodigoPagamento Codigo;
        Data Date;
        Percentual Percent;
        Estado State;
    public:
        void setCodigoPagamento(CodigoPagamento);
        CodigoPagamento getCodigoPagamento() const;

        void setData(Data);
        Data getData() const;

        void setPercentual(Percentual);
        Percentual getPercentual() const;

        void setEstado(Estado);
        Estado getEstado() const;
};




#endif