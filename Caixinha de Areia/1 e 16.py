# Velocidade de download: Faça um programa que peça o tamanho de um arquivo para download (em MB) e a 
# velocidade de um link de Internet (em Mbps), 
# calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

tamanho_MB = float(input("Digite um tamanho de um arquivo para download (em MB): "))
velocidade_Mb = float(input("Digite a velocidade da sua internet: "))

tempo_segundos = (tamanho_MB * 8) / velocidade_Mb

tempo_minutos = tempo_segundos / 60

print(f"Tempo em Minutos: {tempo_minutos:.2f}")