#define CATCH_CONFIG_MAIN

#include "dominios.hpp"
#include "catch.hpp"
#include <string>

using namespace std;


    TEST_CASE("validacao do percentual", "[percentual]"){

        Percentual t1;

        CHECK_THROWS(t1.setPercentual(120));

        CHECK_THROWS(t1.setPercentual(-50));

        REQUIRE(t1.getPercentual()==0);

        t1.setPercentual(50);

        REQUIRE(t1.getPercentual()==50);

        t1.setPercentual(100);

        REQUIRE(t1.getPercentual()==100);

    }


    TEST_CASE("validacao do dinheiro", "[dinheiro]"){

        Dinheiro t1;

        REQUIRE(t1.getDinheiro()==0);

        CHECK_THROWS(t1.setDinheiro(-50));

        t1.setDinheiro(120);

        REQUIRE(t1.getDinheiro()==120);

        t1.setDinheiro(50);

        REQUIRE(t1.getDinheiro()==50);

        CHECK_THROWS(t1.setDinheiro(1000000000));

    }


    TEST_CASE("validacao de estado", "[estado]"){

        Estado t1;

        REQUIRE(t1.getEstado().compare("")==0);

        CHECK_THROWS(t1.setEstado("random"));

        t1.setEstado("Liquidado");

        REQUIRE(t1.getEstado().compare("Liquidado")==0);

    }


    TEST_CASE("validacao de setor", "[setor]"){

        Setor t1;

        REQUIRE(t1.getSetor().compare("")==0);

        CHECK_THROWS(t1.setSetor("random"));

        t1.setSetor("Agricultura");

        REQUIRE(t1.getSetor().compare("Agricultura")==0);

    }


    TEST_CASE("validacao de codigo de pagamento", "[codPagamento]"){

        codPagamento t1;

        REQUIRE(t1.getCodPagamento().compare("")==0);

        CHECK_THROWS(t1.setCodPagamento("12345678000"));

        CHECK_THROWS(t1.setCodPagamento("1234567a"));

        CHECK_THROWS(t1.setCodPagamento("02345678"));

        t1.setCodPagamento("12345678");

        REQUIRE(t1.getCodPagamento().compare("12345678")==0);

    }

    TEST_CASE("validacao de nomes", "[nome]"){

        Nome t1;

        CHECK_THROWS(t1.setNome("aaaaaaaaaaaaa"));

        CHECK_THROWS(t1.setNome("an1"));

        CHECK_THROWS(t1.setNome("An00"));

        CHECK_THROWS(t1.setNome("ana"));

        CHECK_THROWS(t1.setNome("Ana "));

        CHECK_THROWS(t1.setNome(" Maria"));

        REQUIRE(t1.getNome().compare("")==0);

        t1.setNome("John");

        REQUIRE(t1.getNome().compare("John")==0);

        t1.setNome("John Travolta");

        REQUIRE(t1.getNome().compare("John Travolta")==0);

    }

    TEST_CASE("valicadao de CodigoTitulo", "[CodigoTitulo]"){

        CodigoTitulo t1;

        CHECK_THROWS(t1.setCodigoTitulo("aaaaaaaaaa"));

        CHECK_THROWS(t1.setCodigoTitulo("CDB1234a678"));

        CHECK_THROWS(t1.setCodigoTitulo("aaa12345678"));

        CHECK_THROWS(t1.setCodigoTitulo("CDB123456"));

        t1.setCodigoTitulo("CDB12345678");

        REQUIRE(t1.getCodigoTitulo().compare("CDB12345678")==0);

        t1.setCodigoTitulo("CRAA1234567");

        REQUIRE(t1.getCodigoTitulo().compare("CRAA1234567")==0);

    }

    TEST_CASE("validacao de data", "[data]"){

        Data t1;

        CHECK_THROWS(t1.setData("12-04-1042"));

        CHECK_THROWS(t1.setData("15-06-200a"));

        CHECK_THROWS(t1.setData("30-02-2007"));

        CHECK_THROWS(t1.setData("31-04-2003"));

        CHECK_THROWS(t1.setData("29-02-2023"));

        t1.setData("15-05-2006");

        REQUIRE(t1.getData().compare("15-05-2006")==0);

        t1.setData("30-04-2003");

        REQUIRE(t1.getData().compare("30-04-2003")==0);

        t1.setData("29-02-2024");

        REQUIRE(t1.getData().compare("29-02-2024")==0);

    }

    TEST_CASE("validacao de cpf", "[cpf]"){

        CPF t1;

        CHECK_THROWS(t1.setCPF("000.123.12a-08"));

        CHECK_THROWS(t1.setCPF("000.000.123-99"));

        t1.setCPF("111.444.777-35");

        REQUIRE(t1.getCPF()=="111.444.777-35");

        t1.setCPF("083.422.731-21");

        REQUIRE(t1.getCPF()=="083.422.731-21");

    }