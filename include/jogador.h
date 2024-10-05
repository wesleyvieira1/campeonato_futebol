#ifndef JOGADOR_H
#define JOGADOR_H

#include "membro_clube.h"

/**
 * @brief Classe jogador que representa um jogador.
 * 
 * A classe jogador representa um jogador com nome, idade, salário, posição e gols marcados.
 * A classe herda da classe membro_clube e possui métodos para calcular o salário, comparar os gols marcados e imprimir os dados do jogador.
 * A classe sobrescreve o método calcular_salario da classe membro_clube.
 */

class jogador : public membro_clube {
    private:
        std::string posicao; // posição do jogador - Adicionado std::
        int gols_marcados; // gols marcados pelo jogador

    public:
        /**
         * @brief Construtor da classe jogador.
         * 
         * @param n Nome do jogador.
         * @param i Idade do jogador.
         * @param s Salário do jogador.
         * @param p Posição do jogador.
         * @param g Gols marcados pelo jogador.
         */

        jogador(std::string n, int i, double s, std::string p, int g); // construtor

        double calcular_salario() override; // método para calcular o salário sobrescrevendo o método da classe base

        bool operator<(const jogador& j) const; // sobrecarga do operador de menor que

        // gets e sets
        std::string getPosicao() const; // retorna a posição

        void setPosicao(const std::string& p); // define a posição

        int getGolsMarcados() const; // retorna os gols marcados

        void setGolsMarcados(int g); // define os gols marcados
        
        void exibir_informacoes() const override; // exibe as informações do jogador sobrescrevendo o método da classe base

    };

#endif // JOGADOR_H
