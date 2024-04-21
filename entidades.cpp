#include "dominios.hpp"
#include "entidades.hpp"

//metodos de Conta

void Conta::setCpf(CPF cpf){
    this->Cpf = cpf;
}

CPF Conta::getCpf() const{
    return this->Cpf;
}

void Conta::setNome(class Nome nome){
    this->Nome = nome;
}

Nome Conta::getNome() const{
    return this->Nome;
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

void Titulo::setSetor(class::Setor setor){
    this->Setor = setor;
}

Setor Titulo::getSetor() const{
    return this->Setor;
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

void Pagamento::setData(class::Data data){
    this->Data = data;
}

Data Pagamento::getData() const{
    return this->Data;
}

void Pagamento::setPercentual(class::Percentual percentual){
    this->Percentual = percentual;
}

Percentual Pagamento::getPercentual() const{
    return this->Percentual;
}

void Pagamento::setEstado(class::Estado estado){
    this->Estado = estado;
}

Estado Pagamento::getEstado() const{
    return this->Estado;
}





