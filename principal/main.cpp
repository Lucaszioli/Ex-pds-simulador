#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Caneta.hpp"
#include "../acessorios-hpp/Garrafa.hpp"
#include "../acessorios-hpp/Bola.hpp"
#include "../acessorios-hpp/Regua.hpp"
#include "../acessorios-hpp/Livro.hpp"
#include "../acessorios-hpp/Porta.hpp"
#include "../acessorios-hpp/Pia.hpp"
#include "../acessorios-hpp/Espatula.hpp"
#include "../acessorios-hpp/Fogao.hpp"
#include "../acessorios-hpp/Armario.hpp"

#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Madruga.hpp"
#include "../personagens-hpp/Quico.hpp"
#include "../personagens-hpp/Florinda.hpp"
#include "../personagens-hpp/Girafales.hpp"
#include "../personagens-hpp/Chiquinha.hpp"

#include "../core-simulador-hpp/Simulador.hpp"


using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Prata",0,23);
    ArmaAtaque* arma3 = new Caneta("Caneta Bic",0,5);
    ArmaAtaque* arma4 = new Garrafa("Garrafa de Fanta",0,20);
    ArmaAtaque* arma5 = new Bola("Bola Quadrada",0,22);
    ArmaAtaque* arma6 = new Regua("Regua de Madeira",0,15);
    ArmaAtaque* arma7 = new Livro("Livro de Matematica",0,10);
    
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* porta = new Porta("Porta de Madeira", 2);
    ArmaDefesa* pia = new Pia("Pia de Marmore", 3);
    ArmaDefesa* esp = new Espatula("Espatula de Plastico", 4);
    ArmaDefesa* fogao = new Fogao("Fogao de 4 Bocas", 5);
    ArmaDefesa* armario = new Armario("Armario de Cozinha", 6);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, armario);
    Personagem* p3 = new Madruga(1, "Madruga Eq1", 100, arma4, porta);
    Personagem* p2 = new Quico(2, "Quico Eq2", 100, arma5, esp);
    Personagem* p4 = new Florinda(2, "Florinda Eq2", 100, arma2, fogao);
    Personagem* p5 = new Girafales(1, "Girafales Eq1", 100, arma3, pia);
    Personagem* p6 = new Chiquinha(2, "Chiquinha Eq2", 100, arma6, escudo);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}