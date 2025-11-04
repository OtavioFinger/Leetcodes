# Peso ideal por gênero: Tendo como dado de entrada a altura (h) de uma pessoa, 
# construa um algoritmo que calcule seu peso ideal, utilizando fórmulas específicas para homens e mulheres.

altura = float(input("Altura de um pessoa em m: ")) * 100
peso_homem = 52 + ( 0.75 * (altura - 152.4))
peso_mulher = 49 + ( 0.67 * (altura - 152.4))

print(f"Peso ideal de homi: {peso_homem:.2f}")
print(f"Peso ideal de muié: {peso_mulher:.2f}")