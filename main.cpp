#include <iostream>
#include "MAAUT.h"
#include "MAAUT.cpp"
//#include "Dominios.cpp"
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "Entidades.cpp"
#include "interfaces.h"
#include "MSAUT.h"
#include "MSAUT.cpp"

using namespace std;

int main()
{
    int tipo=0;
    string nome;
    Nome namae;
    Administrador user;
    IaAut *log = new MAAUT();

    tipo=log->logar(&user);
    namae=user.getNome();
    nome = namae.getNome();

}
