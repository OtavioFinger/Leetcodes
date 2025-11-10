# Faça um Programa que leia três números e mostre o maior e o menor deles.

numero1 = float(input("Digite o 1º número: "))
numero2 = float(input("Digite o 2º número: "))
numero3 = float(input("Digite o 3º número: "))

maior = numero1
menor = numero1

if numero2 > maior:
    maior = numero2
if numero3 > maior:
    maior = numero3

if numero2 < menor:
    menor = numero2
if numero3 < menor:
    menor = numero3

print(f"Maior: {maior:.2f}")
print(f"Menor: {menor:.2f}")
