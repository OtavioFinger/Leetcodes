# Faça um Programa que peça dois números e imprima o maior deles.

numero1 = float(input("Digite um número: "))
numero2 = float(input("Digite outro número: "))

if numero1 > numero2:
    print("Numero 1 é MAIOR")
elif numero1 < numero2:
    print("Número 2 é MAIOR")
else:
    print("São iguais")