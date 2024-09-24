//https://judge.beecrowd.com/en/problems/view/1045
//Vinicius Valoci Gaioli


#include <iostream>

using namespace std;

int main() {
    double a;
    double b;
    double c;
    double temp;
    cin >> a;
    cin >> b;
    cin >> c;

    if  (b > a){
        temp = a;
        a = b;
        b = temp;
    }

    if(c > a){
        temp = a;
        a = c;
        c = temp;
    }

    if(c > b){
        temp = b;
        b = c;
        c = temp;
    }

    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO\n";
    } else {
        if ((a * a) > (b * b) + (c * c)) {
            cout << "TRIANGULO OBTUSANGULO\n";
        } else if ((a * a) < (b * b) + (c * c)) {
            cout << "TRIANGULO ACUTANGULO\n";
        } else {
            cout << "TRIANGULO RETANGULO\n";
        }

        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO\n";
        } else if (a != b && b != c) {
        } else {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }

    return 0;
}