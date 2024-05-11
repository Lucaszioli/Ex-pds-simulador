#ifndef LIVRO
#define LIVRO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Livro : public ArmaAtaque
{
    public:
        Livro(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif