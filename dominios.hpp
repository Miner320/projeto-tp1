#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

//classe Percentual

class Percentual {

    private:
        int valor = NULL;
        bool validar(int);
    public:
        void setPercentual(int);
        int getPercentual() const;

};

inline int Percentual::getPercentual() const{
    return valor;
};

//classe Estado

class Estado {

    private:
        string tipoEstado = "";
        bool validar(string);
    public:
        void setEstado(string);
        string getEstado() const;

};

inline string Estado::getEstado() const{
    return tipoEstado;
}

//classe Dinheiro

class Dinheiro {

    private:
        float valor = NULL;
        bool validar(float);
    public:
        void setDinheiro(float);
        float getDinheiro() const;

};

inline float Dinheiro::getDinheiro() const{
    return valor;
};

//classe Setor

class Setor {

    private:
        string nomeSetor = "";
        bool validar(string);
    public:
        void setSetor(string);
        string getSetor() const;

};

inline string Setor::getSetor() const{
    return nomeSetor;
}

//classe codPagamento

class codPagamento {

    private:
        string codigo = "";
        bool validar(string);
    public:
        void setCodPagamento(string);
        string getCodPagamento () const;

};

inline string codPagamento::getCodPagamento() const{
    return codigo;
}

//classe Nome

class Nome {

    private:
        string nome = "";
        bool validar(string);
        bool checkNome(string);
    public:
        void setNome(string);
        string getNome() const;
};

inline string Nome::getNome() const{
    return nome;
}

//classe CodigoTitulo

class CodigoTitulo {

    private:
        string codigo = "";
        bool validar(string);
    public:
        void setCodigoTitulo(string);
        string getCodigoTitulo() const;
};

inline string CodigoTitulo::getCodigoTitulo() const{
    return codigo;
}

//classe Data

class Data{

    private:
        string data = "";
        bool validar(string);
    public:
        void setData(string);
        string getData() const;
};

inline string Data::getData() const{
    return data;
}

//classe CPF

class CPF{

    private:
        string CPF = "";
        bool validar(string);
    public:
        void setCPF(string);
        string getCPF() const;

};

inline string CPF::getCPF() const{
    return CPF;
}

//classe Utilities

class Utilities{

    public:
        static bool isUpperCase(char);

};

#endif
