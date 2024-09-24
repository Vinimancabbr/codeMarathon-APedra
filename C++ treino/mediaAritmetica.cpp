#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    double A, B;
    cin >> A >> B;

    // Seu código vai aqui
    double media = (A + B) / 2;
    if (media < 4) {
        cout << "Reprovado";
    } else if (media >= 7) {
        cout << "Aprovado";
    } else {
        cout << "Recuperacao";
    }
    return 0;
}
