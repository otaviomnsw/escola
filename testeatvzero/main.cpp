#include "pilha.h"

using namespace std;

int main()
{
    Pilha P, *topo = NULL;
    int num = 1, soma;

    while (num != -1){
        cout << "Digite o numero: ";
        cin >> num;
        if (num == -1){
            break;
        }else if (num != 0){
            topo = P.InserirPilha(topo, num);
        }else{
            topo = P.RemoverPilha(topo);
        }
    }
    soma = P.PercorrerPilha(topo);
    cout << soma;
}
