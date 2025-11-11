# Faça um programa para o cálculo de uma folha de pagamento, com descontos de IR (conforme tabela) e 3% 
# para o Sindicato. O FGTS corresponde a 11% do Salário Bruto.
# Salário Bruto 	Desconto IR
# Até 900 	Isento
# Até 1500 	5%
# Até 2500 	10%
# Acima de 2500 	20%

salario_bruto = float(input("Qual seu salário: "))

#Desconto do sincato
desconto_sindicato = salario_bruto * 0.03

#Desconto do FGTS
fgts = salario_bruto * 0.11

if salario_bruto <= 900:
    salario_ir_descontado = salario_bruto
    desconto_ir = 0
elif salario_bruto <= 1500:
    desconto_ir = 0.05
    salario_ir_descontado = salario_bruto * (desconto_ir)
elif salario_bruto <= 2500:
    desconto_ir = 0.10
    salario_ir_descontado = salario_bruto * (desconto_ir)
elif salario_bruto > 2500:
    desconto_ir = 0.20
    salario_ir_descontado = salario_bruto * (desconto_ir)

fgts = salario_bruto * 0.11
salario_liquido = salario_bruto - salario_ir_descontado - desconto_sindicato

print(f"\n--- FOLHA DE PAGAMENTO ---")
print(f"Salário Bruto: R$ {salario_bruto:.2f}")
print(f"\nDESCONTOS:")
print(f"\nSalário Líquido: R$ {salario_liquido:.2f}")
print(f"\nINFORMAÇÕES ADICIONAIS:")
print(f"FGTS (11% - pago pela empresa): R$ {fgts:.2f}")