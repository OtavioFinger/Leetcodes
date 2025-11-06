# Loja de tintas avançado: Faça um programa para uma loja de tintas que permita diferentes opções de compra. 

#Dá um catalogo de tintas
#Comprador pode escolher entre eles
# Dá o saldo final 



valorTotal = 0

while True:
    
    print("TINTAS DO SEU ARMANDO:")
    print("1. LATA TINTA SUVINIL - R$30,00 \n2. LATA TINTAS KILLING - R$40,00 \n3. LATA TINTAS RENNER R$50,00\n4. SAIR")

    numero = float(input("Opção: "))

    if numero == 4:
           print("SAINDO!")
           break
    elif numero < 1 or numero > 5:
           raise ValueError("Digite um número entre 1 e 4")
    elif numero == 1:
            valorTotal += 30
    elif numero == 2:
            valorTotal += 40
    elif numero == 2:
            valorTotal += 50
    
print(f"Conta a pagar: R${valorTotal},00")