#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

//classe Percentual

class Percentual {

    private:
        int Valor;
        void validar(int);
    public:
        void setPercentual(int);
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

class codPagamento {

    private:
        string Codigo;
        void validar(string);
    public:
        void setCodPagamento(string);
        string getCodPagamento () const;
        codPagamento(void);
        codPagamento(string);

};

inline string codPagamento::getCodPagamento() const{
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

//classe Utilities

class Utilities{

    public:
        static bool isUpperCase(char);

};

#endif
