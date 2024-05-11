#ifndef ESPATULA
#define ESPATULA

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Espatula : public ArmaDefesa
{
    public:
        Espatula(string descricaoArma,int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif