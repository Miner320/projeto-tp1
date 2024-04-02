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
        string tipoEstado = NULL;
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
        string nomeSetor = NULL;
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
        string codigo = NULL;
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
        string nome = NULL;
        bool validar(string);
    public:
        void setNome(string);
        string getNome() const;
};

inline string Nome::getNome() const{
    return nome;
}

#endif
