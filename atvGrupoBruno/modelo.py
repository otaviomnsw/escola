#MEUUUUUUUUUUUUUU CODIGOOOOOOOOOOOOOOOO AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
# -- OTÁVIO

class Conta:
    TAXA_SERVICO = 0.1
    def __init__(self):
        self.pessoas = []

    def adicionar(self, nome, valor):
        pessoa = {
            "nomeP": nome,
            "gasto" : valor,
        }
        self.pessoas.append(pessoa)

    def total_pessoas(self):
        return len(self.pessoas)

    def subtotal(self):
        gasto = 0
        for pessoa in self.pessoas:
            gasto += [pessoa["gasto"]]
        return gasto

    def valor_servico(self):
        gasto = self.subtotal()
        return gasto*0.1

    def total(self):
        taxa = self.valor_servico()
        gasto = self.subtotal()
        return taxa + gasto

    def valor_por_pessoa(self):
        if (len(self.pessoas) > 0):
            return self.total() / len(self.pessoas)
        else:
            return 0

    def quem_consumiu_mais(self):
        if (len(self.pessoas) > 0):
            maior = {
                "nomeP": "677777",
                "gasto": -1,
            }
            for pessoa in self.pessoas:
                if pessoa["gasto"] > maior["gasto"]:
                    maior = pessoa
        else:
            return "Nimguém"

    def listar(self):
        listinha = []
        for pessoa in self.pessoas:
            listinha.append((pessoa["nomeP"], pessoa["gasto"]))
            
        return listinha

    def limpar(self):
        self.pessoas = []