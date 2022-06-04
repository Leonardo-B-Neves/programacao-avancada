//Leonardo Baltazar Neves
//Rhian Felipe Silva de Lara
#pragma once
#include <iostream>
#include <vector>
#include "../Item/ItemM.h"

class Interface 
{
private:

public:
   Interface(){}
  void interfaceLogin();
  int interfaceGerente();
  int interfaceFuncionario();
  void interfaceConsulta(std::vector<Item>);
  Item interfaceCadastroTipo();
  Item interfaceEntradaItens();
  Item inferfaceExcluirTipoItem();
  Item interfaceRetirarItens();
};