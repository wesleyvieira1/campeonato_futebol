#include "tecnico.h"
#include <iostream>

using namespace std;

// construtor da classe técnico que inicializa o nome, a idade, o salário e a experiência do técnico
tecnico::tecnico(string n, int i, double s, int e)
    : membro_clube(n, i, s), experiencia(e) {}


// método para calcular o salário do técnico
double tecnico::calcular_salario() {
    return salario + (experiencia * 200);
}

// método para exibir as informações do técnico
void tecnico::exibir_informacoes() const {
    membro_clube::exibir_informacoes();
    cout << ", Experiência: " << experiencia << endl;
}

// retorna a experiência do técnico
int tecnico::getExperiencia() const {
    return experiencia;
}

// define a experiência do técnico
void tecnico::setExperiencia(int e) {
    experiencia = e;
}
