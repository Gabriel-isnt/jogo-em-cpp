#include "../include/Caracter.h"

#include <iostream>

using std::cout;


int main(){

        Caracter pessoa("gabriel", 132, 62);

        cout << pessoa.getNome();

        return 0;
}
