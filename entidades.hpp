#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.hpp"


using namespace std;

class Conta{
    private:
        class::CPF Cpf;
        class::Nome Nome;
        
    public:
        void setCpf(CPF);
        CPF getCpf() const;
        void setNome(class::Nome);
        class::Nome getNome() const;
};

class Titulo{
    private:
        class::CodigoTitulo Codigo;
        class::Nome Emissor;
        class::Setor Setor;
        class::Data Emissao;
        class::Data Vencimento;
        class::Dinheiro Valor;
    public:
        void setCodigoTitulo(CodigoTitulo);
        CodigoTitulo getCodigoTitulo() const;

        void setEmissor(Nome);
        Nome getEmissor() const;

        void setSetor(class::Setor);
        class::Setor getSetor() const;

        void setEmissao(Data);
        Data getEmissao() const;

        void setVencimento(Data);
        Data getVencimento() const;

        void setValor(Dinheiro);
        Dinheiro getValor() const;
};

class Pagamento{
    private:
        class::CodigoPagamento Codigo;
        class::Data Date;
        class::Percentual Percent;
        class::Estado State;
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