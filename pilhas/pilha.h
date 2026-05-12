#include <iostream>

class Pilha
{
    public:
        int numero;
        Pilha* elo;
        Pilha* InserirPilha(Pilha*, int);
        Pilha* RemoverPilha(Pilha*);
        int CalcularSoma(Pilha*);
};
