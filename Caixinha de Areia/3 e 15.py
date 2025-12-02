# Gere a série de Fibonacci até o n-ésimo termo (sequência: 1,1,2,3,5,8...).

def fibonacci_recursivo(n):
    if n <= 1:
        return n
    else:
        return fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2)

# Exemplo de uso para gerar os 10 primeiros números
# (para usar a recursão, é necessário chamar a função para cada número da sequência)
for i in range():
    print(fibonacci_recursivo(i))
