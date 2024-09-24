#include <iostream>
#include <cmath>

using namespace std;

void printFita(int fita[], int N) {
    for(int i = 0; i < N; i++) {
        cout << fita[i] << " ";
    }
    cout << "\n";
}

int main(){
    // Seu código vai aqui
    int N;
    cin >> N;

	int fita[N];
    fita[0] = 0;
    
    for(int i = 0; i < N; i++) {
        cin >> fita[i];
    }
	
    int i1 = -1;
    int i2 = -1;
    cout << "fita antes:";
    printFita(fita, N);

    for (int i = 0; i < N; i++) {
        if (fita[i] == 0) {
            i1 = i2;
            cout << "i1: " << i1 << "\n";
            cout << "i2: " << i2 << "\n";
            if (i != 0) {
                i2 = i;
            } 
            for(int k = 1; k <= floor((i2 - i1)/2) + 1 && i2 - i1 > 1; k++) {
                fita[i2 - k] = k;
            }
            for(int j = 1; j <= floor((i2 - i1)/2) && i2 - i1 > 1; j++) {
                fita[i1 + j] = j;
            }
        } else if (i == N - 1) {
            cout << "i1: " << i1 << "\n";
            cout << "i2: " << i2 << "\n";
            for (int l = 0; l < N - i2; l++) {
                fita[i2 + l] = l; 
            }
        }

    }
    cout << "fita depois:";
    printFita(fita, N);
    return 0;
}

