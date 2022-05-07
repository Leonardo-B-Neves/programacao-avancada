#include <iostream>
#include "../ed-05/Cliente.h"
#include "Banco.h"
using namespace std;

int main() {
    std::cout << "Impressao De Criacao\n";
    Banco meuBanco(10);
    auto* cliente2 =  new Cliente("leonardo", "leonado@gmail.com", "07/05/2000", 20 );
    auto* cliente3 =  new Cliente("jandkajs", "jandkajs@gmail.com", "03/03/2001", 19 );
    auto* cliente4 =  new Cliente("izjwk", "izjwk@gmail.com", "09/12/2001", 19 );
    auto* cliente5 =  new Cliente("jaca", "jaca@gmail.com", "10/05/1998", 22 );

    meuBanco.cadastrarConta("123412341234", "devi", cliente2, 100.10);
    meuBanco.cadastrarConta("313241235", "solar", new Cliente("deni", "deni@gmail.com", "03/05/1993",25), 800);
    meuBanco.cadastrarConta("176372137", "gato", cliente3, 102.13);
    meuBanco.cadastrarConta("81827924556", "cachorro", cliente4, 1090.20);
    meuBanco.cadastrarConta("204897363", "pato", cliente5, 1200);

    std::cout << "\n\nMeu Banco\n";
    meuBanco.imprime();

    Banco superBanco(10000);

    superBanco.cadastrarConta("2222222", "fama", new Cliente("bernardo", "bernardo@gmail.com", "08/09/1980", 40), 900.80);

    std::cout << "\n\nSuper Banco\n";
    superBanco.imprime();

    return 0;
}
