#include <iostream>
using namespace std;

class relogio{
private:
    int _hora,_minuto;

public:
    //Inicializa o relogio com hora = 0 e minuto = 0
    relogio();
    // Definine a hora com um inteiro de 0 a 23
    void definirHora(int hora);
    // Definine a minuto com um inteiro de 0 a 59
    void definirMinuto(int minuto);
    //Mostra a hora
    void imprimirHora() const;
    //trasforma a hora em minutos e retorna como inteiro
    int calculaMinutos() const;

};

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


relogio::relogio(): _hora(0), _minuto(0){}

void relogio::definirHora(int hora)
{
    if(hora < 24 && hora >= 0)
        _hora = hora;
}

void relogio::definirMinuto(int minuto)
{
    if (minuto < 60 && minuto >= 0){
        _minuto = minuto;
    }
}

void relogio::imprimirHora() const{
    if (_hora < 10){
        cout << 0;
    }
    cout << _hora << ":";
    if (_minuto < 10){
        cout << 0;
    }
    cout << _minuto << "\n";

}

int relogio::calculaMinutos() const{
    return (_hora * 60) + _minuto;
}

