#include "pilha.h"

Pilha* Pilha::InserirPilha(Pilha *T, int n){
    Pilha* novo = new Pilha();
    novo -> numero = n;
    novo -> elo = T;
    return novo;
};

int Pilha::PercorrerPilha(Pilha *T){
    Pilha *aux = T;
    int soma = 0;
    while (aux != NULL){
        std::cout << aux->numero << std::endl;
        soma += aux->numero;
        aux = aux->elo;
    }
    return soma;
};

Pilha* Pilha::RemoverPilha(Pilha *T){
    Pilha *aux = T;
    T = T -> elo;
    delete(aux);
    return T;
};
