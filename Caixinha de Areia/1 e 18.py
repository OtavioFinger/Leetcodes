# Números em ordem decrescente: Faça um Programa que leia três números e mostre-os em ordem decrescente.


lista_numeros = []
num_entradas = 3

for i in range(num_entradas): # pega de 0 a 2

    numero = float(input("Digite um número: "))
    lista_numeros.append(numero)

lista_numeros.sort()
print(f"Lista ordenada: {lista_numeros:}")