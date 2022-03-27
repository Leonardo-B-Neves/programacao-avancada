//
// Created by leo01 on 26/03/2022.
//

#ifndef ED_05_INVESTIMENTO_H
#define ED_05_INVESTIMENTO_H

class Investimento{
protected:
    double _taxaJuros;
public:
    Investimento(double taxaJuros):_taxaJuros(taxaJuros){}
    double getJuros(){
        return _taxaJuros;
    }

    void imprimir(){
        std::cout << "taxa: " << _taxaJuros << "\n";
    }

};



#endif //ED_05_INVESTIMENTO_H
