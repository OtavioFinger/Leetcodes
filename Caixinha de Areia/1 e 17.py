# Calculadora de horas trabalhadas: Faça um programa que pergunte quanto você ganha por hora e o número de horas 
# trabalhadas no mês. 
# Calcule e mostre o total do seu salário no referido mês.

ganho_hora = float(input("Quanto você ganha por hora? "))
horas = float(input("Quantas horas trabalhados por mês? "))
total = ganho_hora * horas
print(f"Total do salário no mês: {total}")