#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.hpp"


using namespace std;

//! Classe Conta

class Conta{
    private:
        //! Objeto da classe CPF
        class::CPF Cpf;
        //!Objeto da classe Nome
        class::Nome Nome;
        
    public:
        //! Define membro CPF presente na instância
        /*! @param CPF objeto da classe CPF*/
        void setCpf(CPF);
        //! Retorna o objeto CPF presente na instância
        /*! @return objeto da classe CPF*/
        CPF getCpf() const;
        //! Define o membro Nome presente na instância
        /*! @param Nome objeto da classe Nome*/
        void setNome(class::Nome);
        //! Retorna o objeto Nome presente na instância
        /*! @return objeto da classe Nome*/
        class::Nome getNome() const;
};

//! Classe Titulo

class Titulo{
    private:
        //! Objeto da classe CodigoTitulo
        class::CodigoTitulo Codigo;
        //! Objeto da classe Nome
        class::Nome Emissor;
        //! Objeto da classe Setor
        class::Setor Setor;
        //! Objeto da classe Data
        class::Data Emissao;
        //! Objeto da classe Data
        class::Data Vencimento;
        //! Objeto da classe Dinheiro
        class::Dinheiro Valor;
    public:
        //! Define o atributo Codigo presente na instância da classe
        /*! @param Codigo objeto da classe CodigoTitulo*/
        void setCodigoTitulo(CodigoTitulo);
        //! Retorna o atributo Codigo presente na instância da classe
        /*! @return objeto da classe CodigoTitulo*/
        CodigoTitulo getCodigoTitulo() const;
        //! Define o atributo Emissor presente na instância da classe
        /*! @param Emissor objeto da classe Nome*/
        void setEmissor(Nome);
        /*! Retorna o atributo emissor presente na instância*/
        /*! @return objeto da classe Nome*/
        Nome getEmissor() const;
        //! Define o atributo Setor presente na instância
        /*! @param Setor objeto da classe Setor*/
        void setSetor(class::Setor);
        //! Retorna o atributo Setor presente na instância
        /*! @return objeto da classe Setor*/
        class::Setor getSetor() const;
        //! Define o atributo Emissao presente na instância
        /*! @param Data objeto da classe Data*/
        void setEmissao(Data);
        //! Retorna o atributo Emissao presente na instância
        /*! @return objeto da classe Data*/
        Data getEmissao() const;
        //! Define o atributo Vencimento presente na instância
        /*! @param Vencimento objeto da classe Data*/
        void setVencimento(Data);
        //! Retorna o atributo Vencimento presente na instância
        /*! @return objeto da classe Data*/
        Data getVencimento() const;
        //! Define o atributo Valor presente na instância
        /*! @param Valor objeto da classe Dinheiro*/
        void setValor(Dinheiro);
        //! Retorna o atributo Valor presente na instância
        /*! @return objeto da classe Dinheiro*/
        Dinheiro getValor() const;
};

//! Classe Pagamento

class Pagamento{
    private:
        //! Objeto da classe CodigoPagamento
        class::CodigoPagamento Codigo;
        //! Objeto da classe Data
        class::Data Data;
        //! Objeto da classe Percentual
        class::Percentual Percentual;
        //! Objeto da classe Estado
        class::Estado Estado;
    public:
        //! Define o atributo Codigo presente na instância
        /*! @param Codigo objeto da classe CodigoPagamento*/
        void setCodigoPagamento(CodigoPagamento);
        //! Retorna o atributo Codigo presente na instância
        /*! @return objeto da classe CodigoPagamento*/
        CodigoPagamento getCodigoPagamento() const;
        //! Define o atributo Data presente na instância
        /*! @param Data objeto da classe Data*/
        void setData(class::Data);
        //! Retorna o atributo Data presente na instância
        /*! @return objeto da classe Data*/
        class::Data getData() const;
        //! Define o atributo Percentual presente na instância
        /*! @param Percentual objeto da classe Percentual*/
        void setPercentual(class::Percentual);
        //! Retorna o atributo Percentual Presente na instância
        /*! @return objeto da classe Percentual*/
        class::Percentual getPercentual() const;
        //! Define o atributo Estado presente na instância
        /*! @param Estado objeto da classe Estado*/
        void setEstado(class::Estado);
        //! Retorna o atributo Estado presente na instância
        /*! @return objeto da classe Estado*/
        class::Estado getEstado() const;
};




#endif