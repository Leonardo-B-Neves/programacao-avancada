//
// Created by leo01 on 12/03/2022.
//

#ifndef ED_03_HORA_H
#define ED_03_HORA_H


class Hora {
public:
    Hora();
    Hora(int hora, int minuto, int segundo);
    Hora soma (Hora hora);
    Hora subtrai(Hora hora);
    void imprime();


private:
    int _hora, _minuto, _segundo;
    static const int HORA_MAX = 24;
    static const int MINUTO_SEGUNDO_MAX = 60;

};


#endif //ED_03_HORA_H
