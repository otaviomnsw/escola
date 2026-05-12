#include "pilha.h"

Pilha* Pilha :: InserirPilha(Pilha *T , int N) {
    Pilha *novo = new Pilha ();
    novo -> elo = T;
    novo -> numero = N;
    return novo;
};

Pilha* Pilha :: RemoverPilha(Pilha *T){
    Pilha *aux = T;
    T = T -> elo;
    delete(aux) ;
    return T;
};

int Pilha::CalcularSoma(Pilha *T){
    int soma = 0;
    Pilha* aux = T;
    while(aux != NULL){
        T = T -> elo;
        soma += aux -> numero;
        aux = T;
    }
    return soma;
};
