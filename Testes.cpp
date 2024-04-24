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

//metodos de TUConta

void TUConta::setUp(){
    conta = new Conta;
    Validade = Sucesso;
}

void TUConta::tearDown(){
    delete conta;
}

void TUConta::testarCenarioSucesso(){
    CPF Cpf;
    Cpf.setCPF(ValorValidoCpf);
    conta->setCpf(Cpf);
    if(conta->getCpf().getCPF() != ValorValidoCpf){
        Validade = Falha;
    }

    Nome Nome;
    Nome.setNome(ValorValidoNome);
    conta->setNome(Nome);
    if(conta->getNome().getNome() != ValorValidoNome){
        Validade = Falha;
    }
}

int TUConta::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return Validade;
}

//metodos de TUTitulo

void TUTitulo::setUp(){
    titulo = new Titulo;
    Validade = Sucesso;
}

void TUTitulo::tearDown(){
    delete titulo;
}

void TUTitulo::testarCenarioSucesso(){
    CodigoTitulo Codigo;
    Codigo.setCodigoTitulo(ValorValidoCodigo);
    titulo->setCodigoTitulo(Codigo);
    if(titulo->getCodigoTitulo().getCodigoTitulo() != ValorValidoCodigo){
        Validade = Falha;
    }

    Nome Emissor;
    Emissor.setNome(ValorValidoEmissor);
    titulo->setEmissor(Emissor);
    if(titulo->getEmissor().getNome() != ValorValidoEmissor){
        Validade = Falha;
    }

    Setor Setor;
    Setor.setSetor(ValorValidoSetor);
    titulo->setSetor(Setor);
    if(titulo->getSetor().getSetor() != ValorValidoSetor){
        Validade = Falha;
    }
    
    Data Emissao;
    Emissao.setData(ValorValidoEmissao);
    titulo->setEmissao(Emissao);
    if(titulo->getEmissao().getData() != ValorValidoEmissao){
        Validade = Falha;
    }

    Data Vencimento;
    Vencimento.setData(ValorValidoVencimento);
    titulo->setVencimento(Vencimento);
    if(titulo->getVencimento().getData() != ValorValidoVencimento){
        Validade = Falha;
    }
    
    Dinheiro Valor;
    Valor.setDinheiro(ValorValidoValor);
    titulo->setValor(Valor);
    if(titulo->getValor().getDinheiro() != ValorValidoValor){
        Validade = Falha;
    }

}

int TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return Validade;
}

//metodos de TUPagamento

void TUPagamento::setUp(){
    pagamento = new Pagamento;
    Validade = Sucesso;
}

void TUPagamento::tearDown(){
    delete pagamento;
}

void TUPagamento::testarCenarioSucesso(){
    CodigoPagamento codigo;
    codigo.setCodPagamento(ValorValidoCodigo);
    pagamento->setCodigoPagamento(codigo);
    if(pagamento->getCodigoPagamento().getCodPagamento() != ValorValidoCodigo){
        Validade = Falha;
    }

    Data data;
    data.setData(ValorValidoData);
    pagamento->setData(data);
    if(pagamento->getData().getData() != ValorValidoData){
        Validade = Falha;
    }

    Percentual Percentual;
    Percentual.setPercentual(ValorValidoPercentual);
    pagamento->setPercentual(Percentual);
    if(pagamento->getPercentual().getPercentual() != ValorValidoPercentual){
        Validade = Falha;
    }

    Estado Estado;
    Estado.setEstado(ValorValidoEstado);
    pagamento->setEstado(Estado);
    if(pagamento->getEstado().getEstado() != ValorValidoEstado){
        Validade = Falha;
    }

}

int TUPagamento::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return Validade;
}
