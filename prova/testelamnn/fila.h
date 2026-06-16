#include <iostream>

class Fila
{
    public:
        std::string Nome, Cidade, Estado;
        int Ano;
        Fila *elo;
        Fila *Inserir(Fila*, std::string, std::string, std::string, int);
        void Listar(Fila*);
        Fila* Excluir(Fila*);
        Fila* Esvaziar(Fila*);
};
