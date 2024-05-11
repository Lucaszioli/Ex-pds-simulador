#ifndef ARMARIO
#define ARMARIO

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Armario : public ArmaDefesa
{
    public:
        Armario(string descricaoArma,int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif
