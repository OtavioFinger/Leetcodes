# Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

numero = float(input("Digite um número: "))

if numero == 0:
    print("IGUAL A ZERO")
elif numero > 0:
    print("É positivo!")
elif numero < 0:
    print("É negativo")