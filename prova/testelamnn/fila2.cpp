#include "fila2.h"

Fila2 *Fila2::Inserir(Fila2 *I, Fila2 *F, int qtd, std::string cidade){
    Fila2 *aux = I;
    bool foi = false;
    while(aux != NULL){
    if (aux->Cidade == cidade){
        aux->Qtd += 1;
        foi = true;
    }
    aux = aux-> elo;
    }
    if (!foi){
        Fila2 *novo = new Fila2();
        novo -> Cidade = cidade;
        novo -> Qtd = qtd;
        novo -> elo = NULL;
        if(F != NULL){
            F -> elo = novo;
        }
        F = novo;
    }
    foi = false;
    return F;
};

void Fila2::Listar(Fila2 *I){
    Fila2 *aux = I;
    while(aux != NULL)
    {
        std::cout << aux-> Qtd << "\n";
        aux = aux-> elo;
    }
};

Fila2 *Fila2::Excluir(Fila2 *I){
    Fila2 *aux = I;
    I = I -> elo ;
    delete(aux);
    return I;
};

Fila2 *Fila2::Esvaziar(Fila2 * I)
{
    Fila2 *aux = I;
    while(aux != NULL)
    {
        I = I -> elo;
        delete(aux);
        aux = I;
    }
    return I;
};
