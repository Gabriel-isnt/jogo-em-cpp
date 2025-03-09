#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>


class Personagem{

private:
        std::string nome;

        double vida;
        double escudo;


public:
        Personagem(std::string nome, double vida, double escudo);

};


#endif
