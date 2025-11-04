# Loja de tintas: Faça um programa para uma loja de tintas. 
# O programa deverá pedir o tamanho em metros quadrados da área a ser pintada e calcular a quantidade de tinta necessária 
# e o preço total.

preco_lata = 120 # 120 reais

area_metros = float(input("Digite a área pintada em m²: "))

litros = area_metros / 3
latas_necessarias = litros / 18

preco_total = latas_necessarias * preco_lata

print(f'Você precisa comprar: {latas_necessarias:.2f} Latas de tinta !!')
print(f'Você precisa gastar: {preco_total:.2f} reais...')