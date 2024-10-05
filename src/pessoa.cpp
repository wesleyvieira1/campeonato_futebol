#include "pessoa.h"
#include <iostream>

using namespace std;

// inicialização do contador
int pessoa::contador = 0;

// construtor da classe pessoa que inicializa o nome e a idade da pessoa e incrementa o contador
pessoa::pessoa(string n, int i) : nome(n), idade(i) {
    contador++;
}

// destrutor da classe pessoa que decrementa o contador
pessoa::~pessoa() {
    contador--;
}

// retorna o nome da pessoa
string pessoa::getNome() const {
    return nome;
}

// define o nome da pessoa
void pessoa::setNome(const string& n) {
    nome = n;
}

// retorna a idade da pessoa
int pessoa::getIdade() const {
    return idade;
}

// define a idade da pessoa
void pessoa::setIdade(int i) {
    idade = i;
}

// exibe as informações da pessoa
void pessoa::exibir_informacoes() const {
    cout << "Nome: " << nome << ", Idade: " << idade;
}

// sobrecarga do operador de igualdade
bool pessoa::operator==(const pessoa& p) const {
    return nome == p.getNome() && idade == p.getIdade();
}
