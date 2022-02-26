#include <iostream>
using namespace std;

class relogio{
private:
    int hora,minuto;

public:
    //Inicializa o relogio com hora = 0 e minuto = 0
    relogio();
    // Definine a hora com um inteiro de 0 a 23
    void definirHora(int hora);
    // Definine a minuto com um inteiro de 0 a 59
    void definirMinuto(int minuto);
    //Mostra a hora
    void imprimirHora();
    //trasforma a hora em minutos e retorna como inteiro
    int calculaMinutos();

};

int main() {

    relogio hora1 = *new relogio();
    relogio hora2 = *new relogio();
    relogio hora3 = *new relogio();

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


relogio::relogio()
{
    hora = 0;
    minuto = 0;
}

void relogio::definirHora(int hora)
{
    if (hora < 24 && hora >= 0){
        this->hora = hora;
    }

}

void relogio::definirMinuto(int minuto)
{
    if (minuto < 60 && minuto >= 0){
        this->minuto = minuto;
    }
}

void relogio::imprimirHora(){
    if (hora < 10){
        cout << 0;
    }
    cout << hora << ":";
    if (minuto < 10){
        cout << 0;
    }
    cout << minuto << "\n";

}

int relogio::calculaMinutos(){
    return (hora * 60) + minuto;
}

