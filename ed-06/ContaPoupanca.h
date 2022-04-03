//
// Created by leo01 on 26/03/2022.
//

#pragma once

#include "Conta.h"
#include <math.h>

class ContaPoupanca: public Conta{
public:
    ContaPoupanca(std::string numero, std::string agencia, Cliente* cliente, double saldo):Conta(numero,agencia,cliente,saldo){}

    virtual void aplicarJurosDiarios(int dias){
        _saldo = _saldo * pow((1 + 0.0008), dias);
    }
};
