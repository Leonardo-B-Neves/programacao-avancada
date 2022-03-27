//
// Created by leo01 on 26/03/2022.
//

#ifndef ED_05_CONTAPOUPANCA_H
#define ED_05_CONTAPOUPANCA_H

#include "Conta.h"
#include "Investimento.h"

class ContaPoupanca: public Conta, public Investimento{
public:
    ContaPoupanca(std::string numero, std::string agencia, Cliente* cliente, double saldo):Conta(numero,agencia,cliente,saldo), Investimento(0.0008){}

    void aplicarJurosDiarios(int dias){
        int i = 0;
        while (i < dias){
            double aux = _saldo + (_saldo * _taxaJuros);
            _saldo = aux;
            i++;
        }
    }
};

#endif //ED_05_CONTAPOUPANCA_H
