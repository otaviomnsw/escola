#include "lista.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    Hash tabelaLivro(13);

    ifstream arquivo("/home/alunos/Downloads/Books.csv");
    if (!arquivo.is_open()) {
        cout << "Erro";
    }else {
        string linha, token;
        getline(arquivo, linha);

        while(getline(arquivo, linha)){
            stringstream ss(linha);
            vector<string> colunas;

            while(getline(ss, token, ',')) {
                colunas.push_back(token);
            }

            if (colunas.size() >= 6) {
                string tit = colunas[1];
                string autor = colunas[3];
                string editora = colunas[4];

                float vr_venda = stof(colunas[6]);
                int pags = stoi(colunas[5]);

                tabelaLivro.inserir(tit, autor, editora, pags, vr_venda);
            }
        }
        arquivo.close();
    }

    tabelaLivro.mostrar_hash();
    cout << "\n\n";
    tabelaLivro.Mostrar_Maior_Paginas();
    cout << "\n\n";
    tabelaLivro.Mostrar_Media_Vendas();
}
