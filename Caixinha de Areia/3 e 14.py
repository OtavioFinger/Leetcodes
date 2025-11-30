# Peça 10 números inteiros e mostre a quantidade de números pares e ímpares.

def main():
    
    numero = 0
    number = 0
    pares = 0
    impares = 0

    while numero < 10:
        number = int(input("Digite um número: "))
        if number % 2 == 0:
            pares += 1
        else:
            impares += 1
        numero += 1

    print(f"Número de pares: {pares}")
    print(f"Número de ímpares: {impares}")

if __name__ == '__main__':

    main()