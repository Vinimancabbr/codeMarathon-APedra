//https://judge.beecrowd.com/en/problems/view/1160
//Vinicius Valoci Gaioli

#include <stdio.h>
#include <iostream>

using namespace std;

int greaterTime(int pa, int pb, double ga, double gb) {
    int years = 0;
    while (pa <= pb && years <= 100) {
        pa = pa + (pa * (ga/100));
        pb = pb + (pb * (gb/100));
        years = years + 1;
    }
    return years;
}

int main() {
    int pa;
    int pb;
    double ga;
    double gb;
    int vezes;
    cin >> vezes;
    for (int i = 0; i < vezes; i++) {
        cin >> pa >> pb >> ga >> gb;
        int years = greaterTime(pa, pb, ga, gb);
        if (years > 100) {
            cout << "Mais de 1 seculo.\n";
        } else {
            cout << years << " anos.\n";
        }
    }
    return 0;
}
