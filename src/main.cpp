#include <iostream>
#include "campeonato.h"
#include "time_futebol.h"
#include "jogo.h"
#include "tecnico_jogador.h"
#include "juiz.h"

/**
 * @file main.cpp
 * @brief Programa principal para simulação de um campeonato de futebol.
 *
 * Este programa cria um campeonato de futebol com quatro times, adiciona jogadores a esses times,
 * cria jogos entre os times e exibe as informações dos times e dos jogos. No final, exibe a 
 * classificação final do campeonato.
 *
 * Funcionalidades principais:
 * - Criação de objetos do tipo campeonato, técnico, técnico-jogador, time de futebol, jogador, juiz e jogo.
 * - Adição de jogadores aos times.
 * - Exibição das informações dos times.
 * - Registro dos resultados dos jogos.
 * - Adição de times e jogos ao campeonato.
 * - Exibição da classificação final do campeonato.
 * - Limpeza de memória alocada dinamicamente.
 *
 * @note Este programa assume que as classes campeonato, tecnico, tecnico_jogador, time_futebol, jogador, juiz e jogo
 *       estão definidas e implementadas em outros arquivos.
 *
 * @return 0 Indica que o programa foi executado com sucesso.
 */

int main() {
    // Criando o objeto do tipo campeonato
    campeonato campeonato_quadrangular("--==Campeonato Quadrangular==--");

    printf("\n-==Sistema de Gerenciamento de Campeonato de Futebol==- \n");

    // Criando os objetos do tipo técnico
    tecnico* t1 = new tecnico("Tite", 63, 10.000, 20);
    tecnico* t2 = new tecnico("Felipão", 67, 32.0000, 25);
    tecnico* t3 = new tecnico("Zagallo", 50, 25.000, 30);
    tecnico_jogador* tj = new tecnico_jogador("Luiz", 35, 4000.0, "Atacante", 5, 10, 500.0);

    // Criando os objetos do tipo time
    time_futebol* time1 = new time_futebol("Botafogo", t1);
    time_futebol* time2 = new time_futebol("Flamengo", t2);
    time_futebol* time3 = new time_futebol("Chapecoense", t3);
    time_futebol* time4 = new time_futebol("Fluminense", tj);

    // Adicionando jogadores aos times
    time1->adicionar_jogador(new jogador("Ronaldo", 20, 1000.0, "Atacante", 0));
    time1->adicionar_jogador(new jogador("Jose", 21, 1100.0, "Meio-campo", 0));
    time1->adicionar_jogador(new jogador("Eduardo", 22, 1200.0, "Defensor", 0));
    time1->adicionar_jogador(new jogador("Antonio", 23, 1300.0, "Goleiro", 0));
    time1->adicionar_jogador(new jogador("Robson", 24, 1400.0, "Atacante", 0));

    time2->adicionar_jogador(new jogador("Carlos", 25, 1500.0, "Meio-campo", 0));
    time2->adicionar_jogador(new jogador("Pedro", 26, 1600.0, "Defensor", 0));
    time2->adicionar_jogador(new jogador("Felipe", 27, 1700.0, "Goleiro", 0));
    time2->adicionar_jogador(new jogador("Tijolinho", 28, 1800.0, "Atacante", 0));
    time2->adicionar_jogador(new jogador("Camarao", 29, 1900.0, "Meio-campo", 0));

    time3->adicionar_jogador(new jogador("Tiago", 30, 2000.0, "Defensor", 0));
    time3->adicionar_jogador(new jogador("Talisson", 31, 2100.0, "Goleiro", 0));
    time3->adicionar_jogador(new jogador("Jonas", 32, 2200.0, "Atacante", 0));
    time3->adicionar_jogador(new jogador("Camargo", 33, 2300.0, "Meio-campo", 0));
    time3->adicionar_jogador(new jogador("Silviano", 34, 2400.0, "Defensor", 0));

    time4->adicionar_jogador(new jogador("Roberinho", 35, 2500.0, "Goleiro", 0));
    time4->adicionar_jogador(new jogador("Bruno", 36, 2600.0, "Atacante", 0));
    time4->adicionar_jogador(new jogador("Jonata", 37, 2700.0, "Meio-campo", 0));
    time4->adicionar_jogador(new jogador("Leal", 38, 2800.0, "Defensor", 0));
    time4->adicionar_jogador(new jogador("Leonardo", 39, 2900.0, "Goleiro", 0));


    // Exibindo informações dos times
    // Supondo que time1, time2, time3 e time4 sejam ponteiros para um objeto de time
    time_futebol* times[] = {time1, time2, time3, time4}; // Cria um array de ponteiros

    for (int i = 0; i < 4; ++i) {
        printf("\n");
        times[i]->exibir_informacoes(); // Chama o método de exibição
        printf("\n"); // Imprime nova linha
    }

    // Adicionando times ao campeonato
    campeonato_quadrangular.adicionar_time(time1);
    campeonato_quadrangular.adicionar_time(time2);
    campeonato_quadrangular.adicionar_time(time3);
    campeonato_quadrangular.adicionar_time(time4);

    // Criando os objetos do tipo juiz
    juiz* juiz1 = new juiz("Americo", 30);
    juiz* juiz2 = new juiz("Gabriel", 55);

    // Criando os objetos do tipo jogo e registrando os resultados
    jogo* jogo1 = new jogo(time1, time2, juiz1);
    jogo* jogo2 = new jogo(time1, time3, juiz2);
    jogo* jogo3 = new jogo(time1, time4, juiz1);
    jogo* jogo4 = new jogo(time2, time3, juiz2);
    jogo* jogo5 = new jogo(time2, time4, juiz1);
    jogo* jogo6 = new jogo(time3, time4, juiz2);

    printf("\n-==Resultados dos Jogos==- \n");

    jogo1->registrar_resultado(4, 1);
    jogo2->registrar_resultado(0, 1);
    jogo3->registrar_resultado(5, 2);
    jogo4->registrar_resultado(2, 3);
    jogo5->registrar_resultado(4, 2);
    jogo6->registrar_resultado(0, 0);

    // Exibindo informações dos jogos
    jogo* jogos[] = {jogo1, jogo2, jogo3, jogo4};

    for (int i = 0; i < 4; ++i) {
        printf("\n");
        jogos[i]->exibir_informacoes(); // Chama o método de exibição
        printf("\n"); // Imprime nova linha
    }

    // Adicionando jogos ao campeonato
    campeonato_quadrangular.adicionar_jogo(jogo1);
    campeonato_quadrangular.adicionar_jogo(jogo2);
    campeonato_quadrangular.adicionar_jogo(jogo3);
    campeonato_quadrangular.adicionar_jogo(jogo4);
    campeonato_quadrangular.adicionar_jogo(jogo5);
    campeonato_quadrangular.adicionar_jogo(jogo6);

    // Exibindo classificação final
    campeonato_quadrangular.exibir_classificacao();

    // Limpeza de memória 
    for (int i = 0; i < 4; ++i) {
        delete times[i]; // Deleta cada time
    }
    
    tecnico *tecnicos[] = {t1, t2, t3};
    for (int i = 0; i < 3; ++i) {
        delete tecnicos[i]; // Deleta cada técnico
    }

    juiz *juizes[] = {juiz1, juiz2};
    for (int i = 0; i < 2; ++i) {
        delete juizes[i]; // Deleta cada juiz
    }

    for (int i = 0; i < 6; ++i) {
        delete jogos[i]; // Deleta cada jogo
    }

    return 0;
}