# Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.

def main():

    print("Formato: dd/mm/aaaa")

    data = input("Digite uma data: ")

    try:
        
        #Divide o vetor em 3 partes com /
        partes = data.split('/')

        if len(partes) != 3:
            print(f"A data {data} é inválida!")
            return
        
        dia = int(partes[0])
        mes = int(partes[1])
        ano = int(partes[2])

        if ano < 1:
            print(f"A data {data} é inválida!")
            return
    
        if mes < 1 or mes > 12:
            print(f"A data {data} é inválida!")
            return
        
        dias_por_mes = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
            
        if dia < 1 or dia > dias_por_mes[mes-1]:
            print(f"A data {data} é inválida!")
            return

        print(f"A data {data} é válida!")

    except:
        print(f"A data {data} é inválida!")

main()