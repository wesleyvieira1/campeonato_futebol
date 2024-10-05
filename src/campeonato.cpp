#include "campeonato.h"
#include "jogo.h"
#include <iostream>
#include <algorithm>

// Construtor da classe campeonato
campeonato::campeonato(std::string nome) : nome_campeonato(std::move(nome)) {}

// Método para adicionar um time_futebol ao campeonato
void campeonato::adicionar_time(time_futebol *t) {
    times.push_back(t);
}

// Método para adicionar um jogo ao campeonato
void campeonato::adicionar_jogo(jogo *j) {
    jogos.push_back(j);
}

// Método para exibir a classificação do campeonato
void campeonato::exibir_classificacao() const {
    std::vector<time_futebol*> times_ordenados = times;

    // Ordena os times pelo número de pontos
    std::sort(times_ordenados.begin(), times_ordenados.end(), [](time_futebol* t1, time_futebol* t2) {
         return t1->getPontuacao() > t2->getPontuacao();
    });

    // Exibe a classificação
    std::cout << "\nClassificacao do campeonato " << nome_campeonato << std::endl;
    for (int i = 0; i < times_ordenados.size(); i++) {
        std::cout << i + 1 << " lugar: " << times_ordenados[i]->getNome() << " - " << times_ordenados[i]->getPontuacao() << " pontos" << std::endl;
    }
}
