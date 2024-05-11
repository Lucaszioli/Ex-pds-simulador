#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Fogao.hpp"

Fogao::Fogao(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Fogao::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Fogao::getResistencia() 
{
    return this->resistencia;
}