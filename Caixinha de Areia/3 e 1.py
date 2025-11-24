# Faça um programa que peça uma nota, entre zero e dez. 
# Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.

nota = float(input("Digite uma nota entre zero e 10: "))

while nota < 0 or nota > 10:
    print("Inválido! Digite a nota novamente")
    nota = float(input("Digite uma nota entre zero e 10: "))

print(f"Sua nota foi de: {nota:.2f}")

#Aqui meu erro foi a condição do while, de determinar um intervalo que DEVE REPETIR a pergunta.