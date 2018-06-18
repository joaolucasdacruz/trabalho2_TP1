#ifndef MAAUT_H_INCLUDED
#define MAAUT_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"
#include "MACON.h"
#include "ListaUSR.h"

using namespace std;



class MAAUT : public IaAut {
/// Classe de apresentação que faz os dialogos com o usuario
/// No momento da efetuaçao do login
private:

    const static int ADMINISTRADOR =3;
    const static int DESENVOLVEDOR =2;
    const static int LEITOR =1;

    //Administrador *usuario;

public:

    int logar(Usuario *, ListaUSR *);
/// Metodo que pede ao usuario seus dados para a realizacao do login e os armazena.
/// Os parametros recebidos servem para ser passados para o metodo que realiza o serviço
/// de autenticaçao, tais parametros sao a lista que contem os usuarios cadastrados no sistema
/// E o parametro que armazena o email e a senha para serem comparados.
/// O valor inteiro retornado indica o tipo de usuario logado.
};


#endif // MAAUT_H_INCLUDED
