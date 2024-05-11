#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Bola.hpp"

Bola::Bola(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Bola::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Bola::gerarRuidoAtaque()
{
    return "boing boing";
}
