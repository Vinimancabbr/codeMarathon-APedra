#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int hammingDistance(unsigned long long int a, unsigned long long int b) {
        unsigned long long int fval = a ^ b;
    return __builtin_popcountll(fval);
}

int main() {
    
    unsigned long long int a;
    unsigned long long int b;

    cin >> a;
    cin >> b;
    do {
        cout << hammingDistance(a, b) << "\n";
        cin >> a;
        cin >> b;
    } while (a != 0 || b != 0);
    return 0;
}