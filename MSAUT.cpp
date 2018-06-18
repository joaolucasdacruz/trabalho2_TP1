#ifndef MSAUT_CPP_INCLUDED
#define MSAUT_CPP_INCLUDED

#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"
#include "MAAUT.h"
#include "MSAUT.h"
#include "MACON.h"

bool MsAut:: autenticar(Usuario **usuario, int tipoUsr, ListaUSR **lista) throw(runtime_error)
{
    ResultadoUSR resultado;
    resultado=(*lista)->pesquisar(**usuario,tipoUsr);

    if(resultado.getResultado() == ResultadoUSR::FALHA)
    {
        return(false);
    }

    switch(tipoUsr)
    {
        case LEITOR:
            (*usuario)->usuarioL.setNome(resultado.getUsuario().usuarioL.getNome());
            (*usuario)->usuarioL.setSobrenome(resultado.getUsuario().usuarioL.getSobrenome());
        break;
        case DESENVOLVEDOR:
            (*usuario)->usuarioD.setNome(resultado.getUsuario().usuarioD.getNome());
            (*usuario)->usuarioD.setSobrenome(resultado.getUsuario().usuarioD.getSobrenome());
            (*usuario)->usuarioD.setData(resultado.getUsuario().usuarioD.getData());
        break;
        case ADMINISTRADOR:
            (*usuario)->usuarioA.setNome(resultado.getUsuario().usuarioA.getNome());
            (*usuario)->usuarioA.setSobrenome(resultado.getUsuario().usuarioA.getSobrenome());
            (*usuario)->usuarioA.setData(resultado.getUsuario().usuarioA.getData());
            (*usuario)->usuarioA.setTelefone(resultado.getUsuario().usuarioA.getTelefone());
            (*usuario)->usuarioA.setEndereco(resultado.getUsuario().usuarioA.getEndereco());
        break;
    }

    return(true);
}
#endif
