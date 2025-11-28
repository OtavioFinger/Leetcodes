# Receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.

def main():
    
    numero = 0

    intervalo1 = int(input("Digite o número do primeiro intervalo:"))
    intervalo2 = int(input("Digite o número do segundo intervalo:"))

    numero = intervalo1
    while intervalo1 <= intervalo2:
        print(f"{numero}")
        numero += 1
        intervalo1 += 1

if __name__ == '__main__':

    main()