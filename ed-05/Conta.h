
#ifndef ED_03_CONTA_H
#define ED_03_CONTA_H

#include "../ed-05/Cliente.h"
#include "iostream"
#include "iomanip"

class Conta {
private:
    std::string _numero, _agencia;
    Cliente* _cliente;
protected:
    double _saldo;

public:
    //Construtores
    Conta();
    Conta(std::string numero, std::string agencia, Cliente* cliente, double saldo);


//Metodos de deposito e saque da Conta
    void depositar(double deposito);
    void retirar(double retirada);
    //Metodo para mudar o Cliente de conta
    void setCliente(Cliente* cliente);
    //metodo e imprime o saldo
    void imprimirExtrato() const;
    //imprime dados da Conta
    void imprimeConta() const;

    void setSaldo(double saldo);

    double getSaldo() const;
};



inline Conta::Conta():_numero(""), _agencia(""), _cliente(NULL), _saldo(0) {}

inline void Conta::depositar(double deposito) {
    _saldo += deposito;
}

inline void Conta::retirar(double retirada) {
    _saldo+= retirada;
}

inline void Conta::setCliente(Cliente* cliente) {
    _cliente = cliente;
}

inline void Conta::imprimirExtrato() const {
    std::cout << std::setfill('0') << std::setw(2) <<_saldo << "\n";
}

//imprime dados da conta
inline void Conta::imprimeConta() const {
    std::cout << "Numero: " << _numero << "\n";
    std::cout << "Agencia: " << _agencia << "\n";
    Conta::_cliente->imprimeCliente();
    std::cout << "Saldo: " << _saldo << "\n";
}

double Conta::getSaldo() const{
    return _saldo;
}

inline void Conta::setSaldo(double saldo) {}

Conta::Conta(std::string numero, std::string agencia, Cliente* cliente, double saldo): _numero(numero), _agencia(agencia), _cliente(cliente), _saldo(saldo){}


#endif //ED_03_CONTA_H
