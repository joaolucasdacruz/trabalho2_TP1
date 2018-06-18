#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "MACON.h"
#include "ListaUSR.h"


using namespace std;
/*------------------------Interface de apresentação de autenticação------------------------------*/
class IaAut
///Esta classe faz a interface que requisita
///a funcao de logar no sistema.

{
public:

///Pede ao usuário o Email e a senha
///retorna um inteiro correspondente  ao tipo de conta do usuário
///leitor, desenvolvedor ou administrador ou correspondente a uma falha no login.
    virtual int logar (Usuario *, ListaUSR *) = 0;

};

/*-------------------------Interface de serviço de autenticação----------------------------------*/

class IsAut
///Esta classe faz a interface que requisita
///requisita o método que faz comparação a ser feita entre
///o email e senha digitados pelo usuário e aqueles presentes no sistema.
///Tal método está presente na classe de serviço de autenticação.


{
public:

///Recebe um usuario, um tipo de usuario e uma lista de usuarios
///retorna um verdadeiro se o usuario foi logado ou falso caso contrario.
    virtual bool autenticar (Usuario **, int tipoUsr,ListaUSR **) throw (runtime_error) = 0;

};

/*-----------------------Interface de apresentação de gestão de usuario---------------------------*/

class IaUsr

{
public:

///Recebe um usuario e um tipo de usuario
///Apresenta opcoes de acoes ao usuario.
    virtual void opcoesDeUsuario(Usuario*, int *)=0;
    //virtual void criarConta(int) = 0;
    //virtual void deletarUsuario(Usuario*, int*);
    //virtual void editarDados(Usuario*, int*);
};

/*----------------------Interface de serviço de gestão de usuario---------------------------------*/

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
