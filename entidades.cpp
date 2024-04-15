#include "dominios.hpp"
#include "entidades.hpp"

//metodos de Conta

void Conta::setCpf(CPF cpf){
    this->Cpf = cpf;
}

CPF Conta::getCpf() const{
    return this->Cpf;
}

void Conta::setNome(Nome nome){
    this->Name = nome;
}

Nome Conta::getNome() const{
    return this->Name;
}

//metodos de titulo

void Titulo::setCodigoTitulo(CodigoTitulo codigo){
    this->Codigo = codigo;
}

CodigoTitulo Titulo::getCodigoTitulo() const{
    return this->Codigo;
}

void Titulo::setEmissor(Nome nome){
    this->Emissor = nome;
}

Nome Titulo::getEmissor() const{
    return this->Emissor;
}

void Titulo::setSetor(Setor setor){
    this->Sector = setor;
}

Setor Titulo::getSetor() const{
    return this->Sector;
}

void Titulo::setEmissao(Data data){
    this->Emissao = data;
}

Data Titulo::getEmissao() const{
    return this->Emissao;
}

void Titulo::setVencimento(Data data){
    this->Vencimento = data;
}

Data Titulo::getVencimento() const{
    return this->Vencimento;
}

void Titulo::setValor(Dinheiro valor){
    this->Valor = valor;
}

Dinheiro Titulo::getValor() const{
    return this->Valor;
}

//metodos da classe Pagamento

void Pagamento::setCodigoPagamento(CodigoPagamento codigo){
    this->Codigo = codigo;
}

CodigoPagamento Pagamento::getCodigoPagamento() const{
    return this->Codigo;
}

void Pagamento::setData(Data data){
    this->Date = data;
}

Data Pagamento::getData() const{
    return this->Date;
}

void Pagamento::setPercentual(Percentual percentual){
    this->Percent = percentual;
}

Percentual Pagamento::getPercentual() const{
    return this->Percent;
}

void Pagamento::setEstado(Estado estado){
    this->State = estado;
}

Estado Pagamento::getEstado() const{
    return this->State;
}





