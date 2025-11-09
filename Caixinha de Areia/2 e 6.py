# Maior de três números:

# Faça um Programa que leia três números e mostre o maior deles.

numero1 = float(input("Digite o 1º numero: "))
numero2 = float(input("Digite o 2º numero: "))
numero3 = float(input("Digite o 3º numero: "))

if numero1 > numero2 and numero1 > numero3:
    print("O 1º número é o maior deles!")
elif numero2 > numero1 and numero2 > numero3:
    print("O 2º número é o maior deles!")
elif numero3 > numero1 and numero3 > numero2:
    print("O 3º número é o maior deles!")
