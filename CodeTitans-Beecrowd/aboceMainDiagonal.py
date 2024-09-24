def montarArray():
    array = []
    for i in range(12):
        linha = []
        for j in range(12):
            linha.append(float(input()))
        array.append(linha)
    return array

def sumOrAverage(array, tipo):
    soma = 0
    contador = 0
    for i in range(12):
        for j in range(i + 1, 12): # Começa de i + 1 para considerar apenas os elementos acima da diagonal principal
            soma += array[i][j]
            contador += 1
    if tipo == 'S':
        return soma
    return soma / contador

tipo = input()
array = montarArray()
valor = sumOrAverage(array, tipo)

print("{:.1f}".format(valor))