from abc import ABC, abstractmethod
from math import pi

class Forma(ABC):
    def __init__(self, cor):
        self.__cor = cor

    @property
    def cor(self):
        return self.__cor

    @abstractmethod
    def area(self):
        pass

    @abstractmethod
    def perimetro(self):
        pass

class Quadrado(Forma):
    def __init__(self, cor, lado):
        super().__init__(cor)
        self.lado = lado

    def area(self):
        print(f"A área do quadrado é: {self.lado*self.lado}")
    
    def perimetro(self):
        print(f"O perímetro quadrado é: {self.lado*4}")

class Triangulo(Forma):
    def __init__(self, cor, lado1, lado2, base, altura):
        super().__init__(cor)
        self.lado1 = lado1
        self.lado2 = lado2
        self.base = base
        self.altura = altura
        while self.lado1 + self.lado2 < self.base or self.lado1 + self.base < self.lado2 or self.lado2 + self.base < self.lado1:
            print("Este triângulo é invalido! Por favor digite outras medidas: ")
            self.lado1 = int(input("Digite o lado 1 :"))
            self.lado2 = int(input("Digite o lado 2 : "))
            self.base = int(input("Digite a base: "))

    def area(self):
        if self.lado1 == self.lado2 == self.base:
            self.areatr = self.lado1**2 * 3**0.5 / 2
        else:
            self.areatr = self.altura*self.base/2
        print(f"A área do triângulo é: {self.areatr}")
        
    def perimetro(self):
        if self.lado1 == self.lado2 == self.base:
            self.perim = self.lado1*3
        else:
            self.perim = self.lado1 + self.lado2 + self.base
        print(f"O perímetro do triângulo é: {self.perim}")

class Circulo(Forma):
    def __init__(self, cor, raio):
        super().__init__(cor)
        self.raio = raio
    
    def area(self):
        print(f"A área do círculo é: {pi*self.raio**2:.2f}")

    def perimetro(self):
        print(f"O perímetro do círculo é: {pi*self.raio*2:.2f}")

class Retangulo(Forma):
    def __init__(self, cor, base, altura):
        super().__init__(cor)
        self.base = base
        self.altura = altura
    
    def area(self):
        print(f"A área do retângulo é: {self.base*self.altura}")

    def perimetro(self):
        print(f"O perímetro do retângulo é: {self.base*2 + self.altura*2}")

class Hexagono(Forma):
    def __init__(self, cor, lado):
        super().__init__(cor)
        self.lado = lado
        self.altura = lado*3**0.5/2

    def area(self):
        print(f"A área do hexágono é: {(self.lado**2)*3*(3**0.5)/2:.2f}")

    def perimetro(self):
        print(f"O períemtro do hexágono é: {self.lado*6}")

# obj1 = Forma("Verde")
qua1 = Quadrado("Branco", 5)
tri1 = Triangulo("Preto", 10, 4, 7, 8)
cir1 = Circulo("Azul", 4)
ret1 = Retangulo("Vermelho", 4, 6)
hex1 = Hexagono("Ciano", 6)
formas = [qua1, tri1, cir1, ret1, hex1]

for i in formas:
    print(f"A cor da forma é: {i.cor}")
    i.area()
    i.perimetro()


"""
1 - Deu erro, já que não se pode criar um objeto com classe abstrata
2 - Irá dar erro, já que nesse código não adcionei setter. Usamos ele para deixar mais fácil a alteração do código.
3 - A cor e o getter da cor.
4 - O método foi de acordo com a classe, sendo diferente para cada classe específica.
5 - Feita no código, apenas basta adicionar código extra.
6 - Este princípio fala sobre como softwares têm de estar abertos para extensão e fechados para modificação, ou seja, deve conseguir 
adicionar novos comportamentos mas sem alterar o código existente que já funciona. Conseguimos ver com a classe abstrata, em que podemos
adicionar mais coisas nela ou adicionar novas formas como outras classes que vão herdar de Forma.


"""
