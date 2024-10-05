#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <string>
#include <vector>
#include "time_futebol.h"
#include "jogo.h"

/**
 * @brief Classe campeonato que representa um campeonato.
 * 
 * A classe campeonato representa um campeonato com nome, times e jogos.
 * A classe possui métodos para adicionar um time ao campeonato, adicionar um jogo ao campeonato e exibir a classificação do campeonato.
 * A classe é composta por um vetor de times e um vetor de jogos.
 * 
 */
class campeonato {
    protected:
        std::string nome_campeonato; // Nome do campeonato
        std::vector<time_futebol*> times; // Vetor de times
        std::vector<jogo*> jogos; // Vetor de jogos

    public:
        /**
         * @brief Construtor da classe campeonato.
         * 
         * @param nome Nome do campeonato.
         * 
         * 
         */
        
        campeonato(std::string nome); // Construtor

        void adicionar_time(time_futebol* t); // adiciona um time ao campeonato

        void adicionar_jogo(jogo* j); // adiciona um jogo ao campeonato

        void exibir_classificacao() const; // exibe a classificação do campeonato
    };

#endif // CAMPEONATO_H
