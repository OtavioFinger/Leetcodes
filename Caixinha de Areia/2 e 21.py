# Faça um Programa para um caixa eletrônico que informe quantas notas de cada valor 
# serão fornecidas para um saque (notas de 1, 5, 10, 50 e 100 reais).

dinheiro = int(input("Digite quanto de dinheiro quer trocar: "))

if dinheiro <= 0:
    raise ValueError("Não pode sacar valores iguais ou menores que 0")
else:
    notas_100 = dinheiro // 100
    dinheiro = dinheiro % 100

    notas_50 = dinheiro // 50
    dinheiro = dinheiro % 50

    notas_10 = dinheiro // 10
    dinheiro = dinheiro % 10

    notas_5 = dinheiro // 5
    dinheiro = dinheiro % 5

    notas_1 = dinheiro

    print(f"Notas fornecidas:")
    print(f"\tNotas de 100: {notas_100}")
    print(f"\tNotas de 50: {notas_50}")
    print(f"\tNotas de 10: {notas_10}")
    print(f"\tNotas de 5: {notas_5}")
    print(f"\tNotas de 1: {notas_1}")

    


