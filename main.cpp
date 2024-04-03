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
