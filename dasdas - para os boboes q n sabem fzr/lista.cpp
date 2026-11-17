#include "lista.h"

Hash::Hash(int tam) : tamanho_tabela(tam) {
        tabela.resize(tamanho_tabela);
}

unsigned int Hash::funcao_hashing(std::string chave){
    unsigned int resultado = 4;

    for(int i = 0; i < chave.length(); i ++) {
        resultado = (resultado * 6) + chave[i];
    }

    return resultado % 13;
}

void Hash::inserir(std::string tit, std::string aut, std::string edit, int pgs, float vr_venda) {
    int pos = funcao_hashing(edit);
    Livro novo(tit, aut, edit, pgs, vr_venda);
    tabela[pos].push_back(novo);
}

void Hash::mostrar_hash() const {
    for (int i = 0; i < tamanho_tabela; i++) {
        if (!tabela[i].empty()) {
            std::cout << "\n--- Posicao " << i << " (Editor(a): " << tabela[i].front().Editora << ") ---" << std::endl;

            for (std::list<Livro>::const_iterator it = tabela[i].begin(); it != tabela[i].end(); ++it) {
                std::cout << "Título: " << it->Titulo << " | Autor: " << it->Autor
                          << " | Páginas: " << it->Paginas << " | Vr_venda: " << it->Vr_venda << std::endl;
            }
        }
    }
}

void Hash::Mostrar_Maior_Paginas() const {
    int pgm = -1;
    int pgs = 0;
    std::string edt = "";

    for (int i = 0; i < tamanho_tabela; i++) {
        if (!tabela[i].empty()) {
            for (std::list<Livro>::const_iterator it = tabela[i].begin(); it != tabela[i].end(); ++it) {
                pgs += it->Paginas;
            }
            if (pgs > pgm){
                pgm = pgs;
                edt = tabela[i].front().Editora;
            }else
                pgs = 0;
        }
    }
    std::cout << edt;
}

void Hash::Mostrar_Media_Vendas() const {
    int j = 0;
    float vendas = 0;

    for (int i = 0; i < tamanho_tabela; i++) {
        if (!tabela[i].empty()) {
            std::cout << "\n--- Posicao " << i << " (Editor(a): " << tabela[i].front().Editora << ") ---" << std::endl;

            for (std::list<Livro>::const_iterator it = tabela[i].begin(); it != tabela[i].end(); ++it) {
                j++;
                vendas += it->Vr_venda;
            }
            std::cout << "Média vendas: " << vendas/j << "\n";
            j = 0;
            vendas = 0;
        }
    }
}
