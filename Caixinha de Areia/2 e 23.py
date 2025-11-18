# Faça um Programa que peça um número e informe se o número é inteiro ou decimal.

numero = str(input("Digite um número: "))

caractere1 = "."
caractere2 = ","

if (caractere1 and caractere2) in numero:
    print("Tente digitar somente com ',' ou '.' ") #tem que usar '' para o compilador não dar problema
elif (caractere1 or caractere2) in numero:
    print("É decimal!")
else:
    print("É inteiro!") 
