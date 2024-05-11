#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Regua.hpp"

Regua::Regua(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Regua::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Regua::gerarRuidoAtaque()
{
    return "Toing toing";
}
