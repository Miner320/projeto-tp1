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
        /*! \cond PRIVATE*/
        void validar(int);
        /*! \endcond*/
    public:
        //! Função setPercentual
        /*! Verifica se um número atende às condições de validação de Percentual, caso atenda, armazena o valor na instância de Percentual*/
        /*! @param ValorTeste valor numérico do tipo int*/
        void setPercentual(int);
        //! função getPercentual
        /*! Retorna o valor armazenado pela classe Percentual*/
        /*! @return Valor armazenado na instância da classe Percentual */
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
    Armazena os seguintes estados: <b>Previsto, Liquidado, Inadimplente</b>
*/

class Estado {

    private:
        string TipoEstado;
        /*! \cond PRIVATE*/
        void validar(string);
        /*! \endcond*/
    public:
        //! Função setEstado
        /*! Verifica se uma string atende às condições de validação de Estado, caso atenda, armazena a string na instância de Estado*/
        /*! @param StringTeste string que passará por verificação de validade*/
        void setEstado(string);
        //! Função getEstado
        /*! Retorna o valor armazenado pela classe Estado*/
        /*! @return String armazenada na instância da classe Estado*/
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
        /*! \cond PRIVATE*/
        void validar(float);
        /*! \endcond*/
    public:
        //! Função setDinheiro
        /*! Verifica se um número atende às condições de validação de Dinheiro, caso atenda, armazena o valor na instância de Dinheiro*/
        /*! @param ValorTeste Valor real que passará por verificação de validade*/
        void setDinheiro(float);
        //! Função getDinheiro
        /*! Retorna o valor armazenado no atributo Valor*/
        /*! @return Valor armazenado na instância da classe Dinheiro*/
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
    Armazena os seguintes Setores: <b>Agricultura, Construção Civil, Energia, Finanças, Imobiliário, Papel e Celulose, Pecuária, Química e Petroquímica, Mineração, Metalurgia e Siderugia</b>
*/

class Setor {

    private:
        string NomeSetor;
        /*! \cond PRIVATE*/
        void validar(string);
        /*! \endcond*/
    public:
        //! Função setSetor
        /*! Verifica se uma string atende às condições de validação de Setor, caso atenda, armazena a string na instância de Setor*/
        /*! @param SetorTeste string que passará por verificação de validade*/
        void setSetor(string);
        //! Função getSetor
        /*! Retorna a string armazenada pelo atributo NomeSetor*/
        /*! @return String armazenada na instância da classe Setor*/
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
    Armazena um código de pagamento no seguinte formato:<br>
    <b>XXXXXXXX</b><br>
    -X é dígito<br>
    -Primeiro dígito é diferente de zero
*/

class CodigoPagamento {

    private:
        string Codigo;
        /*! \cond PRIVATE*/
        void validar(string);
        /*! \endcond*/
    public:
        //! Função setCodPagamento
        /*! Verifica se uma string atende às condições de validação de CodigoPagamento, caso atenda, armazena a string na instância de CodigoPagamento*/
        /*! @param CodigoTeste string que passará por verificação de validade*/
        void setCodPagamento(string);
        //! Função getCodPagamento
        /*! Retorna a string armazenada pela instância de CodigoPagamento*/
        /*! @return String armazenada na instância da classe CodigoPagamento*/
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
    Armazena um nome com as seguintes condições:<br>
    -Composto por 1 ou 2 termos<br>
    -Cada termo tem 3 a 10 caracteres<br>
    -Primeiro caractere de cada termo é letra maiúscula<br>
    -Cada caractere é letra<br>
    -Termos são separados por espaço em branco
*/

class Nome {

