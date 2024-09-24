//https://judge.beecrowd.com/en/problems/view/2187
//Vinicius Valoci Gaioli

#include <iostream>

using namespace std;

void calcularNotas(int valor) {
    int cinquenta = 0;
    int dezena = 0;
    int cinco = 0;
    int unidade = 0;

    cinquenta = valor / 50;
    valor = valor % 50;
    dezena = valor / 10;
    valor = valor % 10;
    cinco = valor / 5;
    unidade = valor % 5;

    cout << cinquenta << " " << dezena << " " << cinco << " " << unidade << "\n\n";

}


int main() {

    int valor = 1;
    int teste = 1;
    cin >> valor;
    while (valor != 0) {
        cout << "Teste " << teste << "\n";
        calcularNotas(valor);
        teste++;
        cin >> valor;
    }
    return 0;
}

