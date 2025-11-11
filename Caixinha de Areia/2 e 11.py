# As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores. Faça um programa que r
# ecebe o salário de um colaborador e o reajuste segundo o seguinte critério:
# Faixa salarial 	Aumento
# Até R$ 280,00 	20%
# R$ 280,00 a R$ 700,00 	15%
# R$ 700,00 a R$ 1500,00 	10%
# Acima de R$ 1500,00 	5%

# O programa deve mostrar o salário antes do reajuste, percentual de aumento, valor do aumento e novo salário.

salario = float(input("Digite seu salário: "))
novo_salario = salario

if salario <= 280:
    novo_salario = salario * 1.2
elif salario > 280 and salario <= 700:
    novo_salario = salario * 1.15
elif salario > 700 and salario <= 1500:
    novo_salario = salario * 1.1
elif salario > 1500:
    novo_salario = salario * 1.05

print(f"Salário antigo: {salario}")
print(f"Percentual de aumento: {novo_salario / salario}%")
print(f"Valor do aumento: {novo_salario - salario:.2f}")
print(f"Novo salário: {novo_salario}")