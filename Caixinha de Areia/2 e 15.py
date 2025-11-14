# Faça um Programa que peça os 3 lados de um triângulo. 
# O programa deverá informar se os valores podem ser um triângulo e, se for, se é equilátero, isósceles ou escaleno.

lado1 = float(input("Digite o lado 1: "))
lado2 = float(input("Digite o lado 2: "))
lado3 = float(input("Digite o lado 3: "))

if lado1 == lado2 and lado1 == lado3:
    print("Equilátero")
elif (lado1 == lado2 and lado2 != lado3) or (lado1 != lado2 and lado2 == lado3) or (lado1 == lado3 and lado2 != lado3): 
    print("Isósceles")
elif lado1 != lado2 and lado1 != lado2 and lado2 != lado3:
    print("Escaleno")
