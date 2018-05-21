#ifndef MSAUT_CPP_INCLUDED
#define MSAUT_CPP_INCLUDED

#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"
#include "MAAUT.h"
#include "MSAUT.h"

bool MsAut:: autenticar(Administrador **usuario, int tipoUsr) throw(runtime_error)
{
    int resultado;

    Nome nome;
    Sobrenome sobrenome;
    Data aniversario;
    Email email;
    Senha senha;
    Telefone telefone;
    Endereco endereco;

    nome.setNome("Joao");
    sobrenome.setSobreNome("Barbosa");
    aniversario.setData("04/11/1995");
    telefone.setTelefone("6199990-8742");
    endereco.setEndereco("Avenida Paulista");


    email=(*usuario)->getEmail();
    senha =(*usuario)->getSenha();

    // email e senha que ativam trigger de sucesso :
    //"joao@gmail"
    //"Signal18"
    // email e senha que ativam trigger de erro de sistema :
    // "barbosa@yahoo"
    //"Senha291"

    if(email.getEmail() == "joao@gmail" && senha.getSenha() == "Signal18")
    {
        resultado = TRIGGER_SUCESSO;
    }
    else
    {
        if(email.getEmail() == "barbosa@yahoo" && senha.getSenha() == "Senha291")
            resultado=TRIGGER_ERRO_DE_SISTEMA;
        else
            resultado = TRIGGER_FALHA;
    }

    switch (resultado)
    {

    case TRIGGER_SUCESSO:
        if(tipoUsr == ADMINISTRADOR)
        {
            (*usuario)->setNome(nome);
            (*usuario)->setSobrenome(sobrenome);
            (*usuario)->setData(aniversario);
            (*usuario)->setEndereco(endereco);
            (*usuario)->setTelefone(telefone);
        }
        if(tipoUsr == DESENVOLVEDOR)
        {
            (*usuario)->setNome(nome);
            (*usuario)->setSobrenome(sobrenome);
            (*usuario)->setData(aniversario);
        }
        if(tipoUsr == LEITOR)
        {
            (*usuario)->setNome(nome);
            (*usuario)->setSobrenome(sobrenome);
        }
        return(true);
        break;

    case TRIGGER_FALHA:

        return(false);
        break;

    case TRIGGER_ERRO_DE_SISTEMA:
            throw runtime_error("erro de sistema");
        break;
    }

    return(false);

}

#endif
