//Leonardo Baltazar Neves
//Rhian Felipe Silva de Lara
#pragma once

#include <iostream>


class Item {
private:
  int _codigo;
  std::string _tipo;
  double _valor;
  int _quantidade;
public:


//GETTERS
  int getCodigo(){
    return _codigo;
  }
  std::string getTipo(){
    return _tipo;
  }

  double getValor(){
    return _valor;
  }  

  int getQuantidade(){
    return _quantidade;
  }


//SETTERS

  void setCodigo(int codigo){
    _codigo = codigo;
  }
  void setTipo(std::string tipo){
    _tipo = tipo;
  }
  void setValor(double valor){
    _valor = valor;
  }
  void setQuantidade(int quantidade){
    _quantidade = quantidade;
  }
};