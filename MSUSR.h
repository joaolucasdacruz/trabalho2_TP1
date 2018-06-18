#ifndef MSUSR_H_INCLUDED
#define MSUSR_H_INCLUDED

#include "MACON.h"
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "interfaces.h"

class MsUsr : public IsUsr
/// Classe cuja instancia serve para criar, editar ou deletar conta de usuario
/// de acordo com o requisitado gerenciando o repositorio de usuarios.
{
private:

    const static int ADMINISTRADOR =3;
    const static int DESENVOLVEDOR =2;
    const static int LEITOR =1;

public:

/// Funcao que recebe os dados informados por meio do parametro usuario
/// para fazer a substituicao dos armazenados e o parametro tipo usuario
/// definir quais sao os dados que a conta exige.
    void editarDados(Usuario**, int**) throw (runtime_error);

/// Funcao que recebe por parametro usuario para ser removido do repositorio usuario
/// e o parametro tipo de usuario para definir o tipo de conta a ser excluida.
/// No caso da remocao de uma conta de Administrador,
/// excluir tambem os vocabularios administrados.
    void deletarUsuario(Usuario**, int**) throw (runtime_error);

/// Funcao que recebe do usuario os dados para a criacao da conta
/// e aramzena no repositorio de usuarios.
    void criarConta() throw (runtime_error);

};

#endif // MSUSR_H_INCLUDED
