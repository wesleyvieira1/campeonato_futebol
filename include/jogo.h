#ifndef JOGO_H
#define JOGO_H

#include "time_futebol.h"
#include "juiz.h"

/**
 * @brief Classe jogo que representa um jogo.
 * 
 * A classe jogo representa um jogo com time_futebol da casa, time_futebol visitante, juiz principal, gols do time_futebol da casa e gols do time_futebol visitante.
 * A classe possui métodos para registrar o resultado do jogo e exibir as informações do jogo.
 * A classe é composta por um time_futebol da casa, um time_futebol visitante e um juiz.
 * 
 */

class jogo {
    protected:
        time_futebol* time_casa; // time_futebol da casa
        time_futebol* time_visitante; // time_futebol visitante
        juiz* juiz_principal; // juiz principal
        int gols_time_casa; // gols do time_futebol da casa
        int gols_time_visitante; // gols do time_futebol visitante

    public:
        /**
         * @brief Construtor da classe jogo.
         * 
         * @param casa Time da casa.
         * @param visitante Time visitante.
         * @param juiz Juiz principal.
         */

        jogo(time_futebol* casa, time_futebol* visitante, juiz* juiz); // construtor

        void registrar_resultado(int gols_casa, int gols_visitante); // registra o resultado do jogo

        void exibir_informacoes() const; // exibe as informações do jogo
};

#endif // JOGO_H
