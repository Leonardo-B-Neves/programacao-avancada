//
// Created by leo01 on 12/03/2022.
//

#ifndef ED_03_CLIENTE_H
#define ED_03_CLIENTE_H
#include <string>

class Cliente {
public:
    //construtores
    Cliente();
    Cliente(std::string nome, std::string email, std::string data, int idade);
    //Funçoes padrões de get
    std::string getNome() const;
    std::string getEmail() const;
    std::string getData() const;
    int getIdade() const;
    //Funçoes padrões de set
    void setNome(std::string nome);
    void setEmail(std::string email);
    void setData(std::string data);
    void setIdade(int idade);
    //imprime dados do Cliente
    void imprimeCliente() const;


private:
    std::string _nome, _email, _dataNacimento;
    int _idade;
};


#endif //ED_03_CLIENTE_H
