#ifndef FLORINDA
#define FLORINDA

#include "../core-simulador-hpp/Personagem.hpp"

class Florinda : public Personagem
{
    public:
        Florinda(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};

#endif