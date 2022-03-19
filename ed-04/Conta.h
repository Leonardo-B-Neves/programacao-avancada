//
// Created by leo01 on 12/03/2022.
//

#ifndef ED_03_CONTA_H
#define ED_03_CONTA_H

#include "Cliente.h"

class Conta {
public:
    //Construtores
    Conta();
    Conta(std::string numero, std::string agencia, Cliente cliente, double saldo);

    Conta(std::string numero, std::string agencia, Cliente *cliente, double saldo);

//Metodos de deposito e saque da Conta
    void depositar(double deposito);
    void retirar(double retirada);
    //Metodo para mudar o Cliente de conta
    void setCliente(Cliente* cliente);
    //metodo e imprime o saldo
    void imprimirExtrato() const;
    //imprime dados da Conta
    void imprimeConta() const;

private:
    std::string _numero, _agencia;
    Cliente* _cliente;
    double _saldo;

};


#endif //ED_03_CONTA_H
