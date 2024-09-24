#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    char conjuntos[2][32];
    int tokens[20];
    string inputInteiro1;
    string inputInteiro2;
    string inputInteiro3;
    int tamanhoInput;
    int grupo = 0;
    
    getline(cin, inputInteiro1);
    getline(cin, inputInteiro2);
    cin >> inputInteiro3;

    for (int i = 0; i < 32; i++) {
        conjuntos[0][i] = inputInteiro1[i]; 
        conjuntos[1][i] = inputInteiro2[i]; 
    }

    tamanhoInput = inputInteiro3.length();

    for (int k = 0; k < tamanhoInput; k+=5) {
        tokens[k/5] = stoi(inputInteiro3.substr(k, 5), nullptr, 2);
    }

    for (int l = 0; l < tamanhoInput/5; l++) {
        if (grupo == 0) {
            if (tokens[l] == 31) {
                grupo = 1;
            } else {
                cout << conjuntos[0][tokens[l]];
            }
        }  
        if (grupo == 1) {
            if (tokens[l] == 27) {
                grupo = 0;
            } else {
                cout << conjuntos[1][tokens[l]];
            }
        }
    }
    cout << endl;
    return 0;
}
