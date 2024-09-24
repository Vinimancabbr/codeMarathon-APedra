
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

void montarArray(double array[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> array[i][j];
        }
    }
}

double sumOrAverage(double array[12][12], char tipo) {
    double soma = 0;
    int contador = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            soma += array[i][j];
            contador++;
        }
    }
    if (tipo == 'S') {
        return soma;
    }
    return soma / contador;
}

int main() {
    char tipo;
    double array[12][12];
    long double valor;
    cin >> tipo;
    montarArray(array);
    valor = sumOrAverage(array, tipo);

    cout << fixed << setprecision(1) << valor << endl;
    return 0;
}
