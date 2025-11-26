# Supondo que a população de um país A seja 80000 habitantes com taxa anual de 3% e a 
# população de B seja 200000 com taxa de 1.5%. 
# Calcule quantos anos são necessários para que A ultrapasse ou iguale B.

populacao_Pais_A = 80000
populacao_Pais_B = 200000
taxa_crecimento_A = 0.03
taxa_crecimento_B = 0.015
ano_resultado = 0

while populacao_Pais_A < populacao_Pais_B:
    populacao_Pais_A = populacao_Pais_A + (populacao_Pais_A * taxa_crecimento_A)
    populacao_Pais_B = populacao_Pais_B + (populacao_Pais_B * taxa_crecimento_B)
    ano_resultado += 1

print(f"Demorou {ano_resultado} anos pra isso acontecer")