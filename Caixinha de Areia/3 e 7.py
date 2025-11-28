# Maior de Cinco Números:

# Leia 5 números e informe o maior número.

def main():
    
    teste_numero = 0
    maior_numero = 0
    numero = 1
    while numero <= 5:
        teste_numero = float(input(f"Digite o {numero}º: "))
        if ( teste_numero > maior_numero):
            maior_numero = teste_numero
        numero += 1
    print(f"Maior número: {maior_numero}")

if __name__ == '__main__':

    main()