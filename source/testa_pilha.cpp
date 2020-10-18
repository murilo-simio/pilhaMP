// "Copyrigth 2020 Murilo"

#define CATCH_CONFIG_MAIN
#include "../include/catch.hpp"

#include "../include/testa_pilha.hpp"
#include "../include/pilha.hpp"

TEST_CASE("Testando pilha", "[pilha]") {
    pilhaArray PILHA;
    PILHA.createStack(5);
    REQUIRE(PILHA.size() == 5);
    REQUIRE(PILHA.isEmpty() == true);
    REQUIRE(PILHA.isFull() == false);


    SECTION("Testando metodo push") {
        PILHA.push(2);
        REQUIRE(PILHA.isEmpty() == false);
    }

    SECTION("Testando metodo pop") {
        PILHA.pop();
        REQUIRE(PILHA.isEmpty() == true);
        for (int i = 0; i < 4; i++) {
            PILHA.push(i);
        }
        REQUIRE(PILHA.size() == 5);
        REQUIRE(PILHA.pop().pilhaElem == 3);
        REQUIRE(PILHA.pop().pilhaElem == 2);
        REQUIRE(PILHA.isFull() == false);
        REQUIRE(PILHA.isEmpty() == false);
    }

    SECTION("Testando metodo top") {
        PILHA.push(69);
        REQUIRE(PILHA.top().pilhaElem == 69);
    }

    SECTION("Testando metodo setSize") {
        PILHA.setSize(19);
        REQUIRE(PILHA.size() == 19);
    }
}
