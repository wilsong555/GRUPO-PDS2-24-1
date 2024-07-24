#ifndef LIG4_HPP
#define LIG4_HPP

#include "Jogo.hpp"
#include <iostream>
#include <string>

using namespace std;

class Lig4 : public Jogo {
  public:
    Lig4(int num_linha, int num_coluna) : Jogo(num_linha, num_coluna) {}
    bool jogar(int coluna, string jogador);
    bool verificar_vencedor() override;
};

#endif
