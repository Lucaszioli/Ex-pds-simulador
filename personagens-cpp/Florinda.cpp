#include "../personagens-hpp/Florinda.hpp"

Florinda::Florinda(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Florinda::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Florinda::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Florinda::pegarDescricao() 
{
    return "Não se misture com essa gentalha!";
}