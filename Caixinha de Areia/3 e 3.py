# Validação Completa de Dados:

# Faça um programa que leia e valide as seguintes informações:

#     Nome: maior que 3 caracteres
#     Idade: entre 0 e 150
#     Salário: maior que zero
#     Sexo: 'f' ou 'm'
#     Estado Civil: 's', 'c', 'v' ou 'd'

nome = str(input("Nome: "))
idade = int(input("Idade: "))
salario = float(input("Salário: "))
sexo = str(input("Sexo: "))
estado_civil = str(input("Estado Civil: "))

sexo_lista = ['f', 'm']
estado_civil_lista = ['s', 'c', 'v', 'd']

while ( len(nome) < 3 or (idade < 0 or idade > 150) or (salario < 0) or not(sexo in sexo_lista) or not(estado_civil in estado_civil_lista)):
    print("ERROU UM! DIGITA TUDO DE NOVO!")
    nome = input("Nome: ")
    idade = input("Idade: ")
    salario = input("Salário: ")
    sexo = input("Sexo: ")
    estado_civil = ("Estado Civil: ")

print("\t --- TUDO CERTO COM O CADASTRO! ---")