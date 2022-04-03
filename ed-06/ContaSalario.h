//
// Created by leo01 on 26/03/2022.
//
#pragma once

#include "Conta.h"
#include <iostream>

class ContaSalario: public Conta{
public:
    ContaSalario(std::string numero, std::string agencia, Cliente* cliente, double saldo):Conta(numero,agencia,cliente,saldo){}

};



