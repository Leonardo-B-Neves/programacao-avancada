#include <iostream>
#include "Cliente.h"
#include "Conta.h"
#include "Hora.h"
using namespace std;

int main() {
    //Teste de Cliente e Conta
    Cliente cliente("leonardo", "leonardo@gmail.com", "07/06/2000", 21);
    Conta conta1("12313", "dermi", cliente, 100.00);
    cout << "saldo: ";
    conta1.imprimirExtrato();
    cout << "nome: " << cliente.getNome() << "\n";
    cout << "email: " << cliente.getEmail() << "\n";
    cout << "data de nacimento: " << cliente.getData() << "\n";
    cout << "idade: " << cliente.getIdade() << "\n";

    //Teste de Hora
    Hora hora1(20, 30, 10);
    Hora hora2(20, 30, 20);
    Hora hora3 = hora1.soma(hora2);
    hora3.imprime();
    hora3 = hora3.subtrai(hora1);
    hora3.imprime();

    return 0;
}
