# Leia 5 números e informe a soma e a média.


def main():
    
    teste_numero = 0
    numero = 1
    media = 0
    soma = 0

    while numero <= 5:
        teste_numero = float(input(f"Digite o {numero}º: "))
        soma += teste_numero
        numero += 1
        
    media = soma / 5

    print(f"Soma número: {soma:.2f}")
    print(f"Média número: {media:.2f}")

if __name__ == '__main__':

    main()