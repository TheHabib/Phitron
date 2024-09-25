#include <bits/stdc++.h>
using namespace std;
bool vis[100][100];
int dis[100][100];
vector<pair<int, int>> d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
int n, m;
bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) {
        return false;
    }
    return true;
}

void bfs(int ki, int kj, int qi, int qj) {
    queue<pair<int, int>> q;
    q.push({ki, kj});
    vis[ki][kj] = true;
    dis[ki][kj] = 0;
    while (!q.empty()) {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        if (a == qi && b == qj) {
            return;
        }

        for (int i = 0; i < 8; i++) {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        bfs(ki, kj, qi, qj);

        if(dis[qi][qj] != -1) {
            cout << dis[qi][qj] << endl;
        }
        else{
            cout << -1 << endl;
        }
        
    }
    
    return 0;
}