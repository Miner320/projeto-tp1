#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

//! Classe Percentual
/*!
    Armazena um valor no intervalo [0,100]
*/

class Percentual {

    private:

        //! Valor inteiro
        /*! Valor no intervalo [0,100]*/
        int Valor;
        //! Função de validação
        /*! Função que verifica se o número a ser armazenado pertence ao intervalo [0,100]*/
        void validar(int);
    public:
        //! Função setPercentual
        /*! Verifica se um número atende às condições da classe, caso atenda, atribui o valor à instância da classe*/
        void setPercentual(int);
        //! função getPercentual
        int getPercentual() const;
        Percentual(void);
        Percentual(int);

};

inline int Percentual::getPercentual() const{
    return this->Valor;
};

//classe Estado

class Estado {

    private:
        string TipoEstado;
        void validar(string);
    public:
        void setEstado(string);
        string getEstado() const;
        Estado(void);
        Estado(string);

};

inline string Estado::getEstado() const{
    return this->TipoEstado;
}

//classe Dinheiro

class Dinheiro {

    private:
        float Valor;
        void validar(float);
    public:
        void setDinheiro(float);
        float getDinheiro() const;
        Dinheiro(void);
        Dinheiro(float);

};

inline float Dinheiro::getDinheiro() const{
    return this->Valor;
};

//classe Setor

class Setor {

    private:
        string NomeSetor;
        void validar(string);
    public:
        void setSetor(string);
        string getSetor() const;
        Setor(void);
        Setor(string);

};

inline string Setor::getSetor() const{
    return this->NomeSetor;
}

//classe codPagamento

class CodigoPagamento {

    private:
        string Codigo;
        void validar(string);
    public:
        void setCodPagamento(string);
        string getCodPagamento () const;
        CodigoPagamento(void);
        CodigoPagamento(string);

};

inline string CodigoPagamento::getCodPagamento() const{
    return this->Codigo;
}

//classe Nome

class Nome {

    private:
        string NomeValor;
        void validar(string);
        bool checkNome(string);
    public:
        void setNome(string);
        string getNome() const;
        Nome(void);
        Nome(string);
};

inline string Nome::getNome() const{
    return this->NomeValor;
}

//classe CodigoTitulo

class CodigoTitulo {

    private:
        string Codigo;
        void validar(string);
    public:
        void setCodigoTitulo(string);
        string getCodigoTitulo() const;
        CodigoTitulo(void);
        CodigoTitulo(string);
};

inline string CodigoTitulo::getCodigoTitulo() const{
    return this->Codigo;
}

//classe Data

class Data{

    private:
        string DataValor;
        void validar(string);
    public:
        void setData(string);
        string getData() const;
        Data(void);
        Data(string);
};

inline string Data::getData() const{
    return this->DataValor;
}

//classe CPF

class CPF{

    private:
        string CPFValor;
        void validar(string);
    public:
        void setCPF(string);
        string getCPF() const;
        CPF(void);
        CPF(string);

};

inline string CPF::getCPF() const{
    return this->CPFValor;
}

//classe Senha

class Senha{
    private:
        string Senha;
        void validar(string);
    public:
    void setSenha(string);
    string getSenha() const;
};

inline string Senha::getSenha() const{
    return this->Senha;
}

//classe Utilities

class Utilities{

    public:
        static bool isUpperCase(char);
        static int stringCount(string,char);

};

#endif
