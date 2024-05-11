#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Armario.hpp"

Armario::Armario(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Armario::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Armario::getResistencia() 
{
    return this->resistencia;
}