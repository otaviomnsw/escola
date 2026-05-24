#include <iostream>

class Pilha
{
    public:
        int numero;
        Pilha *elo;

        Pilha* InserirPilha(Pilha*, int);
        int PercorrerPilha(Pilha*);
        Pilha* RemoverPilha(Pilha*);
};
