#include "membro_clube.h"
#include <iostream>

using namespace std;

// construtor da classe membro_clube que inicializa o nome, a idade e o salário do membro do clube
membro_clube::membro_clube(string n, int i, double s) : pessoa(n, i), salario(s) {}

// retorna o salário do membro do clube
double membro_clube::getSalario() const {
    return salario;
}

// define o salário do membro do clube
void membro_clube::setSalario(double s) {
    salario = s;
}

//Calcula o salário do membro do clube
double membro_clube::calcular_salario() {
    return salario;
}

// sobrecarga do operador de inserção para exibir as informações do membro do clube
std::ostream& operator<<(std::ostream& os, const membro_clube& mc) {
    os << "Nome: " << mc.getNome() << ", Idade: " << mc.getIdade() << ", Salário: " << mc.getSalario();
    return os;
}

