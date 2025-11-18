# Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades.

def main():

    numero = int(input("Digite um número inteiro maior menor que 1000: "))

    if numero >= 1000:
        raise ValueError("Tem que ser menor que mil")
    else:
        centena = numero // 100 # o // pega só a parte inteira
        dezena = (numero % 100) // 10
        unidade = numero % 10
    
    print(f"Centena: {centena}\nDezena: {dezena}\nUnidade: {unidade}")

main()