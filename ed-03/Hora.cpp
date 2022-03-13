//
// Created by leo01 on 12/03/2022.
//

#include "Hora.h"
#include <iostream>
#include <iomanip>

Hora::Hora():_hora(0), _minuto(0), _segundo(0) {}

Hora::Hora(int hora, int minuto, int segundo):_hora(hora), _minuto(minuto), _segundo(segundo) {}

Hora Hora::soma(Hora hora) {
    int horaSoma = _hora + hora._hora;
    int minutoSoma = _minuto + hora._minuto;
    int segundoSoma = _segundo + hora._segundo;
    if (segundoSoma >= MINUTO_SEGUNDO_MAX){
        segundoSoma -= MINUTO_SEGUNDO_MAX;
        minutoSoma += 1;
    }
    if (minutoSoma >= MINUTO_SEGUNDO_MAX){
        minutoSoma -= MINUTO_SEGUNDO_MAX;
        horaSoma += 1;
    }
    if(horaSoma >= HORA_MAX){
        horaSoma -= HORA_MAX;
    }
    return Hora(horaSoma, minutoSoma, segundoSoma);

}

Hora Hora::subtrai(Hora hora) {
    int horaSoma = _hora - hora._hora;
    int minutoSoma = _minuto - hora._minuto;
    int segundoSoma = _segundo - hora._segundo;
    if (segundoSoma < 0){
        segundoSoma += MINUTO_SEGUNDO_MAX;
        minutoSoma -= 1;
    }
    if (minutoSoma < 0){
        minutoSoma += MINUTO_SEGUNDO_MAX;
        horaSoma -= 1;
    }
    if (horaSoma < 0){
        horaSoma += HORA_MAX;
    }
    return Hora(horaSoma, minutoSoma, segundoSoma);
}

void Hora::imprime() {
    std::cout << std::setfill('0') << std::setw(2) << _hora << ":" << std::setw(2) << _minuto << ":" << std::setw(2) << _segundo << '\n';
}