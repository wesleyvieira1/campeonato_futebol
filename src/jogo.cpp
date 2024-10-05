#include "jogo.h"
#include <iostream>

using namespace std;

// construtor da classe jogo que inicializa o time_futebol da casa, o time_futebol visitante e o juiz principal
jogo::jogo(time_futebol* casa, time_futebol* visitante, juiz* juiz) 
    : time_casa(casa), time_visitante(visitante), juiz_principal(juiz),
      gols_time_casa(0), gols_time_visitante(0) {}

// registra o resultado do jogo
void jogo::registrar_resultado(int gols_c, int gols_v) {
    gols_time_casa = gols_c; // define os gols do time_futebol da casa
    gols_time_visitante = gols_v; // define os gols do time_futebol visitante
    
    // V - vitória, D - derrota, E - empate
    // incrementa o número de partidas arbitradas pelo juiz principal
    if (gols_time_casa > gols_time_visitante) {
        time_casa->registrar_resultado('V');
        time_visitante->registrar_resultado('D');
    } else if (gols_time_casa < gols_time_visitante) {
        time_casa->registrar_resultado('D');
        time_visitante->registrar_resultado('V');
    } else {
        time_casa->registrar_resultado('E');
        time_visitante->registrar_resultado('E');
    }
}

// exibe as informações do jogo
void jogo::exibir_informacoes() const {
    cout << "Jogo: " << time_casa->getNome() << " " << gols_time_casa << " - " 
    << gols_time_visitante << " " << time_visitante->getNome() << endl;
}
