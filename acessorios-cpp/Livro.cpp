#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Livro.hpp"

Livro::Livro(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Livro::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Livro::gerarRuidoAtaque()
{
    return "cush cush";
}
