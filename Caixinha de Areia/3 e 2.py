# Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, 
# mostrando uma mensagem de erro e voltando a pedir as informações.

nome_usuario = (input("Digite seu nome de usuario: "))
senha = input("Digite sua senha: ")

while nome_usuario == senha:
    print("ERRO! Nome de usuário e senha devem ser diferentes!")
    senha = input("Digite sua senha: ")

print(f"\nUsuário: {nome_usuario}")
print(f"Senha: {senha}")