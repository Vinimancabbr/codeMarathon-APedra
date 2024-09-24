#include <iostream>
#include <cmath>

using namespace std;

int distancia(int iIni, int jIni, int iFim, int jFim);
int menorDistancia(int iIniF, int jIniF, int l);

int iIni = 0;
int jIni = 0;
int realL;
int r;
int c;
char teclado[50][50];
string texto;


int main()  {
    int totalDistancia = 0;
    cout << texto;
    cin >> r >> c;

    for (int i = 0; i < r; i++)  {
        for (int j = 0; j < c; j++) {
            cin >> teclado[i][j];
        }
    }
    
    cin >> texto;
    texto+='*';

    cout << "Texto: " << texto << endl;;

    for (int contal = 0; contal < texto.length(); contal++) {
        cout << "Verificando letra: " << texto[contal] << endl;
        realL = contal;
        cout << "Distancia do ";
        cout << "Ponto de saida: " << "I: " << iIni << " J: " << jIni << endl;
        totalDistancia += menorDistancia(iIni, jIni, contal);
        cout << "Total: " << (totalDistancia) << endl;
        
    }
    totalDistancia += texto.length();

    cout << "Resposta: " << (totalDistancia) << endl;


    return 0;
}

int distancia(int iIni, int jIni, int iFim, int jFim) {
    int colDist = abs(jIni - jFim);
    int rowDist = abs(iIni - iFim);

    return colDist + rowDist;
}

int menorDistancia(int iIniF, int jIniF, int l) {
    int menorDistanciaV = 9999999;
    int distanciaTemp;
    int nextI;
    int nextJ;


    for (int i = 0; i < r; i++)  {
            for (int j = 0; j < c; j++) {
                if (texto[l] == teclado[i][j]) {
                    distanciaTemp = distancia(iIniF, jIniF, i, j);
                    if (distanciaTemp < menorDistanciaV || (distanciaTemp == menorDistanciaV && l == texto.length())) {
                        nextI = i;
                        nextJ = j;
                        menorDistanciaV = distanciaTemp;
                    } else if (menorDistancia(i, j, l+1) < menorDistancia(nextI, nextJ, l+1) && distanciaTemp == menorDistanciaV) {
                        nextI = i;
                        nextJ = j;
                        menorDistanciaV = distanciaTemp;
                    } else if (distanciaTemp == menorDistanciaV && menorDistancia(i, j, l+1) > menorDistancia(nextI, nextJ, l+1)) {
                        menorDistanciaV = distancia(nextI, nextJ, i, j);
                    }
                }
            }
        }   

    if (l == realL) {
        cout << "Ate ";
        cout << "I: " << nextI << " J: " << nextJ << endl;
    }
        iIni = nextI;
        jIni = nextJ;
        return menorDistanciaV;
}

