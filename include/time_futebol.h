#ifndef TIME_H
#define TIME_H

#include <string>
#include <vector>
#include "tecnico.h"
#include <memory>   
#include "jogador.h"

/**
 * @brief Classe time_futebol que representa um time_futebol.
 * 
 * A classe time_futebol representa um time_futebol com nome, técnico, jogadores e pontuação.
 * A classe possui métodos para adicionar um jogador ao time_futebol, registrar o resultado da partida, exibir as informações do time_futebol, retornar a pontuação do time_futebol e retornar o nome do time_futebol.
 * A classe é composta por um técnico e um vetor de jogadores.
 */
class time_futebol {
    protected:
        std::string nome; // nome do time_futebol
        tecnico* tecnico_time; // técnico do time_futebol
        std::vector<jogador*> jogadores; // vetor de jogadores
        int pontuacao; // pontuação do time_futebol

    public:
        /**
         * @brief Construtor da classe time_futebol.
         * 
         * @param n Nome do time_futebol.
         * @param tecnico Técnico do time_futebol.
         */
        time_futebol(std::string n, tecnico* tecnico_time = nullptr, int p = 0); // construtor

        void adicionar_jogador(jogador* j); // adiciona um jogador ao time_futebol

        void registrar_resultado(char resultado); // registra o resultado da partida

        void exibir_informacoes() const; // exibe as informações do time_futebol

        bool operator<(const time_futebol& t) const; // sobrecarga do operador de menor que

        std::string getTecnico() const; // retorna o técnico do time_futebol
        
        int getPontuacao() const; // retorna a pontuação do time_futebol

        std::string getNome() const; // retorna o nome do time_futebol
        
        friend std::ostream& operator<<(std::ostream& os, const time_futebol& t); // sobrecarga do operador de inserção
};

#endif // TIME_H
