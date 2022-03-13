//
// Created by leo01 on 12/03/2022.
//

#ifndef ED_03_CONTA_H
#define ED_03_CONTA_H

#include "Cliente.h"

class Conta {
public:
    Conta();
    Conta(std::string numero, std::string agencia, Cliente cliente, double saldo);
    void depositar(double deposito);
    void retirar(double retirada);
    void setCliente(Cliente cliente);
    void imprimirExtrato() const;

private:
    std::string _numero, _agencia;
    Cliente _cliente;
    double _saldo;

};


#endif //ED_03_CONTA_H
