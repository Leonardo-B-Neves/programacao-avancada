//Leonardo Baltazar Neves
//Rhian Felipe Silva de Lara
#include "Interface.h"
using namespace std;

void Interface::interfaceLogin(){
    string AUX;
    cout << endl << "=====|DEPOSITO SYSTEM RHILEO|=====" << endl;
    while('G' != login.getTipoUsuario() && 'F' != login.getTipoUsuario()){
        cout << "Digite sua Nome: ";
        cin >> AUX;
        login.setNome(AUX);
        cout << "Digite sua senha: ";
        cin >> AUX;
        login.setSenha(AUX);

        login.setTipoUsuario(controlador.requisitarValidacao(login));
        if('G' == login.getTipoUsuario()){
            this->interfaceGerente();
        }else if('F' == login.getTipoUsuario()){
            this->interfaceFuncionario();
        }else{
            cout << "Usuario nao autorizado.\n";
        }

    }
}

void Interface::interfaceGerente(){
    int operacao = 0;
    while(operacao < 6){
        cout << "Digite 1 para Entrada de itens, 2 para Retirada de itens, 3 para Cadastro de itens,\n 4 para Excluir itens, 5 para consutar itens e numeros acima para sair\n";
        cin >> operacao;
        switch (operacao) {
            case 1:
                this->interfaceEntradaItens();
                break;
            case 2:
                this->interfaceRetirarItens();
                break;
            case 3:
                this->interfaceCadastroTipo();
                break;
            case 4:
                this->inferfaceExcluirTipoItem();
                break;
            case 5:
                this->interfaceConsulta();
                break;
        }
    }
}


void Interface::interfaceFuncionario(){
    int operacao;
    while (operacao < 4){
        cout << "Digite 1 para Entrada de itens, 2 para Retirada de itens, 3 para consutar itens\ne numeros acima para sair\n";
        switch (operacao) {
            case 1:
                this->interfaceEntradaItens();
                break;
            case 2:
                this->interfaceRetirarItens();
                break;
            case 3:
                this->interfaceConsulta();
                break;
        }
    }
}

void Interface::interfaceConsulta(){
    vector<Item> itens = controlador.requistarConsutaItens();
    int i = 0;
    while(i < itens.size()){
        cout << "Codigo: "<<itens[i].getCodigo() << "\n";
        cout << "Tipo: "<< itens[i].getTipo() << "\n";
        cout << "Preco: "<< itens[i].getValor() << "\n";
        cout << "Quantidade disponivel: "<< itens[i].getQuantidade() << "\n\n";
    }
}

void Interface::interfaceCadastroTipo(){
    Item item;
    cout << "codigo do item: ";
    int cod;
    cin >> cod;
    item.setCodigo(cod);
    string tipo;
    cout << "Tipo do item: ";
    cin >> tipo;
    item.setTipo(tipo);
    double valor;
    cout << "Preco do item: ";
    cin >> valor;
    item.setValor(valor);
    bool validaOperacao = controlador.requistarCadastroTipo(item);
    if(validaOperacao){
        cout << "Cadastro bem sucedido.\n";
    }
    else{
        cout << "Cadastro mal sucedido.\n";
    }
}


void Interface::interfaceEntradaItens(){
    Item item;
    cout << "codigo do item: ";
    int cod;
    cin >> cod;
    item.setCodigo(cod);
    cout << "Quantia de entrada do item: ";
    cin >> cod;
    item.setValor(cod);
    bool validaOperacao = controlador.requistarEntradaItens(item);
    if(validaOperacao){
        cout << "Entrada bem sucedida.\n";
    }
    else{
        cout << "Entrada mal sucedida.\n";
    }
}

void Interface::inferfaceExcluirTipoItem(){
    Item item;
    cout << "codigo do item: ";
    int cod;
    cin >> cod;
    item.setCodigo(cod);
    bool validaOperacao = controlador.requistarExcluirTipo(item);
    if(validaOperacao){
        cout << "Exclusao bem sucedida.\n";
    }
    else{
        cout << "Exclusao mal sucedida.\n";
    }
}

void Interface::interfaceRetirarItens(){
    Item item;
    cout << "codigo do item: ";
    int cod;
    cin >> cod;
    item.setCodigo(cod);
    cout << "Quantia de retirada do item: ";
    cin >> cod;
    item.setValor(cod);
    bool validaOperacao = controlador.requisitarRetiradaItens(item);
    if(validaOperacao){
        cout << "Retirada bem sucedida.\n";
    }
    else{
        cout << "Retirada mal sucedida.\n";
    }
}

