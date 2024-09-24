#include <iostream>

using namespace std;

int main() {

    unsigned long long int total;
    unsigned long long int acerto;
    double media;

    cin >> total;
    cin >> acerto;

    media = (double) acerto/(total);

    printf("%.2f%%\n", media * 100);
    return 0;
}