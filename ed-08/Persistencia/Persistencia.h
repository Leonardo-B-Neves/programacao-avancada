//Leonardo Baltazar Neves
//Rhian Felipe Silva de Lara
#pragma once
#include <iostream>
#include <vector>
#include "../Item/ItemM.h"
#include "../Login/LoginM.h"
class Persistencia{
private:

std::vector<Item> _itens;
std::vector<Login> _logins;

public:
std::string consultaLogin(Login login);

bool subtrairItens(Item item);

bool somarItens(Item item);

bool excluirFisicaTipo(Item item);

bool adicionarTipo(Item item);

int consultarQuantia(Item item);

bool consultarExistencia(Item item);


};