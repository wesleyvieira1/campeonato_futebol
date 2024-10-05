#ifndef TECNICO_JOGADOR_H
#define TECNICO_JOGADOR_H

#include "jogador.h"
#include "tecnico.h"

/**
 * @brief Classe tecnico_jogador que representa um técnico jogador.
 * 
 * A classe tecnico_jogador representa um técnico jogador com nome, idade, salário, papel, gols, experiência e bônus do técnico jogador.
 * A classe é derivada das classes jogador e técnico.
 * A classe sobrescreve o método calcular_salario da classe jogador.
 * A classe possui um método para retornar o bônus do técnico jogador.
 * A classe sobrescreve o operador de inserção para imprimir as informações do técnico jogador.
 */

class tecnico_jogador : public jogador, public tecnico {
    protected:
        double bonus_duplo_papel;

    public:
        /**
         * @brief Construtor da classe tecnico_jogador.
         * 
         * @param n Nome do técnico jogador.
         * @param i Idade do técnico jogador.
         * @param s Salário do técnico jogador.
         * @param p Papel do técnico jogador.
         * @param g Gols do técnico jogador.
         * @param e Experiência do técnico jogador.
         * @param b Bônus do técnico jogador.
         */
        
        tecnico_jogador(std::string n, int i, double s, std::string p, int g, int e, double b); 
        
        void exibir_informacoes() const override; // exibe as informações do técnico jogador

        double calcular_salario() override; // método para calcular o salário
        
        double getBonusDuploPapel() const; // retorna o bônus

        friend std::ostream& operator<<(std::ostream& os, const tecnico_jogador& tj); // sobrecarga do operador de inserção
};

#endif // TECNICO_JOGADOR_H
