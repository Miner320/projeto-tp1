#include "dominios.hpp"
#include <string>
#include <regex>
#include <cstdlib>


//metodos da classe Percentual


Percentual::Percentual(void){
    this->Valor = NULL;
}

Percentual::Percentual(int valor){
    validar(valor);
    this->Valor = valor;
}


void Percentual::validar(int ValorTeste){

    if(0 <= ValorTeste && ValorTeste <= 100){
        return;
    }
    __throw_invalid_argument("Valor deve estar no intervalo [0,100]");
}

void Percentual::setPercentual(int valor){
    validar(valor);
        this->Valor = valor;
}

//metodos da classe Estado

Estado::Estado(void){
    this->TipoEstado = "";
}

Estado::Estado(string Estado){
    validar(Estado);
        this->TipoEstado = Estado;
}

void Estado::validar(std::string EstadoTeste){

    std::string EstadosPossiveis[3] = {"Previsto", "Liquidado", "Inadimplente"};

    for(int i = 0; i < 3; i++){

        if(EstadoTeste == EstadosPossiveis[i]){
            return;
        }

    }

    __throw_invalid_argument("Nome não corresponde à nenhum estado permitido");

}

void Estado::setEstado(std::string TipoEstado){
    validar(TipoEstado);
    this->TipoEstado = TipoEstado;
}

//metodos da classe Dinheiro

Dinheiro::Dinheiro(void){
    this->Valor = NULL;
}

Dinheiro::Dinheiro(float Valor){
    validar(Valor);
    this->Valor = Valor;
}


void Dinheiro::validar(float ValorTeste){

    if(0<=ValorTeste && ValorTeste <= 1000000){
        return;
    }

    __throw_invalid_argument("Valor não está no intervalo [0,10^6]");

}

void Dinheiro::setDinheiro(float Valor){
    validar(Valor);
    this->Valor = Valor;
}

//metodos da classe Setor

Setor::Setor(void){
    this->NomeSetor = "";
}

Setor::Setor(string Setor){
    validar(Setor);
    this->NomeSetor = Setor;
}

void Setor::validar(std::string SetorTeste){

    std::string SetoresPossiveis[10] = {"Agricultura", "Construção civil", "Energia", "Finanças", "Imobiliário",
    "Papel e celulose", "Pecuária", "Química e petroquímica", "Metalurgia e siderurgia", "Mineração"};

    for(int i = 0; i < 10; i++){
        if(SetorTeste == SetoresPossiveis[i]){
            return;
        }
    }

    __throw_invalid_argument("Nome não corresponde à nenhum setor permitido");

}

void Setor::setSetor(std::string NomeSetor){
    validar(NomeSetor);
    this->NomeSetor = NomeSetor;
}

//metodos da classe codPagamento

CodigoPagamento::CodigoPagamento(void){
    this->Codigo = "";
}

CodigoPagamento::CodigoPagamento(string Codigo){
    validar(Codigo);
    this->Codigo = Codigo;
}

void CodigoPagamento::validar(std::string CodigoTeste){

    if(CodigoTeste.length() != 8){
        __throw_invalid_argument("Comprimento do código inválido, deve ter comprimento igual a 8");
    }

    if(CodigoTeste[0]<'1' || CodigoTeste[0]>'9'){
        __throw_invalid_argument("Primeiro digito inválido, primeiro digito deve ser diferente de zero");
    }

    for(int i=0; i<8; i++){
        if(isdigit(CodigoTeste[i])== 0){
            __throw_invalid_argument("Caractere invalido presente no código, só são permitidos números");
        }
    }

return;

}

void CodigoPagamento::setCodPagamento(std::string Codigo){
    validar(Codigo);
    this->Codigo = Codigo;
}

//metodos da classe Nome

Nome::Nome(void){
    this->NomeValor = "";
}

Nome::Nome(string Nome){
    validar(Nome);
    this->NomeValor = Nome;
}

