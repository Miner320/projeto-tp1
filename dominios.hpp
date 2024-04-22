#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

//! Classe Percentual
/*!
    Armazena um valor inteiro no intervalo [0,100]
*/

class Percentual {

    private:
        int Valor;
        void validar(int);
    public:
        //! Função setPercentual
        /*! Verifica se um número atende às condições de validação de Percentual, caso atenda, armazena o valor na instância de Percentual*/
        /*! @param ValorTeste valor numérico do tipo int*/
        void setPercentual(int);
        //! função getPercentual
        /*! Retorna o valor armazenado pela classe Percentual*/
        int getPercentual() const;
        //!Construtor default da classe Percentual
        Percentual(void);
        //!Construtor que designa um valor à instância de Percentual
        Percentual(int);
};

inline int Percentual::getPercentual() const{
    return this->Valor;
};

//! Classe Estado

/*!
    Armazena os seguintes estados: Previsto, Liquidado, Inadimplente
*/

class Estado {

    private:
        string TipoEstado;
        void validar(string);
    public:
        //! Função setEstado
        /*! Verifica se uma string atende às condições de validação de Estado, caso atenda, armazena a string na instância de Estado*/
        void setEstado(string);
        //! Função getEstado
        /*! Retorna o valor armazenado pela classe Estado*/
        string getEstado() const;
        //! Construtor default da classe Estado
        Estado(void);
        //! Construtor que designa uma string à instância de Estado
        Estado(string);

};

inline string Estado::getEstado() const{
    return this->TipoEstado;
}

//! Classe Dinheiro

/*!
    Armazena um valor real no intervalo [0,1000000]
*/

class Dinheiro {

    private:
        float Valor;
        void validar(float);
    public:
        //! Função setDinheiro
        /*! Verifica se um número atende às condições de validação de Dinheiro, caso atenda, armazena o valor na instância de Dinheiro*/
        void setDinheiro(float);
        //! Função getDinheiro
        /*! Retorna o valor armazenado no atributo Valor*/
        float getDinheiro() const;
        //! Construtor default da classe Dinheiro
        Dinheiro(void);
        //! Construtor que designa um valor à instância de Dinheiro
        Dinheiro(float);

};

inline float Dinheiro::getDinheiro() const{
    return this->Valor;
};

//! Classe Setor

/*!
    Armazena os seguintes Setores:    
*/

class Setor {

    private:
        string NomeSetor;
        void validar(string);
    public:
        //! Função setSetor
        /*! Verifica se uma string atende às condições de validação de Setor, caso atenda, armazena a string na instância de Setor*/
        void setSetor(string);
        //! Função getSetor
        /*! Retorna a string armazenada pelo atributo NomeSetor*/
        string getSetor() const;
        //! Construtor default da classe Setor
        Setor(void);
        //! Construtor que designa uma string à instância de Setor
        Setor(string);

};

inline string Setor::getSetor() const{
    return this->NomeSetor;
}

//! Classe CodigoPagamento

/*!
    Armazena um código de pagamento
*/

class CodigoPagamento {

    private:
        string Codigo;
        void validar(string);
    public:
        //! Função setCodPagamento
        /*! Verifica se uma string atende às condições de validação de CodigoPagamento, caso atenda, armazena a string na instância de CodigoPagamento*/
        void setCodPagamento(string);
        //! Função getCodPagamento
        /*! Retorna a string armazenada pela instância de CodigoPagamento*/
        string getCodPagamento () const;
        //! Construtor default da classe CodigoPagamento
        CodigoPagamento(void);
        //! Construtor que designa uma string à instância da classe CodigoPagamento
        CodigoPagamento(string);

};

inline string CodigoPagamento::getCodPagamento() const{
    return this->Codigo;
}

//! Classe Nome

/*!
    Armazena um nome com as seguintes condições
*/

class Nome {

    private:
        string NomeValor;
        void validar(string);
        bool checkNome(string);
    public:
        //! Função setNome
        /*! Verifica se uma string atende às condições de validação de Nome, caso atenda, armazena a string na instância de Nome*/
        void setNome(string);
        //! Função getNome
        /*! Retorna a string armazenada pela instância de Nome*/
        string getNome() const;
        //! Construtor default da classe Nome
        Nome(void);
        //! Construtor que designa uma string à instâncida da classe Nome
        Nome(string);
};

inline string Nome::getNome() const{
    return this->NomeValor;
}

//! Classe CodigoTitulo

/*!
    Armazena um código de título que segue as condições
*/

class CodigoTitulo {

    private:
        string Codigo;
        void validar(string);
    public:
        //! Função setCodigoTitulo
        /*! Verifica se uma string atende às condições de validação de CodigoTitulo, caso atenda, armazena a string na instância de CodigoTitulo*/
        void setCodigoTitulo(string);
        //! Função getCodigoTitulo
        /*! Retorna a string armazenada pela instância de CodigoTitulo*/
        string getCodigoTitulo() const;
        //! Construtor default da classe CodigoTitulo
        CodigoTitulo(void);
        //! Construtor que designa uma string à instância de CodigoTitulo
        CodigoTitulo(string);
};

inline string CodigoTitulo::getCodigoTitulo() const{
    return this->Codigo;
}

//! Classe Data

/*!
    Armazena uma data com as seguintes condições
*/

class Data{

    private:
        string DataValor;
        void validar(string);
    public:
        //! Função setData
        /*! Verifica se uma string atende às condições de validação de Data, caso atenda, armazena a string na instância de Data*/
        void setData(string);
        //! Função getData
        /*! Retorna a string armazenada pela instância de Data*/
        string getData() const;
        //! Construtor default da classe Data
        Data(void);
        //! Construtor que designa uma string à instância de Data
        Data(string);
};

inline string Data::getData() const{
    return this->DataValor;
}

//! Classe CPF

/*!
    Classe que armazena um CPF no seguinte formato
*/

class CPF{

    private:
        string CPFValor;
        void validar(string);
    public:
        //! Função setCPF
        /*! Verifica se uma string atende às condições de validação de CPF, caso atenda, armazena a string na instância de CPF*/
        void setCPF(string);
        //! Função getCPF
        /*! Retorna a string armazenada pela instância de CPF*/
        string getCPF() const;
        //! Construtor default da classe CPF
        CPF(void);
        //! Construtor que designa uma string à instância de CPF
        CPF(string);

};

inline string CPF::getCPF() const{
    return this->CPFValor;
}

//! Classe Senha

/*!
    Armazena uma senha que segue as seguintes condições
*/

class Senha{
    private:
        string SenhaArmazenada;
        void validar(string);
    public:
    //! Função getSenha
    /*! Verifica se uma string atende às condições de validação de Senha, caso atenda, armazena a string na instância de Senha*/
    void setSenha(string);
    //! Função getSenha
    /*! Retorna a string armazenada pela instância de Senha*/
    string getSenha() const;
    //! Construtor default da classe Senha
    Senha(void);
    //! Construtor que designa uma string à instância de Senha
    Senha(string);
};

inline string Senha::getSenha() const{
    return this->SenhaArmazenada;
}

//! Classe Utilities

/*!
    Classe com funções auxiliares para strings
*/

class Utilities{

    public:
        //! Função isUpperCase
        /*! Verifica se um caractere é uma letra maiúscula*/
        static bool isUpperCase(char);
        //! Função stringCount
        /*! Conta o número de instâncias de um caractere em uma string*/
        static int stringCount(string,char);

};

#endif
