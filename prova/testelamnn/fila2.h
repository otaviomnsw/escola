#include <iostream>

class Fila2
{
    public:
        std::string Cidade;
        int Qtd;
        Fila2 *elo;
        Fila2 *Inserir(Fila2*, Fila2*, int, std::string);
        void Listar(Fila2*);
        Fila2* Excluir(Fila2*);
        Fila2* Esvaziar(Fila2*);
};
