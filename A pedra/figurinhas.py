
moedas = list()
moedasGastas = [0, 0, 0, 0]
valorTemp = 0
cartinhas = 0
moedasR = 0
cartinhasTemp = 0
total = input()
total = float(total[2::])

# print(total)

# def status():
#     print("Moedas Restantes: {" f'{moedas[0]} {moedas[1]} {moedas[2]} {moedas[3]} ' + "}")
#     print("Moedas Gastas: {" f'{moedasGastas[0]} {moedasGastas[1]} {moedasGastas[2]} {moedasGastas[3]}' + "}")
#     print("Cartinhas ja compradas: " + f'{cartinhas}')
#     print("Valor Temp: " + f'{valorTemp}')
#     print("Total: " + f'{total}')

for i in input().split():
    moedas.append(float(i))

while moedas[0] > 0:
    valorTemp += 0.25
    moedas[0] -= 1
    moedasGastas[0] += 1
    
    if valorTemp >= total:
        cartinhas += int(valorTemp/total)
        cartinhasTemp = int(valorTemp/total)
        valorTemp = valorTemp - (cartinhasTemp * total)
        cartinhasTemp = 0
        moedasGastas[0] = 0
    # status()
    
while moedas[1] > 0:
    valorTemp += 0.1
    moedas[1] -= 1
    moedasGastas[1] += 1
    
    if valorTemp >= total:
        cartinhas += int(valorTemp/total)
        cartinhasTemp = int(valorTemp/total)
        valorTemp = valorTemp - (cartinhasTemp * total)
        cartinhasTemp = 0
        moedasGastas[0] = 0
        moedasGastas[1] = 0
    # status()
    
while moedas[2] > 0:
    valorTemp += 0.05
    moedas[2] -= 1
    moedasGastas[2] += 1
    
    if valorTemp >= total:
        cartinhas += int(valorTemp/total)
        cartinhasTemp = int(valorTemp/total)
        valorTemp = valorTemp - (cartinhasTemp * total)
        cartinhasTemp = 0
        moedasGastas[0] = 0
        moedasGastas[1] = 0
        moedasGastas[2] = 0
    # status()
    
while moedas[3] > 0:
    valorTemp += 0.01
    moedas[3] -= 1
    moedasGastas[3] += 1
    
    if valorTemp >= total:
        cartinhas += int(valorTemp/total)
        cartinhasTemp = int(valorTemp/total)
        valorTemp = valorTemp - (cartinhasTemp * total)
        cartinhasTemp = 0
        moedasGastas[0] = 0
        moedasGastas[1] = 0
        moedasGastas[2] = 0
        moedasGastas[3] = 0
    # status()
    
moedasR += moedasGastas[0] + moedasGastas[1] + moedasGastas[2] + moedasGastas[3]

print(cartinhas)
print(moedasR)
