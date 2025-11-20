# Faça um Programa para leitura de três notas parciais de um aluno. 
# O programa deve calcular a média e apresentar o status conforme a média.

nota1 = float(input("Digite a 1ª nota: "))
nota2 = float(input("Digite a 2ª nota: "))
nota3 = float(input("Digite a 3ª nota: "))

media = (nota1 + nota2 + nota3) / 3

print(f"Média do aluno: {media:.2f}")