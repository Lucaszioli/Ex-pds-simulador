#ifndef GARRAFA
#define GARRAFA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Garrafa : public ArmaAtaque
{
    public:
        Garrafa(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};
#endif