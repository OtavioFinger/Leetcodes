# Faça um programa que pergunte o preço de três produtos e 
# informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

produto1 = float(input("Digite o 1º produto: "))
produto2 = float(input("Digite o 2º produto: "))
produto3 = float(input("Digite o 3º produto: "))

if produto1 < produto2 and produto1 < produto3:
    print("O 1º produto é o mais barato deles!")
elif produto2 < produto1 and produto2 < produto3:
    print("O 2º produto é o mais barato deles!")
elif produto3 < produto1 and produto3 < produto2:
    print("O 3º produto é o mais barato deles!")