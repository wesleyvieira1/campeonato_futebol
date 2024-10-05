#include "jogador.h"
#include "membro_clube.h"
#include "pessoa.h"
#include <iostream>

using namespace std;

// construtor da classe jogador que inicializa o nome, a idade, o salário, a posição e os gols marcados do jogador
jogador::jogador(string n, int i, double s, string p, int g)
    : membro_clube(n, i, s), posicao(p), gols_marcados(g) {};

// Método para exibir as informações do jogador
void jogador::exibir_informacoes() const {
    membro_clube::exibir_informacoes();
    cout << ", Posição: " << posicao << ", Gols: " << gols_marcados << endl;
}

// método para calcular o salário do jogador
double jogador::calcular_salario() {
    return salario + (gols_marcados * 100);
}

// sobrecarga do operador de menor que para comparar os gols marcados
bool jogador::operator<(const jogador& j) const {
    return gols_marcados < j.gols_marcados;
}

// retorna a posição do jogador
string jogador::getPosicao() const {
    return posicao;
}

// define a posição do jogador
void jogador::setPosicao(const string& p) {
    posicao = p;
}

// retorna os gols marcados pelo jogador
int jogador::getGolsMarcados() const {
    return gols_marcados;
}

// define os gols marcados pelo jogador
void jogador::setGolsMarcados(int g) {
    gols_marcados = g;
}