void Nome::validar(std::string NomeTeste){

    int BlankSpaceIndex;
    int BlankSpaceQuantity = 0;
    bool Validacao;
    std::string PrimeiroNome = "", SobreNome = "";

    for (int i=0; i<NomeTeste.length();i++){ //loop para contar numero de espaços em branco
        if( isblank(NomeTeste[i]) ){
            BlankSpaceQuantity++;
        }
        if( isalpha(NomeTeste[i]) == 0 && NomeTeste[i] != ' '){
            __throw_invalid_argument("Caractere inválido detectado");
        }
    }

    switch(BlankSpaceQuantity){

        case 0:
            Validacao = checkNome(NomeTeste);
            break;

        case 1:
            BlankSpaceIndex = NomeTeste.find(' ');
            PrimeiroNome.insert(0,NomeTeste,0,BlankSpaceIndex);
            SobreNome.append(NomeTeste,BlankSpaceIndex+1);

            Validacao = (checkNome(PrimeiroNome) && checkNome(SobreNome));
            break;

        default:
            Validacao = 0;

    }

    if(Validacao == 0){
        __throw_invalid_argument("Nome inválido inserido");
    }

    return;

}


void Nome::setNome(std::string Nome){
        validar(Nome);
        this->NomeValor = Nome;
}

bool Nome::checkNome(string NomeTeste){

    if(Utilities::isUpperCase(NomeTeste[0])==0){
        return 0;
    }
    if(NomeTeste.length()<3 || NomeTeste.length()>10){
        return 0;
    }

    return 1;

}

//metodos da classe CodigoTitulo

CodigoTitulo::CodigoTitulo(void){
    this->Codigo = "";
}

CodigoTitulo::CodigoTitulo(string Codigo){
    validar(Codigo);
    this->Codigo = Codigo;
}

void CodigoTitulo::validar(std::string CodigoTeste){

    if(CodigoTeste.length() != 11){
        __throw_invalid_argument("Codigo tem comprimento inválido");
    }

    std::string CodigosPossiveis[6] = {"CDB", "CRA", "CRI", "LCA", "LCI", "DEB"};
    std::string Inicio = "";
    std::string Final = "";
    bool ValInicio=0, ValFinal=1,Validacao;

    Inicio.insert(0,CodigoTeste,0,3);
    Final.append(CodigoTeste,3);

    for(int i=0;i<8;i++){
        if(Inicio == CodigosPossiveis[i]){
            ValInicio = 1;
        }
    }

    for(int i=0;i<8;i++){

        if(Utilities::isUpperCase(Final[i]) == 0  && isdigit(Final[i])==0){
            ValFinal = 0;
        }
    }

    Validacao = (ValInicio && ValFinal);

    if(Validacao == 0 ){
        __throw_invalid_argument("Argumento inválido");
    }

    return;

}

void CodigoTitulo::setCodigoTitulo(std::string Codigo){
    validar(Codigo);
    this->Codigo = Codigo;
}

//metodos da classe Data

Data::Data(void){
    this->DataValor = "";
}

Data::Data(string Data){
    validar(Data);
    this->DataValor = Data;
}

void Data::validar(std::string DataTeste){

    if( regex_match(DataTeste,regex("^\\d{2}[-]\\d{2}[-]\\d{4}$")) == 0){
        throw invalid_argument("Formato inválido de data");
    }

    int Dia,Mes,Ano;
    string Temp;
    bool AnoBissexto,Validacao;

    Temp.assign(DataTeste,0,2);
    Dia = atoi(Temp.c_str());

    Temp.assign(DataTeste,3,2);
    Mes = atoi(Temp.c_str());

    Temp.assign(DataTeste,6,4);
    Ano = atoi(Temp.c_str());

    if(Dia<1 || Dia>31){
        __throw_invalid_argument("Argumento inválido");
    }

    if(Mes<1 || Mes>12){
        __throw_invalid_argument("Argumento inválido");
    }

    if(Ano<2000 || Ano>2100){
        __throw_invalid_argument("Argumento inválido");
    }

    AnoBissexto = ( (Ano-2000)%4==0 )? true : false;

    if(Mes == 2){

        if(AnoBissexto){
            Validacao = (Dia <= 29);
        } else {
            Validacao = (Dia <= 28);
        }

    }

    if(Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11){
        Validacao = (Dia <= 30);
    }

    if(Validacao == 0){
        __throw_invalid_argument("Argumento inválido");
    }

}

