#include <iostream>
#include "Conta.h"
#include "Cliente.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "ContaSalario.h"
using namespace std;


int main() {
    //Cria contas
    Cliente* cliente = new Cliente("bernardo", "bernardo@gmail.com", "02/03/2000", 20);
    ContaCorrente contaCorrente("15356", "caixa", cliente, 1000);
    ContaPoupanca contaPoupanca("15290", "banco do brasil", cliente, 1000);
    ContaSalario contaSalario("14000", "Bradesco", cliente, 1000);

    //Imprime antes dos juros
    cout << "Conta corrente: ";
    contaCorrente.imprimirExtrato();
    cout << "Conta Poupanca: ";
    contaPoupanca.imprimirExtrato();
    cout << "Conta salario: ";
    contaSalario.imprimirExtrato();
    cout << "\n";

    //Aplica juros e imprime
    cout << "Conta corrente: ";
    contaCorrente.aplicarJurosDiarios(20);
    contaCorrente.imprimirExtrato();
    cout << "Conta Poupanca: ";
    contaPoupanca.aplicarJurosDiarios(20);
    contaPoupanca.imprimirExtrato();
    cout << "Conta salario: ";
    contaSalario.aplicarJurosDiarios(20, 0.004);
    contaSalario.imprimirExtrato();

    return 0;
}
