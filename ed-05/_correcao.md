- Implementação de funções no .h somente se forem inline!

```
double Conta::getSaldo() const{ // Faltou inline
    return _saldo;
}
```

- Faltou sobrescrever o metodo deposita na conta salario
