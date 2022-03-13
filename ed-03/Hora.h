//
// Created by leo01 on 12/03/2022.
//

#ifndef ED_03_HORA_H
#define ED_03_HORA_H


class Hora {
public:
    //Construtores
    Hora();
    Hora(int hora, int minuto, int segundo);
    //Metodo de contas pedidos
    Hora soma (Hora hora);
    Hora subtrai(Hora hora);
    //Metodo que ajuda a mostrar os metodos de conta funcionando
    void imprime();


private:
    int _hora, _minuto, _segundo;
    static const int HORA_MAX = 24;
    static const int MINUTO_SEGUNDO_MAX = 60;

};


#endif //ED_03_HORA_H
