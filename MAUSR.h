#ifndef MAUSR_H_INCLUDED
#define MAUSR_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"
#include "MACON.h"


using namespace std;

class MaUsr : public IaUsr {
/// Classe de apresentação que faz os dialogos com o usuario
/// para gerenciamento de conta do usuario.

private:

    const static int ADMINISTRADOR =3;
    const static int DESENVOLVEDOR =2;
    const static int LEITOR =1;

/// Metodo que apresenta os dados da conta do usuario.
/// Os parametros recebidos servem para definir os dados a serem retornados no caso do tipo de usuario
/// e o parametro usuario com os dados da conta a serem apresentados.
    void mostrarDados(Usuario, int);

public:

/// Metodo que fornece as opcoes ao usuario para usar o servico.
/// Recebe como parametro os dados do usuario a serem gerenciados
/// e o tipo de usuario para defenir tipo de conta e servicos permitidos.
    void opcoesDeUsuario(Usuario *, int*);

};

#endif

