#ifndef JUIZ_H
#define JUIZ_H

#include "pessoa.h"

/**
 * @brief Classe juiz que representa um juiz.
 * 
 * A classe juiz representa um juiz com nome, idade e partidas arbitradas.
 * A classe herda da classe pessoa e possui métodos para incrementar o número de partidas arbitradas e exibir as informações do juiz.
 * A classe sobrescreve o método exibir_informacoes da classe pessoa.
 */

class juiz : public pessoa {
    private:
        int partidas_arbitradas;

    public:
        /**
         * @brief Construtor da classe juiz.
         * 
         * @param n Nome do juiz.
         * @param i Idade do juiz.
         */
        juiz(std::string n, int i); // construtor

        void incrementar_partidas_arbitradas(); // incrementa o número de partidas arbitradas

        void exibir_informacoes() const override; // exibe as informações do juiz sobrecarregando o método da classe pessoa
};

#endif // JUIZ_H
