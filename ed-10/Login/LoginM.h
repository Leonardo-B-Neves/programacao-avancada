//Leonardo Baltazar Neves
//Rhian Felipe Silva de Lara
#pragma once 
#include <iostream>


class Login {
private:  
 std::string _nome;
 std::string _senha;
 char _tipoUsuario;
public:
Login(){}
//GETTERS
std::string getNome(){
  return _nome;
}

std::string getSenha(){
   return _senha;
}

char getTipoUsuario(){
  return _tipoUsuario;
}

//SETTERS
  void setNome(std::string nome){
    _nome = nome;
  }

  void setSenha(std::string senha){
    _senha = senha;
  }

  void setTipoUsuario(char tipoUsuario){
    _tipoUsuario = tipoUsuario;
  }

};