#include <iostream>

#include "entidades.hpp"
#include "dominios.hpp"
#include "testes.hpp"

int main(void){

//testes de dominio

TUPercentual t1;
switch (t1.run()){
    case TUPercentual::Sucesso: cout << "Sucesso - Percentual" << endl; break;
    case TUPercentual::Falha: cout << "Falha - Percentual" << endl; break;
}

TUEstado t2;
switch (t2.run()){
    case TUEstado::Sucesso: cout << "Sucesso - Estado" << endl; break;
    case TUEstado::Falha: cout << "Falha - Estado" << endl; break;
}

TUDinheiro t3;
switch (t3.run()){
    case TUDinheiro::Sucesso: cout << "Sucesso - Dinheiro" << endl; break;
    case TUDinheiro::Falha: cout << "Falha - Dinheiro" << endl; break;
}

TUSetor t4;
switch (t4.run()){
    case TUSetor::Sucesso: cout << "Sucesso - Setor" << endl; break;
    case TUSetor::Falha: cout << "Falha - Setor" << endl; break;
}

TUCodigoPagamento t5;
switch (t5.run()){
    case TUCodigoPagamento::Sucesso: cout << "Sucesso - CodigoPagamento" << endl; break;
    case TUCodigoPagamento::Falha: cout << "Falha - CodigoPagamento" << endl; break;
}

TUNome t6;
switch (t6.run()){
    case TUNome::Sucesso: cout << "Sucesso - Nome" << endl; break;
    case TUNome::Falha: cout << "Falha - Nome" << endl; break;
}

TUCodigoPagamento t7;
switch (t7.run()){
    case TUCodigoTitulo::Sucesso: cout << "Sucesso - CodigoTitulo" << endl; break;
    case TUCodigoTitulo::Falha: cout << "Falha - CodigoTitulo" << endl; break;
}

TUData t8;
switch (t8.run()){
    case TUData::Sucesso: cout << "Sucesso - Data" << endl; break;
    case TUData::Falha: cout << "Falha - Data" << endl; break;
}

TUCPF t9;
switch (t9.run()){
    case TUCPF::Sucesso: cout << "Sucesso - CPF" << endl; break;
    case TUCPF::Falha: cout << "Falha - CPF" << endl; break;
}

TUSenha t10;
switch (t10.run()){
    case TUSenha::Sucesso: cout << "Sucesso - Senha" << endl; break;
    case TUSenha::Falha: cout << "Falha - Senha" << endl; break;
}

//testes de entidade

TUConta t11;
switch (t11.run()){
    case TUConta::Sucesso: cout << "Sucesso - Conta" << endl; break;
    case TUConta::Falha: cout << "Falha - Conta" << endl; break;
}

TUTitulo t12;
switch (t12.run()){
    case TUTitulo::Sucesso: cout << "Sucesso - Titulo" << endl; break;
    case TUTitulo::Falha: cout << "Falha - Titulo" << endl; break;
}

TUPagamento t13;
switch (t13.run()){
    case TUPagamento::Sucesso: cout << "Sucesso - Pagamento" << endl; break;
    case TUPagamento::Falha: cout << "Falha - Pagamento" << endl; break;
}

    return 0;
}
