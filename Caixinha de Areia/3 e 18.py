# Dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores.


def main():
   
    iterador = int(input("Digite quantos números vai ter: "))

    if iterador <= 0:
        print("Nenhum número para processar.")
        return

    # Inicializa com o primeiro número
    primeiro_numero = float(input("Digite o 1º: "))
    
    maior_numero = primeiro_numero
    menor_numero = primeiro_numero
    soma_total = primeiro_numero
    
    numero = 2  # Começa do segundo número
   
    while numero <= iterador:
        teste_numero = float(input(f"Digite o {numero}º: "))
        soma_total += teste_numero
        if ( teste_numero > maior_numero):
            maior_numero = teste_numero

        if teste_numero < menor_numero:
            menor_numero = teste_numero

        numero += 1

    print(f"Maior número: {maior_numero}")
    print(f"Menor número: {menor_numero}")
    print(f"Soma total: {soma_total}")

if __name__ == '__main__':

    main()