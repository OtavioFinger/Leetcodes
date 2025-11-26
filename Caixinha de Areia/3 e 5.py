# Altere o programa anterior permitindo ao usuário 
# informar as populações e taxas de crescimento iniciais, validando as entradas.

populacao_Pais_A = float(input("Digite a população do país A: "))
if populacao_Pais_A < 0:
    raise ValueError("Não pode ter uma população zerada.")

populacao_Pais_B = float(input("Digite a população do país B: "))
if populacao_Pais_B < 0:
    raise ValueError("Não pode ter uma população zerada.")

taxa_crecimento_A = float(input("Digite a taxa de crescimento do país A:"))
if taxa_crecimento_A <= 0:
    raise ValueError("Não pode ter uma taxa menor que 0 ou zerada.")

taxa_crecimento_B = float(input("Digite a taxa de crescimento do país B:"))
if taxa_crecimento_B <= 0:
    raise ValueError("Não pode ter uma taxa menor que 0 ou zerada.")


ano_resultado = 0

while populacao_Pais_A < populacao_Pais_B:
    populacao_Pais_A = populacao_Pais_A + (populacao_Pais_A * taxa_crecimento_A)
    populacao_Pais_B = populacao_Pais_B + (populacao_Pais_B * taxa_crecimento_B)
    ano_resultado += 1

print(f"Demorou {ano_resultado} anos pra isso acontecer")