#include <iostream>
#include <queue>
#include <vector>

// int kruskal(int adj[100][100], int n);

using namespace std;

struct Conexao {
    int u;
    int v;
    int p;
};

class Comparador {
public:
    bool operator()(Conexao a, Conexao b) {
        if (a.p > b.p) {
            return true;
        }
        else {
            return false;
        }
    }
};

int kruskal(priority_queue<Conexao, vector<Conexao>, Comparador> fila, int m);
int find(int x);
void unionT(int x, int y);

int parent[100];
int total = 0;

int main() {
    int m, n, u, v, p;

    priority_queue<Conexao, vector<Conexao>, Comparador> fila;
    Conexao aresta;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> u >> v >> p;
        parent[u] = u; 
        parent[v] = v; 
        aresta = {u, v, p};
        fila.push(aresta);
    }
    
    kruskal(fila, m);
    cout << total << endl;
    return 0;
}

int kruskal(priority_queue<Conexao, vector<Conexao>, Comparador> fila, int m) {

    for (int i = 0; i < m; i++) {
        Conexao aresta = fila.top();

        if (find(aresta.u) != find(aresta.v)) {
            total += aresta.p;
            unionT(aresta.u, aresta.v);
        }
        fila.pop();
    }
    return 0;
}

int find(int x) {
    if (parent[x] != x) {
        return find(parent[x]);
    } else {
        return x;
    }
}

void unionT(int x, int y) {
    parent[find(y)] = find(x);
}
