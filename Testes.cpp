#include "Testes.hpp"

//metodos de TUPercentual

void TUPercentual::setUp(){
    percentual = new Percentual;
    Validade = Sucesso;
}

void TUPercentual::tearDown(){
    delete percentual;
}

void TUPercentual::testarCenarioSucesso(){
    try{
        percentual->setPercentual(ValorValido);
        if(percentual->getPercentual() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUPercentual::testarCenarioFalha(){
    try{
        percentual->setPercentual(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(percentual->getPercentual() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUPercentual::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

//metodos de TUEstado

void TUEstado::setUp(){
    estado = new Estado;
    Validade = Sucesso;
}

void TUEstado::tearDown(){
    delete estado;
}

void TUEstado::testarCenarioSucesso(){
    try{
        estado->setEstado(ValorValido);
        if(estado->getEstado() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUEstado::testarCenarioFalha(){
    try{
        estado->setEstado(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(estado->getEstado() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUEstado::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

//metodos de TUDinheiro

void TUDinheiro::setUp(){
    dinheiro = new Dinheiro;
    Validade = Sucesso;
}

void TUDinheiro::tearDown(){
    delete dinheiro;
}

void TUDinheiro::testarCenarioSucesso(){
    try{
        dinheiro->setDinheiro(ValorValido);
        if(dinheiro->getDinheiro() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUDinheiro::testarCenarioFalha(){
    try{
        dinheiro->setDinheiro(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(dinheiro->getDinheiro() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUDinheiro::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

//metodos de TUSetor

void TUSetor::setUp(){
    setor = new Setor;
    Validade = Sucesso;
}

void TUSetor::tearDown(){
    delete setor;
}

void TUSetor::testarCenarioSucesso(){
    try{
        setor->setSetor(ValorValido);
        if(setor->getSetor() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUSetor::testarCenarioFalha(){
    try{
        setor->setSetor(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(setor->getSetor() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUSetor::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

//metodos de TUCodigoPagamento

void TUCodigoPagamento::setUp(){
    codigo = new CodigoPagamento;
    Validade = Sucesso;
}

void TUCodigoPagamento::tearDown(){
    delete codigo;
}

void TUCodigoPagamento::testarCenarioSucesso(){
    try{
        codigo->setCodPagamento(ValorValido);
        if(codigo->getCodPagamento() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUCodigoPagamento::testarCenarioFalha(){
    try{
        codigo->setCodPagamento(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(codigo->getCodPagamento() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUCodigoPagamento::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

//metodos de TUNome

void TUNome::setUp(){
    nome = new Nome;
    Validade = Sucesso;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(ValorValido);
        if(nome->getNome() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(nome->getNome() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

//metodos de TUCodigoTitulo

void TUCodigoTitulo::setUp(){
    codigo = new CodigoTitulo;
    Validade = Sucesso;
}

void TUCodigoTitulo::tearDown(){
    delete codigo;
}

void TUCodigoTitulo::testarCenarioSucesso(){
    try{
        codigo->setCodigoTitulo(ValorValido);
        if(codigo->getCodigoTitulo() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUCodigoTitulo::testarCenarioFalha(){
    try{
        codigo->setCodigoTitulo(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(codigo->getCodigoTitulo() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUCodigoTitulo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

//metodos de TUData

void TUData::setUp(){
    data = new Data;
    Validade = Sucesso;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(ValorValido);
        if(data->getData() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(data->getData() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

//metodos de TUCPF

void TUCPF::setUp(){
    cpf = new CPF;
    Validade = Sucesso;
}

void TUCPF::tearDown(){
    delete cpf;
}

void TUCPF::testarCenarioSucesso(){
    try{
        cpf->setCPF(ValorValido);
        if(cpf->getCPF() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUCPF::testarCenarioFalha(){
    try{
        cpf->setCPF(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(cpf->getCPF() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUCPF::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

//metodos de TUSenha

void TUSenha::setUp(){
    senha = new Senha;
    Validade = Sucesso;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(ValorValido);
        if(senha->getSenha() != ValorValido){
            Validade = Falha;
        }
    }
    catch(invalid_argument &excecao){
        Validade = Falha;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(ValorInvalido);
        Validade = Falha;
    }
    catch(invalid_argument &excecao){
        if(senha->getSenha() == ValorInvalido){
            Validade = Falha;
        }
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return Validade;
}