    private:
        string NomeValor;
        /*! \cond PRIVATE*/
        void validar(string);
        bool checkNome(string);
        /*! \endcond*/
    public:
        //! Função setNome
        /*! Verifica se uma string atende às condições de validação de Nome, caso atenda, armazena a string na instância de Nome*/
        /*! @param NomeTeste string que passará por verificação de validade*/
        void setNome(string);
        //! Função getNome
        /*! Retorna a string armazenada pela instância de Nome*/
        /*! @return String armazenada na instância da classe Nome*/
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
    Armazena um código de título que segue as condições:<br>
    <b>CDBXXXXXXXX<br>
    CRAXXXXXXXX<br>
    CRIXXXXXXXX<br>
    LCAXXXXXXXX<br>
    LCIXXXXXXXX<br>
    DEBXXXXXXXX</b><br>
    -X é letra maiúscula ou dígito

*/

class CodigoTitulo {

    private:
        string Codigo;
        /*! \cond PRIVATE*/
        void validar(string);
        /*! \endcond*/
    public:
        //! Função setCodigoTitulo
        /*! Verifica se uma string atende às condições de validação de CodigoTitulo, caso atenda, armazena a string na instância de CodigoTitulo*/
        /*! @param CodigoTeste string que passará por verificação de validade*/
        void setCodigoTitulo(string);
        //! Função getCodigoTitulo
        /*! Retorna a string armazenada pela instância de CodigoTitulo*/
        /*! @return String armazenada na instância da classe Nome*/
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
    Armazena uma data com as seguintes condições:<br>
    <b>DD-MM-AAAA</b><br>
    -DD vai de 00 a 31<br>
    -MM vai de 01 a 12<br>
    -AAAA vai de 2000 a 2100
*/

class Data{

    private:
        string DataValor;
        /*! \cond PRIVATE*/
        void validar(string);
        /*! \endcond*/
    public:
        //! Função setData
        /*! Verifica se uma string atende às condições de validação de Data, caso atenda, armazena a string na instância de Data*/
        /*! @param DataTeste string que passará por verificação de validade*/
        void setData(string);
        //! Função getData
        /*! Retorna a string armazenada pela instância de Data*/
        /*! @return string armazenada na instância da classe Data*/
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
    Classe que armazena um CPF no seguinte formato:<br>
    <b>XXX.XXX.XXX-CC</b><br>
    -X é dígito<br>
    -CC são dígitos de validação calculados segundo algoritmo de validação de CPF
*/

class CPF{

    private:
        string CPFValor;
        /*! \cond PRIVATE*/
        void validar(string);
        /*! \endcond*/
    public:
        //! Função setCPF
        /*! Verifica se uma string atende às condições de validação de CPF, caso atenda, armazena a string na instância de CPF*/
        /*! @param CPFTeste string que passará por verificação de validade*/
        void setCPF(string);
        //! Função getCPF
        /*! Retorna a string armazenada pela instância de CPF*/
        /*! @return string armazenada na instância da classe CPF*/
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
    Armazena uma senha que segue as seguintes condições:<br>
    <b>XXXXXX</b><br>
    -X é dígito<br>
    -Não há digito duplicado<br>
    -Primeiro dígito é diferente de zero<br>
    -Sequência não pode ser crescente e nem decrescente
*/

class Senha{
    private:
        string SenhaArmazenada;
        /*! \cond PRIVATE*/
        void validar(string);
        /*! \endcond*/
    public:
    //! Função getSenha
    /*! Verifica se uma string atende às condições de validação de Senha, caso atenda, armazena a string na instância de Senha*/
    /*! @param SenhaTeste string que passará por verificação de validade*/
    void setSenha(string);
    //! Função getSenha
    /*! Retorna a string armazenada pela instância de Senha*/
    /*! @return string armazenada na instância da classe Senha*/
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
        /*! @param CharTeste caractere a ser verificado*/
        /*! @return 1 - Caractere é letra maiúscula
            @return 0 - Caractere não é letra maiúscula
        */
        static bool isUpperCase(char);
        //! Função stringCount
        /*! Conta o número de instâncias de um caractere em uma string*/
        /*! @param CharTeste identifica o caractere que se deseja contar
            @param StringTeste  string na qual será contada a quantidade de instâncias de CharTeste
        */
       /*! @return número de vezes que CharTeste aparece em StringTeste*/
        static int stringCount(string,char);

};

#endif
