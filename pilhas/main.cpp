#include "pilha.h"

using namespace std;

int main()
{
    int n;
    Pilha P, *topo = NULL;
    bool continuar = true;
    while(continuar){
        cout << "Digite o número a adicionar: ";
        cin >> n;
        if (n == -1){
            continuar = false;
            break;
        }
        if (n != 0){
            topo = P.InserirPilha(topo, n);
        }else{
            topo = P.RemoverPilha(topo);
        }
    }
    cout << "A soma deu " << P.CalcularSoma(topo);
}
