//
// Created by leo01 on 12/03/2022.
//

#ifndef ED_03_CLIENTE_H
#define ED_03_CLIENTE_H
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

};


//construtores padrão
Cliente::Cliente():_nome(""), _email(""), _dataNacimento(""), _idade(0){}

Cliente::Cliente(std::string nome, std::string email, std::string data, int idade):_nome(nome), _email(email), _dataNacimento(data), _idade(idade){}

//funçoes get padrão
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

//funçoes set padrão
inline void Cliente::setNome(std::string nome) {
    _nome = nome;
}

inline void Cliente::setEmail(std::string email) {
    _email = email;
}

inline void Cliente::setData(std::string data) {
    _dataNacimento = data;
}

inline void Cliente::setIdade(int idade) {
    _idade = idade;
}

void Cliente::imprimeCliente() const {
    std::cout << "Nome: " << _nome << "\n";
    std::cout << "E-mail: " << _email << "\n";
    std::cout << "Data de nacimento: " << _dataNacimento << "\n";
    std::cout << "Idade: " << _idade << "\n";
}


#endif //ED_03_CLIENTE_H
