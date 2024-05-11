#ifndef PIA
#define PIA

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Pia : public ArmaDefesa
{
    public:
        Pia(string descricaoArma,int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif