#include "fila.h"

Fila *Fila::Inserir(Fila *F, std::string N, std::string C, std::string E, int A)
{
    Fila *novo = new Fila();
    novo -> Nome = N;
    novo -> Cidade = C;
    novo -> Estado = E;
    novo -> Ano = A;
    novo -> elo = NULL;
    if(F != NULL){
        F -> elo = novo;
    }
    F = novo;
    return F;
};

void Fila::Listar(Fila *I){
    Fila *aux = I;
    while(aux != NULL)
    {
        std::cout << aux -> Nome << " / " << aux-> Cidade << ", " << aux-> Estado << " " << aux-> Ano << "\n";
        aux = aux -> elo;
    }
};
Fila *Fila::Excluir(Fila *I)
{
    Fila *aux = I;
    I = I -> elo ;
    delete ( aux );
    return I;
};
Fila *Fila::Esvaziar(Fila * I)
{
    Fila *aux = I;
    while(aux != NULL)
    {
        I = I -> elo;
        delete(aux);
        aux = I;
    }
    return I;
};
