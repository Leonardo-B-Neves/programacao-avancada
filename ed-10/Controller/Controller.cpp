//Leonardo Baltazar Neves
//Rhian Felipe Silva de Lara
#include "Controller.h"

char Controller::requisitarValidacao(Login login){
    return persistencia.consultaLogin(login);
}

bool Controller::requistarCadastroTipo(Item item){
    try{
        return persistencia.adicionarTipo(item);
    }
    catch (std::exception ex)
    {
        return false;
    }
}

bool Controller::requistarExcluirTipo(Item item){
    try{
        return persistencia.excluirFisicaTipo(item);
    }
    catch (std::exception ex)
    {
        return false;
    }
}

bool Controller::requistarEntradaItens(Item item){
    try{
        return persistencia.somarItens(item);
    }
    catch (std::exception ex)
    {
        return false;
    }
}

bool Controller::requisitarRetiradaItens(Item item){
    try{
        return persistencia.subtrairItens(item);
    }
    catch (std::exception ex)
    {
        return false;
    }
}


std::vector<Item> Controller::requistarConsutaItens(){
    return persistencia.RetornarItens();
}