#include "time_futebol.h"
#include <iostream>

// construtor da classe time_futebol que inicializa o nome, o técnico e a pontuação do time_futebol
time_futebol::time_futebol(std::string n, tecnico* tecnico_time, int p) : nome(n), tecnico_time(tecnico_time), pontuacao(0) {}

// método para adicionar um jogador ao time_futebol
void time_futebol::adicionar_jogador(jogador* j) {
    jogadores.push_back(j);
}

// método para registrar o resultado da partida
void time_futebol::registrar_resultado(char resultado) {
    if (resultado == 'V') {
        pontuacao += 3;
    } else if (resultado == 'E') {
        pontuacao += 1;
    }
}

// método para exibir as informações do time_futebol
void time_futebol::exibir_informacoes() const {
    std::cout << "Nome do time: " << nome << ", Pontuacao: " << pontuacao << std::endl;
    for (auto jogador : jogadores) {
        std::cout << jogador->getNome() << std::endl;
    }
}

// retorna o nome do time_futebol
std::string time_futebol::getNome() const {
    return nome;
}

// retorna a pontuação do time_futebol
int time_futebol::getPontuacao() const {
    return pontuacao;
}

// sobrecarga do operador de menor que para comparar a pontuação
bool time_futebol::operator<(const time_futebol& outro) const {
    return pontuacao < outro.pontuacao;
}
