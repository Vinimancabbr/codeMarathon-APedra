#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//  void status(int moedas[], int cartinhas, double valorTemp, double total, int moedasGastas[]);

int main() {
    string total;
    int moedas[4];
    int moedasGastas[4] = {0};
    double totalD;
    double valorTemp = 0;
    int cartinhas = 0;
    int moedasR = 0;
    int cartinhatemp = 0;
    cin >> total;
    cin >> moedas[0] >> moedas[1] >> moedas[2] >> moedas[3];


    total = total.substr(2);

    totalD = stod(total);

    while (moedas[0] > 0) {
        valorTemp += 0.25;
        moedas[0] -= 1;
        moedasGastas[0] += 1;
        if (valorTemp >=totalD) {
            //  cout << "Compra realizada!" << endl;
            cartinhas += (valorTemp/totalD);
            cartinhatemp =  (valorTemp/totalD);
            valorTemp = valorTemp - (totalD * cartinhatemp);
            cartinhatemp = 0;
            moedasGastas[0] = 0;
        } 
        //  status(moedas, cartinhas, valorTemp, totalD, moedasGastas);
    }
    while (moedas[1] > 0) {
        valorTemp += 0.10;
        moedas[1] -= 1;
        moedasGastas[1] += 1;
        if (valorTemp >=totalD) {
            cout << "Compra realizada!" << endl;
            cartinhas += (valorTemp/totalD);
            cartinhatemp =  (valorTemp/totalD);
            valorTemp = valorTemp - (totalD * cartinhatemp);
            cartinhatemp = 0;
            moedasGastas[0] = 0;
            moedasGastas[1] = 0;
        }
        //  status(moedas, cartinhas, valorTemp, totalD, moedasGastas);
    }
    while (moedas[2] > 0) {
        valorTemp += 0.05;
        moedas[2] -= 1;
        moedasGastas[2] += 1;
        if (valorTemp >=totalD) {
            // cout << "Compra realizada!" << endl;
            cartinhas += (valorTemp/totalD);
            cartinhatemp =  (valorTemp/totalD);
            valorTemp = valorTemp - (totalD * cartinhatemp);
            cartinhatemp = 0;
            moedasGastas[0] = 0;
            moedasGastas[1] = 0;
            moedasGastas[2] = 0;
        }
        //  status(moedas, cartinhas, valorTemp, totalD, moedasGastas);
    }
    while (moedas[3] > 0) {
        valorTemp += 0.01;
        moedas[3] -= 1;
        moedasGastas[3] += 1;
        if (valorTemp >=totalD) {
            //  cout << "Compra realizada!" << endl;
            cartinhas += (valorTemp/totalD);
            cartinhatemp =  (valorTemp/totalD);
            valorTemp = valorTemp - (totalD * cartinhatemp);
            cartinhatemp = 0;
            moedasGastas[0] = 0;
            moedasGastas[1] = 0;
            moedasGastas[2] = 0;
            moedasGastas[3] = 0;
        }
        //  status(moedas, cartinhas, valorTemp, totalD, moedasGastas);
    }
    // cout << "ValorTemp: " << valorTemp << endl;
    // cout << "TotalD: " << totalD << endl;


    if (ceil(valorTemp * 100)/100 >= ceil(totalD * 100)/100) {
        cout << "Teste" << endl;
        cartinhas += 1;
        moedasGastas[0] = 0;
        moedasGastas[1] = 0;
        moedasGastas[2] = 0;
        moedasGastas[3] = 0;
    }

    moedasR =+ moedasGastas[0] + moedasGastas[1] + moedasGastas[2] + moedasGastas[3];

    cout << cartinhas << endl;
    cout << moedasR << endl;

    return 0;
}

//  void status(int moedas[], int cartinhas, double valorTemp, double total, int moedasGastas[]) {
//      cout << "Moedas Restantes: { " << moedas[0] << ", " << moedas[1] << ", " << moedas[2] << ", " << moedas[3] << "}" << endl;
//      cout << "Moedas Gastas: { " << moedasGastas[0] << ", " << moedasGastas[1] << ", " << moedasGastas[2] << ", " << moedasGastas[3] << "}" << endl;
//      cout << "Cartinhas ja compradas:" << cartinhas << endl;
//      cout << "ValorTemp: " << valorTemp << endl;
//      cout << "Total: " << total << endl;
//  }