//https://judge.beecrowd.com/en/problems/view/1160
//Vinicius Valoci Gaioli

#include <iostream>

using namespace std;

int bitShuffling(unsigned long int num, int a, int b) {
    int bitA = (num >> a) & 1;
    int bitB = (num >> b) & 1;

    if (bitA != bitB) {
        int filtBinA = 1 << a;
        int filtBinB = 1 << b;

        num = num ^ filtBinA;
        num = num ^ filtBinB;
    }
    return num;
}

int main() {
    int k;
    int n;
    int a;
    int b;
    int val;
    int max;
    int min;

    do {
        cin >> n;
        cin >> k;
        val = n;
        max = n;
        min = n;

        for (int i = k; i > 0; i--) {
            cin >> a;
            cin >> b;
            val = bitShuffling(n, a, b);
            if (val < min) {
                min = val;
            }
            if (val > max) {
                max = val;
            }
        }
        cout << val << " " << max << " " << min << "\n";
    } while (k != 0 && n != 0);
    return 0;
}
