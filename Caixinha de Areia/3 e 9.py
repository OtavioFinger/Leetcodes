# Imprima os números ímpares entre 1 e 50.

def main():
    
    numero = 0


    while numero <= 50:
        if ( numero % 2 != 0 ):
            print(f"{numero}")
        numero += 1

if __name__ == '__main__':

    main()