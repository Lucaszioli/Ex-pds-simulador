#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Pia.hpp"

Pia::Pia(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Pia::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Pia::getResistencia() 
{
    return this->resistencia;
}