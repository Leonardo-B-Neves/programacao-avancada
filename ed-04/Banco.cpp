//
// Created by leo01 on 17/03/2022.
//

#include "Banco.h"
#include <iostream>

//construtor
Banco::Banco(int n): _n(n), _atual(0) {}

//cadastrar
void Banco::cadastrarConta(std::string numero, std::string agencia, Cliente* cliente, double saldo) {
    if(_atual < _n - 1){
        _contas.push_back(new Conta(numero, agencia, cliente, saldo));
        _atual++;
    }
}

void Banco::imprime() {
    for( int i = 0; i < _atual; i++){
        _contas[i]->imprimeConta();
        std::cout << "\n";
    }
}