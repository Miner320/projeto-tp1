#define CATCH_CONFIG_MAIN

#include "dominios.hpp"
#include "catch.hpp"
#include <string>

using namespace std;


    TEST_CASE("validacao do percentual", "[percentual]"){

        Percentual t1;

        REQUIRE(t1.getPercentual()==0);

        t1.setPercentual(120);

        REQUIRE(t1.getPercentual()==0);

        t1.setPercentual(-50);

        REQUIRE(t1.getPercentual()==0);

        t1.setPercentual(50);

        REQUIRE(t1.getPercentual()==50);

        t1.setPercentual(100);

        REQUIRE(t1.getPercentual()==100);

    }


    TEST_CASE("validacao do dinheiro", "[dinheiro]"){

        Dinheiro t1;

        REQUIRE(t1.getDinheiro()==0);

        t1.setDinheiro(120);

        REQUIRE(t1.getDinheiro()==120);

        t1.setDinheiro(-50);

        REQUIRE(t1.getDinheiro()==120);

        t1.setDinheiro(50);

        REQUIRE(t1.getDinheiro()==50);

        t1.setDinheiro(1000000000);

        REQUIRE(t1.getDinheiro()==50);

    }


    TEST_CASE("validacao de estado", "[estado]"){

        Estado t1;

        REQUIRE(t1.getEstado().compare("")==0);

        t1.setEstado("random");

        REQUIRE(t1.getEstado().compare("")==0);

        t1.setEstado("Liquidado");

        REQUIRE(t1.getEstado().compare("Liquidado")==0);

    }


    TEST_CASE("validacao de setor", "[setor]"){

        Setor t1;

        REQUIRE(t1.getSetor().compare("")==0);

        t1.setSetor("random");

        REQUIRE(t1.getSetor().compare("")==0);

        t1.setSetor("Agricultura");

        REQUIRE(t1.getSetor().compare("Agricultura")==0);

    }


    TEST_CASE("validacao de codigo de pagamento", "[codPagamento]"){

        codPagamento t1;

        REQUIRE(t1.getCodPagamento().compare("")==0);

        t1.setCodPagamento("12345678000");

        REQUIRE(t1.getCodPagamento().compare("")==0);

        t1.setCodPagamento("1234567a");

        REQUIRE(t1.getCodPagamento().compare("")==0);

        t1.setCodPagamento("02345678");

        REQUIRE(t1.getCodPagamento().compare("")==0);

        t1.setCodPagamento("12345678");

        REQUIRE(t1.getCodPagamento().compare("12345678")==0);

    }

    TEST_CASE("validacao de nomes", "[nome]"){

        Nome t1;

        REQUIRE(t1.getNome().compare("")==0);

        t1.setNome("aaaaaaaaaaaaa");

        REQUIRE(t1.getNome().compare("")==0);

        t1.setNome("an1");

        REQUIRE(t1.getNome().compare("")==0);

        t1.setNome("An00");

        REQUIRE(t1.getNome().compare("")==0);

        t1.setNome("ana");

        REQUIRE(t1.getNome().compare("")==0);

        t1.setNome("Ana ");

        REQUIRE(t1.getNome().compare("")==0);

        t1.setNome(" Maria");

        REQUIRE(t1.getNome().compare("")==0);

        t1.setNome("John");

        REQUIRE(t1.getNome().compare("John")==0);

        t1.setNome("John Travolta");

        REQUIRE(t1.getNome().compare("John Travolta")==0);

    }

    TEST_CASE("valicadao de CodigoTitulo", "[CodigoTitulo]"){

        CodigoTitulo t1;

        REQUIRE(t1.getCodigoTitulo().compare("")==0);

        t1.setCodigoTitulo("aaaaaaaaaa");

        REQUIRE(t1.getCodigoTitulo().compare("")==0);

        t1.setCodigoTitulo("CDB1234a678");

        REQUIRE(t1.getCodigoTitulo().compare("")==0);

        t1.setCodigoTitulo("aaa12345678");

        REQUIRE(t1.getCodigoTitulo().compare("")==0);

        t1.setCodigoTitulo("CDB123456");

        REQUIRE(t1.getCodigoTitulo().compare("")==0);

        t1.setCodigoTitulo("CDB12345678");

        REQUIRE(t1.getCodigoTitulo().compare("CDB12345678")==0);

        t1.setCodigoTitulo("CRAA1234567");

        REQUIRE(t1.getCodigoTitulo().compare("CRAA1234567")==0);

    }

    TEST_CASE("validacao de data", "[data]"){

        Data t1;

        REQUIRE(t1.getData().compare("")==0);

        t1.setData("12-04-1042");

        REQUIRE(t1.getData().compare("")==0);

        t1.setData("15-06-200a");

        REQUIRE(t1.getData().compare("")==0);

        t1.setData("30-02-2007");

        REQUIRE(t1.getData().compare("")==0);

        t1.setData("31-04-2003");

        REQUIRE(t1.getData().compare("")==0);

        t1.setData("29-02-2023");

        REQUIRE(t1.getData().compare("")==0);

        t1.setData("15-05-2006");

        REQUIRE(t1.getData().compare("15-05-2006")==0);

        t1.setData("30-04-2003");

        REQUIRE(t1.getData().compare("30-04-2003")==0);

        t1.setData("29-02-2024");

        REQUIRE(t1.getData().compare("29-02-2024")==0);

    }

    TEST_CASE("validacao de cpf", "[cpf]"){

        CPF t1;

        REQUIRE(t1.getCPF()=="");

        t1.setCPF("000.123.12a-08");

        REQUIRE(t1.getCPF()=="");

        t1.setCPF("000.000.123-99");

        REQUIRE(t1.getCPF()=="");

        t1.setCPF("111.444.777-35");

        REQUIRE(t1.getCPF()=="111.444.777-35");

        t1.setCPF("083.422.731-21");

        REQUIRE(t1.getCPF()=="083.422.731-21");

    }