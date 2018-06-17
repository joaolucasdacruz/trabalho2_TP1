#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "MACON.h"
#include "ListaUSR.h"


using namespace std;
/*------------------------Interface de apresenta��o de autentica��o------------------------------*/
class IaAut
{
public:

///Pede ao usu�rio o Email e a senha
///retorna um inteiro correspondente  ao tipo de conta do usu�rio
///leitor, desenvolvedor ou administrador ou correspondente a uma falha no login.
    virtual int logar (Usuario *, ListaUSR *) = 0;

};

/*-------------------------Interface de servi�o de autentica��o----------------------------------*/

class IsAut
{
public:

///Recebe um usuario, um tipo de usuario e uma lista de usuarios
///retorna um verdadeiro se o usuario foi logado ou falso caso contrario.
    virtual bool autenticar (Usuario **, int tipoUsr,ListaUSR **) throw (runtime_error) = 0;

};

/*-----------------------Interface de apresenta��o de gest�o de usuario---------------------------*/

class IaUsr
{
public:

///Recebe um usuario e um tipo de usuario
///Apresenta opcoes de acoes ao usuario.
    virtual void opcoesDeUsuario(Usuario*, int *)=0;

///Recebe um usuario e um tipo de usuario
///Apresenta os dados armazenados para o usuario.
    virtual void mostrarDados(Usuario usuario, int tipoUsr);
    //virtual void criarConta(int) = 0;
    //virtual void deletarUsuario(Usuario*, int*);
    //virtual void editarDados(Usuario*, int*);
};

/*----------------------Interface de servi�o de gest�o de usuario---------------------------------*/

class IsUsr
{

 public:

///Recebe um usuario e um tipo de usuario
///Substitui os dados do usuario no sistema.
  virtual void editarDados(Usuario**, int**) throw (runtime_error) =0;

///Recebe um usuario e um tipo de usuario
///Retira o cadastro do usuario do sistema.
  virtual void deletarUsuario(Usuario**, int**) throw (runtime_error) = 0;

///Armazena os dados do usuario no sistema.
  virtual void criarConta() throw (runtime_error) = 0;

};
#endif // INTERFACES_H_INCLUDED
