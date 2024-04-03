#include "dominios.hpp"
#include <string>
#include <cctype>

//

bool isUpperCase(char caractere){

    if(caractere < 'A' || caractere > 'Z'){
        return 0;
    }

    return 1;

}

bool checkNome(string nomeTeste){

    if(isUpperCase(nomeTeste[0])==0){
        return 0;
    }
    if(nomeTeste.length()<3 || nomeTeste.length()>10){
        return 0;
    }

    return 1;

}

//metodos da classe Percentual

bool Percentual::validar(int valorTeste){

    if(0 <= valorTeste && valorTeste <= 100){
        return 1;
    }
    return 0;
}

void Percentual::setPercentual(int valor){
    if( validar(valor) ){
        this->valor = valor;
    }
}

//metodos da classe Estado

bool Estado::validar(std::string estadoTeste){

    std::string estadosPossiveis[3] = {"Previsto", "Liquidado", "Inadimplente"};

    for(int i = 0; i < 3; i++){

        if(estadoTeste == estadosPossiveis[i]){
            return 1;
        }

    }

    return 0;

}

void Estado::setEstado(std::string tipoEstado){

    if( validar(tipoEstado) ){
        this->tipoEstado = tipoEstado;
    }

}

//metodos da classe Dinheiro

bool Dinheiro::validar(float valorTeste){

    if(0<=valorTeste && valorTeste <= 1000000){
        return 1;
    }
    return 0;

}

void Dinheiro::setDinheiro(float valor){

    if( validar(valor) ){
        this->valor = valor;
    }

}

//metodos da classe Setor

bool Setor::validar(std::string setorTeste){

    std::string setoresPossiveis[10] = {"Agricultura", "Construção civil", "Energia", "Finanças", "Imobiliário",
    "Papel e celulose", "Pecuária", "Química e petroquímica", "Metalurgia e siderurgia", "Mineração"};

    for(int i = 0; i < 10; i++){
        if(setorTeste == setoresPossiveis[i]){
            return 1;
        }
    }

    return 0;

}

void Setor::setSetor(std::string nomeSetor){
    
    if( validar(nomeSetor) ){
        this->nomeSetor = nomeSetor;
    }

}

//metodos da classe codPagamento

bool codPagamento::validar(std::string codigoTeste){

    if(codigoTeste.length() != 8){
        return 0;
    }

    if(codigoTeste[0]<'1' || codigoTeste[0]>'9'){
        return 0;
    }

    for(int i=0; i<8; i++){
        if(isdigit(codigoTeste[i])== 0){
            return 0;
        }
    }

return 1;

}

void codPagamento::setCodPagamento(std::string codigo){

    if( validar(codigo) ){
        this->codigo = codigo;
    }

}

//metodos da classe Nome

bool Nome::validar(std::string nomeTeste){

    int blankSpaceIndex;
    int blankSpaceQuantity = 0;
    std::string primeiroNome = "", sobreNome = "";

    for (int i=0; i<nomeTeste.length();i++){ //loop para contar numero de espaços em branco
        if( isblank(nomeTeste[i]) ){
            blankSpaceQuantity++;
        }
        if( isalpha(nomeTeste[i]) == 0 && nomeTeste[i] != ' '){
            return 0;
        }
    }

    switch(blankSpaceQuantity){

        case 0:
            return checkNome(nomeTeste);

        case 1:
            blankSpaceIndex = nomeTeste.find(' ');
            primeiroNome.insert(0,nomeTeste,0,blankSpaceIndex);
            sobreNome.append(nomeTeste,blankSpaceIndex+1);

            return (checkNome(primeiroNome) && checkNome(sobreNome));

        default:
        return 0;
        
    }

}

void Nome::setNome(std::string nome){

        if(validar(nome)){
            this-> nome = nome;
        }

}