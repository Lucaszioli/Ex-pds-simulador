#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Garrafa.hpp"

Garrafa::Garrafa(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Garrafa::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Garrafa::gerarRuidoAtaque()
{
    return "splash splash";
}
