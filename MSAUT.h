#ifndef MSAUT_H_INCLUDED
#define MSAUT_H_INCLUDED

#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"
#include "MACON.h"


class MsAut : public IsAut{
/// Classe cuja instancia serve para comparar os dados de login
/// fornecidos pelo usuario no metodo "logar" com os dados de
/// email e senha presentes nos usuarios da lista.

private:



public:

    const static int ADMINISTRADOR =3 ;
    const static int DESENVOLVEDOR = 2 ;
    const static int LEITOR = 1;


    bool autenticar(Usuario **, int, ListaUSR **) throw (runtime_error);
/// Compara a senha e Email no parametro usuario com os presentes na lista
/// caso encontre, o parametro usuario que eh recebido por referencia,
/// eh modificado e eh armazenado nele os dados do usuario encontrado na lista
/// Retorna um booleano que representa sucesso ou falha na autenticaçao
};

#endif // MSAUT_H_INCLUDED
