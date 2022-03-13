//
// Created by leo01 on 12/03/2022.
//

#ifndef ED_02_RELOGIO_H
#define ED_02_RELOGIO_H
#include "iostream"
#include "iomanip"

class relogio {

public:
    //Inicializa o relogio com hora = 0 e minuto = 0
    relogio(): _hora(0), _minuto(0){}
    // Definine a hora com um inteiro de 0 a 23
    void definirHora(int hora){
        if (hora <= HORA_MAX && hora >= 0) {
            _hora = hora;
        }
    }
    // Definine a minuto com um inteiro de 0 a 59
    void definirMinuto(int minuto){
        if (minuto >= 0 && minuto <= MINUTOS_MAX) {
            _minuto = minuto;
        }
    }
    //Mostra a hora
    void imprimirHora() const{
        std::cout << std::setfill('0') << std::setw(2) << _hora << ":" << std::setw(2) << _minuto <<"\n";
    }
    //trasforma a hora em minutos e retorna como inteiro
    int calculaMinutos() const{
        return (_hora * 60) + _minuto;
    }
private:
    int _hora;
    int _minuto;
    static const int HORA_MAX = 23;
    static const int MINUTOS_MAX = 59;
};


#endif //ED_02_RELOGIO_H
