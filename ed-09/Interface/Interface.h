//Leonardo Baltazar Neves
//Rhian Felipe Silva de Lara
#pragma once
#include <iostream>
#include <vector>
#include "../Item/ItemM.h"
#include "../Login/LoginM.h"
#include "../Controller/Controller.h"

class Interface 
{
private:
    Login login;
    Controller controlador;
public:
   Interface(){}
  void interfaceLogin();
  void interfaceGerente();
  void interfaceFuncionario();
  void interfaceConsulta();
  void interfaceCadastroTipo();
  void interfaceEntradaItens();
  void inferfaceExcluirTipoItem();
  void interfaceRetirarItens();
};