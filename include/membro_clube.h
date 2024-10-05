#ifndef MEMBRO_CLUBE_H
#define MEMBRO_CLUBE_H

#include "pessoa.h"

/**
 * @brief Classe abstrata que representa um membro do clube.
 * 
 * A classe membro_clube representa um membro do clube com nome, idade e salário.
 * A classe é abstrata e possui um método virtual puro para calcular o salário.
 * A classe é derivada da classe pessoa.
 */

class membro_clube : public pessoa {
    protected:
        double salario; // salário do membro do clube

    public:
        /**
         * @brief Construtor da classe membro_clube.
         * 
         * @param n Nome do membro do clube.
         * @param i Idade do membro do clube.
         * @param s Salário do membro do clube.
         */

        membro_clube(std::string n, int i, double s); // construtor

        double getSalario() const; // retorna o salário

        void setSalario(double s); // define o salário
        
        virtual double calcular_salario() = 0; // método virtual puro para calcular o salário

        friend std::ostream& operator<<(std::ostream& os, const membro_clube& m); // sobrecarga do operador de inserção
    };

#endif // MEMBRO_CLUBE_H
