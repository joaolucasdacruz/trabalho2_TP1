#ifndef LISTAUSR_H_INCLUDED
#define LISTAUSR_H_INCLUDED
#include<list>
#include "MACON.h"

using namespace std;

class ResultadoUSR
/// Classe que serve para armazenar o resultado de uma
/// operacao na lista e tambem, se necessario, os dados de
/// um usuario obtido em uma procura na lista.
{
private:

    Usuario usuario;

protected:

    int resultado;

public:
    const static int SUCESSO = 0;
    const static int FALHA   = 1;

    void setResultado(int resultado){
        this->resultado = resultado;
    }

    int getResultado() const {
        return resultado;
    }

     void setUsuario(const Usuario &usuario){
        this->usuario = usuario;
    }

    Usuario getUsuario() const {
        return usuario;
    }
};

class ListaUSR
/// Esta classe serve para armazenar usuarios do sistema
/// Assim como seus dados.
{

private:

    list<Usuario> lista;

public:

    const static int ADMINISTRADOR =3;
    const static int DESENVOLVEDOR =2;
    const static int LEITOR =1;

    ResultadoUSR pesquisar(Usuario, int);
    /// Procura na lista de usuarios do sistema
    /// um determinado usuario com o email e senha
    /// especificados. Retorna um objeto que indica
    /// se a busca foi ou não bem sucedida e também
    /// os dados do usuário caso ele tenha sido encontrao

    ResultadoUSR incluir(Usuario, int);
    /// Insere um novo usuário no sistema.
    /// o retorno indica se foi possivel ou nao inserir o novo usuario.
    /// nao sera possivel caso já exista um usuario no sistema com o
    /// novo email a ser cadastrado.

    ResultadoUSR substituir(Usuario, int);
    /// Substitui na lista de usuarios os dados do usuario logado

    bool vazia();
    /// Verifica se a lista de usuarios esta vazia
    /// Em caso afirmativo, eh retornado verdadeiro

};

#endif // LISTAUSR_H_INCLUDED
