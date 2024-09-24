//Vinicius Valoci Gaioli
//https://judge.beecrowd.com/en/problems/view/2222

#include <iostream>
#include <cmath>

using namespace std;


long long int createSet(int size) {
    long long int set = 0;
    double valor;
    for (int i = 0; i < size; i++) {
        cin >> valor;
        set += powl(2, valor);
    }
    return set;
}

int test(int x, int y, int testType,  long long int conjunto[]) {
        if (testType == 1) {
            return __builtin_popcountll(conjunto[x - 1] & conjunto[y - 1]);
        } else {
            return __builtin_popcountll(conjunto[x - 1] | conjunto[y - 1]);
        }
    return 0;
}

int main() {
    int t;
    int n;
    int size;
    int oper;
    int testType;
    int x;
    int y;
    cin >> t;
    for (int i = 0; i < t; i++) { //Início T processos
        cin >> n;
        long long int conjunto[n];  
        for (int j = 0; j < n; j++) {
            cin >> size;
            conjunto[j] = createSet(size);
        }
        cin >> oper;
        for (int j = 0; j < oper; j++) {
            cin >> testType;
            cin >> x;
            cin >> y;
            cout << test(x, y, testType, conjunto);
        }
    }
    return 0;
}