# Dobro da área do quadrado: Faça um Programa que c
# alcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

ladoQuadrado = float(input("Digite o valor do lado do quadrado: "))
areaQuadrado = pow(ladoQuadrado, 2)
dobroAreaQuadrado = areaQuadrado * 2

print(f"Dobro da área do quadrado: {dobroAreaQuadrado}")