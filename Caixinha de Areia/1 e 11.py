# Peso ideal: Tendo como dados de entrada a altura de uma pessoa, 
# construa um algoritmo que calcule seu peso ideal, usando a fórmula: (72.7*altura) - 58.

altura = float(input("Altura de um pessoa: "))
peso = (72.7*altura) - 58
print(f"Seu peso ideal é {peso:.2f} kg")