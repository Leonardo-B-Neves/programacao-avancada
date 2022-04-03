#include <iostream>
#include "Cliente.h"
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "ContaSalario.h"
#include "Banco.h"
using namespace std;


int main() {
    //Cria contas
    Banco* contas = new Banco(5);
    Cliente* cliente1 = new Cliente("bernardo", "bernardo@gmail.com", "02/03/2000", 20);
    Cliente* cliente2 = new Cliente("marcio", "marcio@gmail.com", "07/09/2001", 19);

    ContaPoupanca* contaPoupanca1 = new ContaPoupanca("15290", "banco do brasil", cliente1, 100);
    ContaPoupanca* contaPoupanca2 = new ContaPoupanca("15290", "banco do brasil", cliente1, 2000);

    ContaCorrente* contaCorrente1 = new ContaCorrente("15356", "caixa", cliente1, 100);
    ContaCorrente* contaCorrente2 = new ContaCorrente("15356", "caixa", cliente2, 1000);

    ContaSalario* contaSalario = new ContaSalario("14000", "Bradesco", cliente1, 500);


    //Cadastra as contas
    contas->cadastrarConta(contaPoupanca1);
    contas->cadastrarConta(contaPoupanca2);
    contas->cadastrarConta(contaCorrente1);
    contas->cadastrarConta(contaCorrente2);
    contas->cadastrarConta(contaSalario);

    cout << "Primeiro grupo de extratos\n";
    contas->imprimeExtrato();
    cout << "\n";

    contas->aplicarJuros(40);

    cout << "Segundo grupo de extratos\n";
    contas->imprimeExtrato();

    delete contas;

    return 0;
}
