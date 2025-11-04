# Pescador e multa: João Papo-de-Pescador comprou um microcomputador para controlar o rendimento diário de seu trabalho. 
# Faça um programa que leia a variável peso (peso de peixes) e calcule o excesso e a multa a pagar.

valor_multa = 4 #4 reais por kilo
valor_kg_excesso = 50

peso_peixe = float(input("Peso dos peixes pegos: "))   

if peso_peixe > valor_kg_excesso:

        total_multa = (peso_peixe - valor_kg_excesso) * valor_multa
        print(f"Total de multa a pagar: {total_multa:.2f}")

else:
    print("Não precisa pagar multa!")