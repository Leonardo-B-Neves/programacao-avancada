//
// Created by leo01 on 26/03/2022.
//

#ifndef ED_05_CONTASALARIO_H
#define ED_05_CONTASALARIO_H

#include "Conta.h"
#include "Investimento.h"
#include <iostream>

class ContaSalario: public Conta, public Investimento{
public:
    ContaSalario(std::string numero, std::string agencia, Cliente* cliente, double saldo):Conta(numero,agencia,cliente,saldo), Investimento(0){}

    void aplicarJurosDiarios(int dias, double taxa){
        int i = 0;
        while (i < dias){
            double aux = _saldo + (_saldo * taxa);
            _saldo = aux;
            i++;
        }
    }

};

#endif //ED_05_CONTASALARIO_H
