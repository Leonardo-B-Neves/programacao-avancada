//
// Created by leo01 on 26/03/2022.
//

#pragma once

#include "Conta.h"
#include <iostream>
#include <math.h>

class ContaCorrente: public Conta{
public:
    ContaCorrente(std::string numero, std::string agencia, Cliente* cliente, double saldo):Conta(numero,agencia,cliente,saldo){}
    //Esse não tem logica em ter um valor de taxa porque deriva de investimento
    virtual void aplicarJurosDiarios(int dias){
        _saldo = _saldo * pow((1 + 0.0003), dias);
    }

};

