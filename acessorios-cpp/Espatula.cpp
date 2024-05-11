#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Espatula.hpp"

Espatula::Espatula(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Espatula::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Espatula::getResistencia() 
{
    return this->resistencia;
}