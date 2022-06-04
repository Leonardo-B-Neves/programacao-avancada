//Leonardo Baltazar Neves
//Rhian Felipe Silva de Lara
#pragma once
#include <iostream>
#include <vector>
#include "../Item/ItemM.h"
#include "../Login/LoginM.h"
#include "../Persistencia/Persistencia.h"


class Controller{
private:
    Persistencia persistencia;
public:
    Controller(){}
    char requisitarValidacao(Login login);
    bool requistarCadastroTipo(Item item);
    bool requistarExcluirTipo(Item item);
    bool requistarEntradaItens(Item item);
    bool requisitarRetiradaItens(Item item);
    std::vector<Item> requistarConsutaItens();

};