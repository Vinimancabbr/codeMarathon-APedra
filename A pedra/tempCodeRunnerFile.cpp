#include <iostream>

using namespace std;

int main() {
    int cortes;
    int pedacosComprados = 0;
    double precos[11] = {-1};
    double valorPorPedaco[1001] = {9999999};
    double menorValorPorPedaco;
    double total = 0;
    int tempI = 99999;

    cin >> cortes;

    for (int i = 1; i <= cortes; i++) {
        cin >> precos[i];
        valorPorPedaco[i] = precos[i]/i;
    }

    menorValorPorPedaco = 999999;

    while (pedacosComprados < cortes) {
        for (int i = 1; i <= cortes; i++) {
            if (valorPorPedaco[i] < menorValorPorPedaco && (pedacosComprados + i) <= cortes) {
                menorValorPorPedaco = valorPorPedaco[i];
                tempI = i;
                // cout << "Preco atual: " << precos[i] << endl;
                // cout << "menorValorPorPedaco: " << menorValorPorPedaco << endl;
            }
        }
        if ((pedacosComprados + tempI) <= cortes) {
            total += tempI * valorPorPedaco[tempI];
            pedacosComprados += tempI;
            // cout << "pedacosComprados: " << pedacosComprados << endl;
        } else {
            menorValorPorPedaco = 999999;
            // cout << "Valor menor pedaco reiniciado" << endl;
        }
    }
    printf("%.2f", total);
    
    return 0;
}