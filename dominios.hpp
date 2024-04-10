#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

//classe Percentual

class Percentual {

    private:
        int valor;
        void validar(int);
    public:
        void setPercentual(int);
        int getPercentual() const;
        Percentual(void);
        Percentual(int);

};

inline int Percentual::getPercentual() const{
    return valor;
};

//classe Estado

class Estado {

    private:
        string tipoEstado;
        void validar(string);
    public:
        void setEstado(string);
        string getEstado() const;
        Estado(void);
        Estado(string);

};

inline string Estado::getEstado() const{
    return tipoEstado;
}

//classe Dinheiro

class Dinheiro {

    private:
        float valor;
        void validar(float);
    public:
        void setDinheiro(float);
        float getDinheiro() const;
        Dinheiro(void);
        Dinheiro(float);

};

inline float Dinheiro::getDinheiro() const{
    return valor;
};

//classe Setor

class Setor {

    private:
        string nomeSetor;
        void validar(string);
    public:
        void setSetor(string);
        string getSetor() const;
        Setor(void);
        Setor(string);

};

inline string Setor::getSetor() const{
    return nomeSetor;
}

//classe codPagamento

class codPagamento {

    private:
        string codigo;
        void validar(string);
    public:
        void setCodPagamento(string);
        string getCodPagamento () const;
        codPagamento(void);
        codPagamento(string);

};

inline string codPagamento::getCodPagamento() const{
    return codigo;
}

//classe Nome

class Nome {

    private:
        string nome;
        bool validar(string);
        bool checkNome(string);
    public:
        void setNome(string);
        string getNome() const;
        Nome(void);
        Nome(string);
};

inline string Nome::getNome() const{
    return nome;
}

//classe CodigoTitulo

class CodigoTitulo {

    private:
        string codigo;
        bool validar(string);
    public:
        void setCodigoTitulo(string);
        string getCodigoTitulo() const;
        CodigoTitulo(void);
        CodigoTitulo(string);
};

inline string CodigoTitulo::getCodigoTitulo() const{
    return codigo;
}

//classe Data

class Data{

    private:
        string data;
        bool validar(string);
    public:
        void setData(string);
        string getData() const;
        Data(void);
        Data(string);
};

inline string Data::getData() const{
    return data;
}

//classe CPF

class CPF{

    private:
        string CPF_value;
        bool validar(string);
    public:
        void setCPF(string);
        string getCPF() const;
        CPF(void);
        CPF(string);

};

inline string CPF::getCPF() const{
    return this->CPF_value;
}

//classe Utilities

class Utilities{

    public:
        static bool isUpperCase(char);

};

#endif
