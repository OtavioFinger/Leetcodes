# Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

letra = (input("Digite letra: "))

consoantes = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z']
vogais = ['a', 'e', 'i', 'o', 'u']
str_consoantes = "bcdefghjklmnpqrstvwxyz"

if letra.lower() in str_consoantes: # in se tem aquilo dentro da string, consoantes ou str_consoantes
    print("É consoante")
else:
    print("É vogal")