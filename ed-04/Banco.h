//
// Created by leo01 on 17/03/2022.
//

#ifndef ED_04_BANCO_H
#define ED_04_BANCO_H
#include "Conta.h"
#include <vector>


class Banco {
public:
    //construtor
    Banco(int n);
    //cadastrar
    void cadastrarConta(std::string numero, std::string agencia, Cliente* cliente, double saldo);
    //imprime banco
    void imprime();


private:

    //_n numero maximo de ponteiros reservados e ultimo
    //_atual é a variavel da ultima posição do vetor ja preenchida de 0 a n - 1
    int _n, _atual;
    //Não consegui fazer com vetor de ponteiros
    std::vector<Conta*> _contas;
};


#endif //ED_04_BANCO_H
