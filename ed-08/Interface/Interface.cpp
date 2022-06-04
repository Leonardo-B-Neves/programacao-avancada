//Leonardo Baltazar Neves
//Rhian Felipe Silva de Lara
#include "Interface.h"
using namespace std;

void Interface::interfaceLogin(){
  Login login;
  cout << endl << "=====|DEPOSITO SYSTEM RHILEO|=====" << endl;
  cout << "Digite sua Nome: ";
  cin >> login._nome;
  cout << "Digite sua senha: "
  cin >> login._senha;
  Controller controlador;
    Controller.requisitarValidacao(login);
}

int Interface::interfaceGerente(){
  
}


int Interface::interfaceFuncionario(){
  
}

void Interface::interfaceConsulta(std::vector<Item>){
  
}

Item Interface::interfaceCadastroTipo(){

}


Item Interface::interfaceEntradaItens(){
    
}

Item Interface::inferfaceExcluirTipoItem(){
  
}

Item Interface::interfaceRetirarItens(){
  
}

