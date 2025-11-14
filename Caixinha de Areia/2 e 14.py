# Conceito do aluno:

# Faça um programa que lê as duas notas parciais de um aluno e calcule a média, atribuindo conceitos conforme tabela:
# Média 	Conceito 	Status
# 9.0 a 10.0 	A 	APROVADO
# 7.5 a 9.0 	B 	APROVADO
# 6.0 a 7.5 	C 	APROVADO
# 4.0 a 6.0 	D 	REPROVADO
# 0 a 4.0 	E 	REPROVADO

nota1 = float(input("Digite a primeira nota do aluno: "))
nota2 = float(input("Digite a segunda nota do aluno: "))

media = (nota1 + nota2) / 2

    
print(f"\nMédia do aluno: {media:.1f}")
    
if media >= 9.0 and media <= 10.0:
        print("CONCEITO: A")
        print("APROVADO!")
elif media >= 7.5 and media < 9.0:
        print("CONCEITO: B")
        print("APROVADO!")
elif media >= 6.0 and media < 7.5:
        print("CONCEITO: C")
        print("APROVADO!")
elif media >= 4.0 and media < 6.0:
        print("CONCEITO: D")
        print("REPROVADO!")
elif media >= 0.0 and media < 4.0:
        print("CONCEITO: E")
        print("REPROVADO!")
else:
        print("Média fora do intervalo esperado!")