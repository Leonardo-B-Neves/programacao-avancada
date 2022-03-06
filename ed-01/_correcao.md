- Faltou criar os arquivos `relogio.h` e `relogio.cpp`.

- Nesta função podemos usar `iomanip` para simplificar a lógica:

```cpp
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
```

- Observar a formatação do código. Devemos escolher um padrão e seguir ele sempre. Ou abrimos o bloco na mesma linha da definição do método ou na linha de baixo. Nunca misturar os dois estilos.

```cpp
void relogio::definirMinuto(int minuto)
{

void relogio::imprimirHora() const{
```

- Sempre usar `{` para comandos if, for, while, etc, mesmo que tenha apenas um comando. Sempre incluir um espaço antes do `(` quando não for chamada de função.:q!

```cpp
    if (hora < 24 && hora >= 0) {
        _hora = hora;
```


