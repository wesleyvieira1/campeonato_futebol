#ifndef PESSOA_H
#define PESSOA_H

#include <string>

/**
 * @brief Classe pessoa que representa uma pessoa.
 * 
 * A classe pessoa representa uma pessoa com nome e idade.
 * A classe possui um contador de objetos que é incrementado.
 */

class pessoa {
    protected:
        std::string nome; // nome da pessoa
        int idade; // idade da pessoa
        static int contador; // contador de objetos

    public:
        /**
         * @brief Construtor da classe pessoa.
         * 
         * @param n Nome da pessoa.
         * @param i Idade da pessoa.
         */
        pessoa(std::string n, int i = 0); // construtor
        
        virtual ~pessoa(); // destrutor

        // gets e sets
        std::string getNome() const; // retorna o nome 

        void setNome(const std::string& n); // define o nome 

        int getIdade() const; // retorna a idade

        void setIdade(int i); // define a idade

        virtual void exibir_informacoes() const = 0; // método virtual puro exibe as informações

        bool operator==(const pessoa& p) const; // sobrecarga do operador de igualdade
    };

#endif // PESSOA_H