void Data::setData(string Data){
    validar(Data);
    this->DataValor = Data;
}

//metodos da classe CPF

CPF::CPF(void){
    this->CPFValor = "";
}

CPF::CPF(string Cpf){
    validar(Cpf);
    this->CPFValor = Cpf;
}

void CPF::validar(string CPFteste){

    if( regex_match(CPFteste,regex("^\\d{3}[.]\\d{3}[.]\\d{3}[-]\\d{2}$")) == 0){
        __throw_invalid_argument("Formato invalido de cpf");
    }

    string DigitosCPF,DigitosValidacao;
    int Soma,DigitosCalculados[2];
    bool Validacao=1;

    DigitosCPF = CPFteste.substr(0,3) + CPFteste.substr(4,3) + CPFteste.substr(8,3);
    DigitosValidacao = CPFteste.substr(12,2);

    Soma = 0;
    for(int i=0;i<9;i++){
        Soma = Soma + (10-i)*atoi(DigitosCPF.substr(i,1).c_str());
    }

    if( (Soma%11) < 2 ){
        DigitosCalculados[0] = 0;
    } else {
        DigitosCalculados[0] = 11 - Soma%11;
    }

    Soma = 0;
        for(int i=0;i<9;i++){
        Soma = Soma + (11-i)*atoi(DigitosCPF.substr(i,1).c_str());
    }
    Soma = Soma + 2*DigitosCalculados[0];

    if( (Soma%11) < 2){
        DigitosCalculados[1] = 0;
    } else {
        DigitosCalculados[1] = 11 - Soma%11;
    }

    if(DigitosCalculados[0] != atoi(DigitosValidacao.substr(0,1).c_str()) || DigitosCalculados[1] !=atoi(DigitosValidacao.substr(1,1).c_str())){
        Validacao = 0;
    }

    if(Validacao == 0){
        __throw_invalid_argument("Argumento inválido");
    }
}

void CPF::setCPF(string Cpf){
    validar(Cpf);
    this->CPFValor = Cpf;
}

//metodos da classe Senha

void Senha::setSenha(string senhaTeste){
    validar(senhaTeste);
    this->Senha = senhaTeste;
}

void Senha::validar(string senhaTeste){

    int verificaSequencia = 0;

    if(senhaTeste.length()!=6){
        __throw_invalid_argument("Tamanho de senha invalido");
    }

    for(int i = 0;i<6;i++){
        if(isdigit(senhaTeste[i])==0){
            __throw_invalid_argument("caractere invalido detectado");
        }
    }

    if(senhaTeste[0]=='0'){
        __throw_invalid_argument("primeiro caractere de senha não pode ser zero");
    }

    for(char i = '0'; i<='9';i++){
        if(Utilities::stringCount(senhaTeste,i)>1){
            __throw_invalid_argument("caractere repetido detectado");
        }
    }

    for(int i = 0; i<5;i++){
        if(senhaTeste[i+1] > senhaTeste[i] ){
            verificaSequencia++;
        }
    }
    if(verificaSequencia == 5){
        __throw_invalid_argument("sequencia nao pode ser crescente");
    }

    verificaSequencia = 0;
    for(int i = 0; i<5;i++){
        if(senhaTeste[i+1] < senhaTeste[i] ){
            verificaSequencia++;
        }
    }
    if(verificaSequencia == 5){
        __throw_invalid_argument("sequencia nao pode ser crescente");
    }

    return;

}


//metodos da classe Utilities

bool Utilities::isUpperCase(char Caractere){

    if(Caractere < 'A' || Caractere > 'Z'){
        return 0;
    }

    return 1;

}

int Utilities::stringCount(string stringao, char caractere){
    int soma = 0;
    int i;
    for(i = 0;i<stringao.length();i++){
        if(stringao[i]==caractere){
            soma++;
        }
    }
    return soma;
}