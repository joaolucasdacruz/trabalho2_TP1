#ifndef MSAUT_H_INCLUDED
#define MSAUT_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"


class MsAut : public IsAut{


private:



public:

    const static int ADMINISTRADOR =1 ;
    const static int DESENVOLVEDOR = 2 ;
    const static int LEITOR = 3;

    const static int TRIGGER_SUCESSO = 10;
    const static int TRIGGER_FALHA = 100;
    const static int TRIGGER_ERRO_DE_SISTEMA = 999;


    bool autenticar(Administrador **, int) throw (runtime_error);

};

#endif // MSAUT_H_INCLUDED
