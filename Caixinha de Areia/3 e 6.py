# Impressão de Números:

# Faça um programa que imprima na tela:

#     Os números de 1 a 20, um abaixo do outro
#     Os mesmos números, um ao lado do outro

def main():

    numero = 1

    while numero <= 20:
        print("Numero ")
        numero += 1
        
    print("\n")
    numero = 0

    while numero <= 20:
        print("Numero", end=" ")
        numero += 1

if __name__ == '__main__':

    main()
