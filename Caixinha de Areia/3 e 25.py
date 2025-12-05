# Classificação por Idade:

# Peça idades de n pessoas e classifique a turma como:

#     Jovem (média 0-25)
#     Adulta (média 26-60)
#     Idosa (média >60)

n = int(input("Digite o número de pessoas na turma: "))
i = 0

while i < n:
    idade = int(input("Digite a idade de alguém da turma: "))
    idade += idade
    i += 1

    media = idade / n

if media >= 0 and media <= 25:
    print("Turma é Jovem!")
elif media >= 26 and media <= 60:
    print("Turma Adulta!")
elif media > 60:
    print("Turma idosa!")