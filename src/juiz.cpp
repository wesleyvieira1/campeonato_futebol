#include "juiz.h"
#include "pessoa.h"
#include <iostream>

// Construtor da classe juiz
juiz::juiz(std::string n, int i) : pessoa(n, i), partidas_arbitradas(0) {}

// Método para incrementar o número de partidas arbitradas
void juiz::incrementar_partidas_arbitradas() {
    partidas_arbitradas++;
}

// Método para exibir as informações do juiz
void juiz::exibir_informacoes() const {
    pessoa::exibir_informacoes();
    std::cout << ", Partidas Arbitradas: " << partidas_arbitradas << std::endl;
}
