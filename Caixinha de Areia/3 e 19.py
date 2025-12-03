# Aceite apenas números entre 0 e 1000 no programa anterior.

def main():
   
    iterador = int(input("Digite quantos números vai ter: "))

    if iterador <= 0:
        print("Nenhum número para processar.")
        return

    # Inicializa com o primeiro número
    primeiro_numero = float(input("Digite o 1º: "))

    if ( primeiro_numero > 1000 or primeiro_numero < 0 ):
        raise ValueError("Somente números menores que 1000 e maiores que 0 são permitidos!")

    maior_numero = primeiro_numero
    menor_numero = primeiro_numero
    soma_total = primeiro_numero

    numero = 2  # Começa do segundo número
   
    while numero <= iterador:
        teste_numero = float(input(f"Digite o {numero}º: "))
        if ( teste_numero > 1000 or teste_numero < 0):
            raise ValueError("Somente números menores que 1000 e maiores que 0 são permitidos!")
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