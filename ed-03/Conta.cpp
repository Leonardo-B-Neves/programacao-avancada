//
// Created by leo01 on 12/03/2022.
//

#include "Conta.h"
#include "iostream"
#include "iomanip"

Conta::Conta():_numero(""), _agencia(""), _cliente(Cliente()), _saldo(0) {}

Conta::Conta(std::string numero, std::string agencia, Cliente cliente, double saldo):_numero(numero), _agencia(agencia), _cliente(cliente), _saldo(saldo) {}

void Conta::depositar(double deposito) {
    _saldo += deposito;
}

void Conta::retirar(double retirada) {
    _saldo+= retirada;
}

void Conta::setCliente(Cliente cliente) {
    _cliente = cliente;
}

void Conta::imprimirExtrato() const {
    std::cout << std::setfill('0') << std::setw(2) <<_saldo << "\n";
}