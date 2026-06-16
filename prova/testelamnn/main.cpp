#include "fila.h"
#include "fila2.h"

using namespace std;

void Menu()
{
    cout << "1- Inserir\n";
    cout << "2- Listar\n";
    cout << "3- Excluir\n";
    cout << "4- Esvaziar\n";
    cout << "5- Sair\n";
    cout << "Escolha sua opção: ";
};

int main(){
    Fila *Inicio = NULL, *Fim = NULL, F;
    Fila2 *Inicio2 = NULL, *Fim2 = NULL, F2;
    string nome, cidade, estado;
    int op, ano;
    do{
        Menu();
        cin >> op;
        switch(op){
        case 1:
            cout << "Informe o nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Informe a cidade: ";
            getline(cin, cidade);
            cout << "Informe o estado: ";
            getline(cin, estado);
            cout << "Informe o ano: ";
            cin >> ano;

            Fim = F.Inserir(Fim, nome, cidade, estado, ano);
            if(Inicio == NULL)
                Inicio = Fim;
            Fim2 = F2.Inserir(Inicio2, Fim2, 1, cidade);
            if(Inicio2 == NULL)
                Inicio2 = Fim2;
            cout << "\nInserido!\n\n";
            break;
        case 2:
            if(Inicio == NULL)
                cout << "Fila vazia!\n";
            else{
                cout << "\nCadastrados\n\n";
                F.Listar(Inicio);
            }
            break;
        case 3:
            if(Inicio == NULL)
                cout << "Fila vazia!\n";
            else{
                Inicio = F.Excluir(Inicio);
                cout << "\nExcluido!\n\n";
            }
            break;
        case 4:
            if(Inicio == NULL)
                cout << "Fila vazia!\n";
            else{
                Inicio = F.Esvaziar(Inicio);
                Fim = Inicio;
                cout << "\nFila esvaziada!\n\n";
            }
            break;
        case 5:
            cout << "\nFim!\n\n ";
            break;
        default:
            cout << "Inválido!\n\n";
        }
        cin.ignore().get();
    }while(op != 5);
    F2.Listar(Inicio2);
    return 0;
};
