#ifndef FOGAO
#define FOGAO

#include "../core-simulador-hpp/ArmaDefesa.hpp"

class Fogao : public ArmaDefesa
{
    public:
        Fogao(string descricaoArma,int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif