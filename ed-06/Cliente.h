//
// Created by leo01 on 12/03/2022.
//

#pragma once

#include <string>
#include <iostream>

class Cliente {
private:
    std::string _nome, _email, _dataNacimento;
    int _idade;

public:
    //construtores
    Cliente();
    Cliente(std::string nome, std::string email, std::string data, int idade);
    //imprime dados do Cliente
    void imprimeCliente() const;

};


//construtores padrão
Cliente::Cliente():_nome(""), _email(""), _dataNacimento(""), _idade(0){}

Cliente::Cliente(std::string nome, std::string email, std::string data, int idade):_nome(nome), _email(email), _dataNacimento(data), _idade(idade){}

inline void Cliente::imprimeCliente() const {
    std::cout << "Nome: " << _nome << "\n";
    std::cout << "E-mail: " << _email << "\n";
    std::cout << "Data de nacimento: " << _dataNacimento << "\n";
    std::cout << "Idade: " << _idade << "\n";
}
