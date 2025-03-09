#pragma once

#include <string>

class Caracter{

private:
        std::string nome;
        double vida;
        double escudo;


public:
        Caracter(std::string nome, double vida, double escudo);

public:

        // getters
        std::string getNome();
        double getVida();
        double getEscudo();

        // setters
        void setNome(std::string nome);
        void setVida(double vida);
        void setEscudo(double escudo);

};
