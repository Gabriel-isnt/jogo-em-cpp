#include "../include/Caracter.h"

Caracter::Caracter(std::string nome, double vida, double escudo)
   : nome(nome), vida(vida), escudo(escudo) {}
        
// getters
std::string Caracter::getNome(){
        return nome;
}

double Caracter::getVida(){
        return vida;
}

double Caracter::getEscudo(){
        return escudo;
}

// setters
void Caracter::setNome(std::string nome){
        this->nome = nome;
}

void Caracter::setVida(double vida){
        this->vida = vida;
}

void Caracter::setEscudo(double escudo){
        this->escudo = escudo;
}
