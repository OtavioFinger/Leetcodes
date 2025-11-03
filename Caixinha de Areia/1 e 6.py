# Área do círculo: Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

import math

raio = float(input("Diga o raio de um círculo: "))

area = math.pi * pow(raio,2)
print(f"Área do círculo: {area:.2f}")