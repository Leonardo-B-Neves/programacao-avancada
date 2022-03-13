#include <iostream>
using namespace std;

#include "relogio.h"


int main() {

    relogio hora1;
    relogio hora2;
    relogio hora3;

    hora1.definirHora(23);
    hora2.definirHora(15);
    hora3.definirHora(2);

    hora1.definirMinuto(59);
    hora2.definirMinuto(10);
    hora3.definirMinuto(0);

    cout << "hora1 = ";
    hora1.imprimirHora();
    cout << "hora2 = ";
    hora2.imprimirHora();
    cout << "hora3 = ";
    hora3.imprimirHora();

    cout << "\nhora1 em minutos = " << hora1.calculaMinutos() << "\n";
    cout << "hora2 em minutos = " << hora2.calculaMinutos() << "\n";
    cout << "hora3 em minutos = " << hora3.calculaMinutos() << "\n";

    return 0;
}