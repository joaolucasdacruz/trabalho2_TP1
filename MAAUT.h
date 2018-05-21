#ifndef MAAUT_H_INCLUDED
#define MAAUT_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"

using namespace std;



class MAAUT : public IaAut {

private:

    const static int ADM =3;
    const static int DESENVOL =2;
    const static int LEITOR =1;

    //Administrador *usuario;

public:

    int logar(Administrador *);

};


#endif // MAAUT_H_INCLUDED
