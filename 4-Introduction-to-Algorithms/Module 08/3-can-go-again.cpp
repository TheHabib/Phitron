#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e16;

class Edge {
public:
    int u, v;
    long long w;
    Edge(int u, int v, long long w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

const int N = 1005;

vector<Edge> EdgeList;
long long dist[N];
int n, e, T, S;

bool cycle() {
    for (Edge ed : EdgeList) {
        int u = ed.u, v = ed.v;
        long long w = ed.w;
        if (dist[u] != INF && dist[u] + w < dist[v]) {
            return true;
        }
    }
    return false;
}


void bellman_ford(int src) {
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
    }
    dist[src] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (Edge ed : EdgeList) {
            int u = ed.u, v = ed.v;
            long long w = ed.w;
            if (dist[u] < INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
}

int main() {
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        EdgeList.push_back(Edge(u, v, w));
    }

    cin >> S >> T;

    bellman_ford(S);

    if (cycle()) {
        cout << "Negative Cycle Detected" << endl;
    } else {
        while (T--) {
            int d;
            cin >> d;
            if (dist[d] == INF) {
                cout << "Not Possible" << endl;
            } else {
                cout << dist[d] << endl;
            }
        }
    }

    return 0;
}
