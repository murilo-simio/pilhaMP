// "Copyrigth 2020 Murilo"

#define CATCH_CONFIG_MAIN

#include "../include/testa_pilha.hpp"
#include "../include/pilha.hpp"
#include "../include/catch.hpp"

TEST_CASE("Testando pilha", "[pilha]") {
    pilhaArray PILHA;
    PILHA.createStack(5);
    REQUIRE(PILHA.size() == 5);

}
