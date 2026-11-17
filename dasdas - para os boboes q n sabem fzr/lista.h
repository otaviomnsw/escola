#include <iostream>
#include <vector>
#include <list>
#include <string>

class Livro {
    public:
        std::string Titulo;
        std::string Autor;
        std::string Editora;
        int Paginas;
        float Vr_venda;

        Livro(std::string t, std::string a, std::string e, int p, float v)
            : Titulo(t), Autor(a), Editora(e), Paginas(p), Vr_venda(v) {}
};


class Hash {
    private:
        std::vector<std::list<Livro>> tabela;
        int tamanho_tabela;

        unsigned int funcao_hashing(std::string chave);

    public:
        Hash(int tam);
        void inserir(std::string tit, std::string aut, std::string edit, int pgs, float vr_venda);
        void mostrar_hash() const;
        void Mostrar_Maior_Paginas() const;
        void Mostrar_Media_Vendas() const;
};
