#ifndef ED_04_BANCO_H
#define ED_04_BANCO_H
#include "Conta.h"

class Banco {
public:
    //construtor
    Banco(int n): _n(n), _atual(0), _contas(new Conta*[n]){}
    //cadastrar
    void cadastrarConta(Conta *conta){
        if (_atual < _n){
            _contas[_atual] = conta;
            _atual++;
        } else {
        }
    }
    ~Banco(){
        delete []_contas;
    }
    //imprime banco
    void imprimeExtrato()const{
        for (int i = 0; i < _atual; i++){
            _contas[i]->imprimirExtrato();
        }
    }

    void aplicarJuros(int dias)const{
        for(int i = 0; i < _atual; i++){
            _contas[i]->aplicarJurosDiarios(dias);
        }
    }


private:

    //_n numero maximo de ponteiros reservados e ultimo
    //_atual é a variavel da ultima posição do vetor ja preenchida de 0 a n - 1
    int _n;
    int _atual;
    //Não consegui fazer com vetor de ponteiros
    Conta** _contas;
};


#endif //ED_04_BANCO_H
