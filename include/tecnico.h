#ifndef TECNICO_H
#define TECNICO_H

#include "membro_clube.h"

/**
 * @brief Classe técnico que representa um técnico.
 * 
 * A classe técnico representa um técnico com nome, idade, salário e experiência.
 * A classe herda da classe membro_clube e possui métodos para calcular o salário e imprimir os dados do técnico.
 * A classe sobrescreve o método calcular_salario da classe membro_clube.
 * A classe é derivada da classe membro_clube.
 */

class tecnico : public membro_clube {
    private:
        int experiencia; // experiência do técnico

    public:
        /**
         * @brief Construtor da classe técnico.
         * 
         * @param n Nome do técnico.
         * @param i Idade do técnico.
         * @param s Salário do técnico.
         * @param e Experiência do técnico.
         */
        
        tecnico(std::string n, int i, double s, int e); // construtor

        double calcular_salario() override; // método para calcular o salário

        void exibir_informacoes() const override; // exibe as informações do técnico

        int getExperiencia() const; // retorna a experiência

        void setExperiencia(int e); // define a experiência

};

#endif // TECNICO_H
