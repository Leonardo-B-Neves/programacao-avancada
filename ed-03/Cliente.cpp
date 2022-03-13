//
// Created by leo01 on 12/03/2022.
//

#include "Cliente.h"

Cliente::Cliente():_nome(""), _email(""), _dataNacimento(""), _idade(0){}

Cliente::Cliente(std::string nome, std::string email, std::string data, int idade):_nome(nome), _email(email), _dataNacimento(data), _idade(idade){}

std::string Cliente::getNome() const {
    return _nome;
}

std::string Cliente::getEmail() const {
    return _email;
}

std::string Cliente::getData() const {
    return _dataNacimento;
}

int Cliente::getIdade() const {
    return _idade;
}

void Cliente::setNome(std::string nome) {
    _nome = nome;
}

void Cliente::setEmail(std::string email) {
    _email = email;
}

void Cliente::setData(std::string data) {
    _dataNacimento = data;
}

void Cliente::setIdade(int idade) {
    _idade = idade;
}