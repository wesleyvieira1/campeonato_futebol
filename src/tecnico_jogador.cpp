#include "tecnico_jogador.h"
#include "jogador.h"
#include <iostream>


// construtor da classe tecnico_jogador que inicializa o nome, a idade, o salário, o papel, o gols, a experiência e o bônus do técnico jogador
tecnico_jogador::tecnico_jogador(std::string n, int i, double s, std::string p, int g, int e, double b)
    : jogador(n, i, s, p, g), tecnico(n, i, s, e), bonus_duplo_papel(b) {};

// método para exibir as informações do técnico jogador
void tecnico_jogador::exibir_informacoes() const {
    jogador::exibir_informacoes(); // Exibe informações do jogador
    std::cout << "Bônus: " << bonus_duplo_papel << std::endl; // Exibe o bônus
}

// método para calcular o salário do técnico jogador
double tecnico_jogador::calcular_salario() {
    return jogador::calcular_salario() + tecnico::calcular_salario() + bonus_duplo_papel;
}

// retorna o bônus do técnico jogador
double tecnico_jogador::getBonusDuploPapel() const {
    return bonus_duplo_papel;
}

// sobrecarga do operador de inserção para exibir as informações do técnico jogador
std::ostream& operator<<(std::ostream& os, const tecnico_jogador& tj) {
    os << static_cast<const jogador&>(tj) << ", Experiência: " << tj.getExperiencia()
       << ", Bônus: " << tj.getBonusDuploPapel();
    return os;
}