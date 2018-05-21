#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"


using namespace std;
/*------------------------Interface de apresentação de autenticação------------------------------*/
class IaAut
{
public:

    virtual int logar (Administrador *) = 0;

};

/*-------------------------Interface de serviço de autenticação----------------------------------*/

class IsAut
{
public:

    virtual bool autenticar (Administrador **, int tipoUsr) throw (runtime_error) = 0;

};

/*-----------------------------------------------------------------------------------------------*/

#endif // INTERFACES_H_INCLUDED
