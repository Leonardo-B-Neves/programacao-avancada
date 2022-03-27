//
// Created by leo01 on 26/03/2022.
//

#ifndef ED_05_CONTACORRENTE_H
#define ED_05_CONTACORRENTE_H

#include "Conta.h"
#include "Investimento.h"
#include <iostream>

class ContaCorrente: public Conta, public Investimento{
public:
    ContaCorrente(std::string numero, std::string agencia, Cliente* cliente, double saldo):Conta(numero,agencia
                                                                                                ,cliente,saldo), Investimento(0.0003){}
    //Esse não tem logica em ter um valor de taxa porque deriva de investimento
    void aplicarJurosDiarios(int dias){
        int i = 0;
        while (i < dias){
            double aux = _saldo + (_saldo * _taxaJuros);
            _saldo = aux;
            i++;
        }
    }

};

#endif //ED_05_CONTACORRENTE_H
