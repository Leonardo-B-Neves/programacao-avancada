//
// Created by leo01 on 12/03/2022.
//

#include "Conta.h"
#include "iostream"
#include "iomanip"

Conta::Conta():_numero(""), _agencia(""), _cliente(NULL), _saldo(0) {}

Conta::Conta(std::string numero, std::string agencia, Cliente* cliente, double saldo):_numero(numero), _agencia(agencia), _cliente(cliente), _saldo(saldo) {
    std::cout << "Numero: " << numero << "\n";
    std::cout << "Agencia: " << agencia << "\n";
    cliente->imprimeCliente();
    std::cout << "Saldo: " << saldo << "\n\n";
}

inline void Conta::depositar(double deposito) {
    _saldo += deposito;
}

inline void Conta::retirar(double retirada) {
    _saldo+= retirada;
}

inline void Conta::setCliente(Cliente* cliente) {
    _cliente = cliente;
}

void Conta::imprimirExtrato() const {
    std::cout << std::setfill('0') << std::setw(2) <<_saldo << "\n";
}

//imprime dados da conta
void Conta::imprimeConta() const {
    std::cout << "Numero: " << _numero << "\n";
    std::cout << "Agencia: " << _agencia << "\n";
    Conta::_cliente->imprimeCliente();
    std::cout << "Saldo: " << _saldo << "\n";
}